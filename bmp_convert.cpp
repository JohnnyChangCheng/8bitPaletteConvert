#include <iostream>
#include <stdint.h>
#include <fstream>
#include <limits.h>
#include <cstring>

#include "palette.h"

typedef struct __attribute__((packed)){
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
} pixel_t;
typedef struct __attribute__((packed))
{  
    uint16_t bfType;    
    uint32_t bfSize; 
    uint16_t bfReserved1; 
    uint16_t bfReserved2; 
    uint32_t bfOffBits;
}BITMAPFILEHEADER_t; 
typedef struct __attribute__((packed))
{
    uint32_t biSize; 
    uint32_t biWidth; 
    uint32_t biHeight; 
    uint16_t biPlanes; 
    uint16_t biBitCount; 
    uint32_t biCompression; 
    uint32_t biSizeImage; 
    uint32_t biXPelsPerMeter; 
    uint32_t biYPelsPerMeter; 
    uint32_t biClrUsed; 
    uint32_t biClrImportant;
}BITMAPINFOHEADER_t;
class Image_t{
    public:
        Image_t(){
            bmp_header=new BITMAPFILEHEADER_t;
            bmp_info=new BITMAPINFOHEADER_t;
        };
        ~Image_t(){
            delete bmp_header;
            delete bmp_info;
            delete[] palette;
        };
        int Parser(std::string filename){     
            std::fstream fs;
            fs.open (filename, std::fstream::in | std::fstream::binary);
            fs.read((char*)bmp_header,sizeof(BITMAPFILEHEADER_t));
            fs.read((char*)bmp_info,sizeof(BITMAPINFOHEADER_t)); 
            palette_size = bmp_info->biClrUsed;
            palette = new pixel_t[palette_size];
            fs.read((char*)palette,sizeof(pixel_t)*bmp_info->biClrUsed); 
            length_image = bmp_header->bfSize - bmp_header->bfOffBits;
            container = new uint8_t[length_image]{0};
            fs.read((char*)container,length_image); 
            fs.close();
            return 0;
        }
        uint32_t length_image;
        uint8_t palette_size;
        BITMAPFILEHEADER_t *bmp_header;
        BITMAPINFOHEADER_t *bmp_info;
        pixel_t* palette;
        uint8_t* container = NULL;
};
int* Palette_compare(Image_t* src){
    int* mapper = new int[256]{0};
    for(int i = 0;i < src->palette_size; ++i)
	{
		int min_index = 0;
		int min_dist = INT_MAX;
		for(int j = 0 ; j < 128; ++j)
		{

			int r = src->palette[i].r - Palette[j].r;
			int g = src->palette[i].g - Palette[j].g;
			int b = src->palette[i].b - Palette[j].b;

			int dist = r*r + b*b + g*g;

			if(dist < min_dist )
			{
				min_dist = dist;
				min_index = j<<1;
			}
		}
		mapper[i] = min_index;
	}
    return mapper;
}
void SetPalette(Image_t *src,int *mapper){
    pixel_t* palette= new pixel_t[256];
    memset(palette,0,sizeof(pixel_t)*256);
    for(int i =0 ;i<128;i++){
        palette[i<<1].r = Palette[i].r;
        palette[i<<1].g = Palette[i].g;
        palette[i<<1].b = Palette[i].b;
    }
    for(int i =0 ;i <src->length_image;i++ ){
        src->container[i]= mapper[src->container[i]];
    }
     src->palette = palette;
     int diff = 256-src->bmp_info->biClrUsed;
     src->bmp_header->bfOffBits += diff*4;
     src->bmp_info->biSizeImage += diff*4;
     src->bmp_header->bfSize += diff*4;
     src->bmp_info->biClrUsed = 256;

}
int main(int argc ,char* argv[]){
    Image_t src_image;
    std::string filename(argv[1]);
    std::string outfilename(argv[2]);
    src_image.Parser(filename);
    std::cout << "BMP Format bit : "<<src_image.bmp_info->biBitCount<<std::endl;
    std::cout << "BMP FILE SIZE : "<<src_image.bmp_header->bfSize<<std::endl;
    std::cout << "PALETTE SIZE : "<<src_image.bmp_info->biClrUsed<<std::endl;
    int* mapper =  Palette_compare(&src_image);
    SetPalette(&src_image,mapper);
 
 
    std::fstream of;
    of.open(outfilename,std::fstream::out | std::fstream::binary);
    of.write((char*)src_image.bmp_header,sizeof(BITMAPFILEHEADER_t));
    of.write((char*)src_image.bmp_info,sizeof(BITMAPINFOHEADER_t));
    of.write((char*)src_image.palette,sizeof(pixel_t)*src_image.bmp_info->biClrUsed);
    of.write((char*)src_image.container,src_image.length_image);
    of.close();

}