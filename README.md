# bin2header
This is a simple command-line program for converting binary files into C or C++ header files.  

## building
The program is all in one C file, and you can easily build it with whatever tool like. I've included a CMake build, so you can generate a Unix makefile, Visual Studio project, etc. Here's a build example using make.

* git clone https://github.com/jessechounard/bin2header.git
* cd bin2header
* mkdir build
* cd build
* cmake .. -DCMAKE_INSTALL_PREFIX=".."
* make
* make install

## usage
The program takes three arguments at the command line.
```
bin2header binary_filename header_filename variable_name
```
* binary_filename - The file you're trying to headerize
* header_filename - The header file you want to create.
* variable_name - What you want the variable in your program to be named.

Here's a usage example continuing on from the build example earlier. This will convert the README.md file you're reading right now into a header file called readme.h.
* cd ../bin
* ./bin2header ../README.md readme.h readme_bytes

And the resulting file will look something like this:
```
#ifndef readme_bytes_BIN2HEADER
#define readme_bytes_BIN2HEADER

#ifdef __cplusplus
extern "C" {
#endif

unsigned int readme_bytes_length = 1056;

unsigned char readme_bytes[] =
{
	0x23, 0x20, 0x62, 0x69, 0x6e, 0x32, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x0a, 0x54, 0x68, 0x69, 
	0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x73, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x63, 0x6f, 
	0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x2d, 0x6c, 0x69, 0x6e, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 
	0x61, 0x6d, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x63, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x69, 0x6e, 
	0x67, 0x20, 0x62, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x20, 0x69, 
	0x6e, 0x74, 0x6f, 0x20, 0x43, 0x20, 0x6f, 0x72, 0x20, 0x43, 0x2b, 0x2b, 0x20, 0x68, 0x65, 0x61, 
	0x64, 0x65, 0x72, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x2e, 0x20, 0x20, 0x0a, 0x0a, 0x23, 0x23, 
	0x20, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x69, 0x6e, 0x67, 0x0a, 0x54, 0x68, 0x65, 0x20, 0x70, 0x72, 
	0x6f, 0x67, 0x72, 0x61, 0x6d, 0x20, 0x69, 0x73, 0x20, 0x61, 0x6c, 0x6c, 0x20, 0x69, 0x6e, 0x20, 
	0x6f, 0x6e, 0x65, 0x20, 0x43, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x2c, 0x20, 0x61, 0x6e, 0x64, 0x20, 
	0x79, 0x6f, 0x75, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x65, 0x61, 0x73, 0x69, 0x6c, 0x79, 0x20, 0x62, 
	0x75, 0x69, 0x6c, 0x64, 0x20, 0x69, 0x74, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x77, 0x68, 0x61, 
	0x74, 0x65, 0x76, 0x65, 0x72, 0x20, 0x74, 0x6f, 0x6f, 0x6c, 0x20, 0x6c, 0x69, 0x6b, 0x65, 0x2e, 
	0x20, 0x49, 0x27, 0x76, 0x65, 0x20, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x64, 0x20, 0x61, 
	0x20, 0x43, 0x4d, 0x61, 0x6b, 0x65, 0x20, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x2c, 0x20, 0x73, 0x6f, 
	0x20, 0x79, 0x6f, 0x75, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 
	0x65, 0x20, 0x61, 0x20, 0x55, 0x6e, 0x69, 0x78, 0x20, 0x6d, 0x61, 0x6b, 0x65, 0x66, 0x69, 0x6c, 
	0x65, 0x2c, 0x20, 0x56, 0x69, 0x73, 0x75, 0x61, 0x6c, 0x20, 0x53, 0x74, 0x75, 0x64, 0x69, 0x6f, 
	0x20, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x2c, 0x20, 0x65, 0x74, 0x63, 0x2e, 0x0a, 0x0a, 
	0x2a, 0x20, 0x67, 0x69, 0x74, 0x20, 0x63, 0x6c, 0x6f, 0x6e, 0x65, 0x20, 0x68, 0x74, 0x74, 0x70, 
	0x73, 0x3a, 0x2f, 0x2f, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x6a, 
	0x65, 0x73, 0x73, 0x65, 0x63, 0x68, 0x6f, 0x75, 0x6e, 0x61, 0x72, 0x64, 0x2f, 0x62, 0x69, 0x6e, 
	0x32, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x2e, 0x67, 0x69, 0x74, 0x0a, 0x2a, 0x20, 0x63, 0x64, 
	0x20, 0x62, 0x69, 0x6e, 0x32, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x0a, 0x2a, 0x20, 0x6d, 0x6b, 
	0x64, 0x69, 0x72, 0x20, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x0a, 0x2a, 0x20, 0x63, 0x64, 0x20, 0x62, 
	0x75, 0x69, 0x6c, 0x64, 0x0a, 0x2a, 0x20, 0x63, 0x6d, 0x61, 0x6b, 0x65, 0x20, 0x2d, 0x44, 0x43, 
	0x4d, 0x41, 0x4b, 0x45, 0x5f, 0x49, 0x4e, 0x53, 0x54, 0x41, 0x4c, 0x4c, 0x5f, 0x50, 0x52, 0x45, 
	0x46, 0x49, 0x58, 0x3d, 0x22, 0x2e, 0x2e, 0x22, 0x0a, 0x2a, 0x20, 0x6d, 0x61, 0x6b, 0x65, 0x0a, 
	0x2a, 0x20, 0x6d, 0x61, 0x6b, 0x65, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6c, 0x6c, 0x0a, 0x0a, 
	0x23, 0x23, 0x20, 0x75, 0x73, 0x61, 0x67, 0x65, 0x0a, 0x54, 0x68, 0x65, 0x20, 0x70, 0x72, 0x6f, 
	0x67, 0x72, 0x61, 0x6d, 0x20, 0x74, 0x61, 0x6b, 0x65, 0x73, 0x20, 0x74, 0x68, 0x72, 0x65, 0x65, 
	0x20, 0x61, 0x72, 0x67, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x73, 0x20, 0x61, 0x74, 0x20, 0x74, 0x68, 
	0x65, 0x20, 0x63, 0x6f, 0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x20, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x0a, 
	0x60, 0x60, 0x60, 0x0a, 0x62, 0x69, 0x6e, 0x32, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x62, 
	0x69, 0x6e, 0x61, 0x72, 0x79, 0x5f, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x68, 
	0x65, 0x61, 0x64, 0x65, 0x72, 0x5f, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x76, 
	0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0a, 0x60, 0x60, 0x60, 
	0x0a, 0x2a, 0x20, 0x62, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x5f, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 
	0x6d, 0x65, 0x20, 0x2d, 0x20, 0x54, 0x68, 0x65, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x79, 0x6f, 
	0x75, 0x27, 0x72, 0x65, 0x20, 0x74, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x68, 
	0x65, 0x61, 0x64, 0x65, 0x72, 0x69, 0x7a, 0x65, 0x0a, 0x2a, 0x20, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x5f, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x2d, 0x20, 0x54, 0x68, 0x65, 
	0x20, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x79, 0x6f, 0x75, 
	0x20, 0x77, 0x61, 0x6e, 0x74, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x2e, 
	0x0a, 0x2a, 0x20, 0x76, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 
	0x20, 0x2d, 0x20, 0x57, 0x68, 0x61, 0x74, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x77, 0x61, 0x6e, 0x74, 
	0x20, 0x74, 0x68, 0x65, 0x20, 0x76, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x69, 0x6e, 
	0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x20, 0x74, 0x6f, 
	0x20, 0x62, 0x65, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x64, 0x2e, 0x0a, 0x0a, 0x48, 0x65, 0x72, 0x65, 
	0x27, 0x73, 0x20, 0x61, 0x6e, 0x20, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x63, 0x6f, 
	0x6e, 0x74, 0x69, 0x6e, 0x75, 0x69, 0x6e, 0x67, 0x20, 0x6f, 0x6e, 0x20, 0x66, 0x72, 0x6f, 0x6d, 
	0x20, 0x74, 0x68, 0x65, 0x20, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x20, 0x73, 0x74, 0x65, 0x70, 0x73, 
	0x20, 0x65, 0x61, 0x72, 0x6c, 0x69, 0x65, 0x72, 0x2e, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x77, 
	0x69, 0x6c, 0x6c, 0x20, 0x63, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x20, 0x74, 0x68, 0x65, 0x20, 
	0x52, 0x45, 0x41, 0x44, 0x4d, 0x45, 0x2e, 0x6d, 0x64, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x79, 
	0x6f, 0x75, 0x27, 0x72, 0x65, 0x20, 0x72, 0x65, 0x61, 0x64, 0x69, 0x6e, 0x67, 0x20, 0x72, 0x69, 
	0x67, 0x68, 0x74, 0x20, 0x6e, 0x6f, 0x77, 0x20, 0x69, 0x6e, 0x74, 0x6f, 0x20, 0x61, 0x20, 0x68, 
	0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x63, 0x61, 0x6c, 0x6c, 0x65, 
	0x64, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6d, 0x65, 0x2e, 0x68, 0x2e, 0x0a, 0x2a, 0x20, 0x63, 0x64, 
	0x20, 0x2e, 0x2e, 0x2f, 0x62, 0x69, 0x6e, 0x0a, 0x2a, 0x20, 0x2e, 0x2f, 0x62, 0x69, 0x6e, 0x32, 
	0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x2e, 0x2e, 0x2f, 0x52, 0x45, 0x41, 0x44, 0x4d, 0x45, 
	0x2e, 0x6d, 0x64, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6d, 0x65, 0x2e, 0x68, 0x20, 0x72, 0x65, 0x61, 
	0x64, 0x6d, 0x65, 0x5f, 0x62, 0x79, 0x74, 0x65, 0x73, 0x0a, 0x0a, 0x41, 0x6e, 0x64, 0x20, 0x74, 
	0x68, 0x65, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x69, 0x6c, 
	0x65, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x20, 0x73, 0x6f, 0x6d, 0x65, 
	0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x6c, 0x69, 0x6b, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x3a
};

#ifdef __cplusplus
}
#endif

#endif
```
