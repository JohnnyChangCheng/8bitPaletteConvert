CXXFLAGS := -std=c++11 -I./
TARGET = bmp_convert
all: ${TARGET}
	g++ -o ${TARGET} bmp_convert.cpp ${CXXFLAGS}
	@echo "makedone"
.PHONY : all clean 
clean:
	@rm -rf *.o ${TARGET}


