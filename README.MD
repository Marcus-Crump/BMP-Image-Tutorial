
# BMP Image file Reader and Writer

In an attempt to speed up the sprite creation for my pokemon demo, I found a tutorial to create a
program that will read and write data to BMP image files.  
Below are the two videos I followed along with to create the program you will be using/implementing
> [Creating](https://www.youtube.com/watch?v=vqT5j38bWGg&pp=ygUNYysrIGJtcCBpbWFnZQ%3D%3D)  
> [Reading](https://www.youtube.com/watch?v=NcEE5xmpgQ0&t=7s&pp=ygUNYysrIGJtcCBpbWFnZdIHCQlRCQGHKiGM7w%3D%3D)  

The program files you see in this repository are copied line for line from the videos above  
However, the code used in the videos/program files can be easily modified to be used in other projects

# How to use

I know I've already stated this but I feel it useful to mention again before reading about each program  
These programs by themself have little to no functionality and were just mini projects I used so I could  
learn how to read and write BMP image files.  
The code in these programs can be adapted for various implementations that you will see in other projects of mine

## Writing Program

BmpTutorinal.cpp is the test program written in the tutorial that will create a rainbow gradient square  
This sqare is saved to a specific file declared in image.export()

```cpp
//Instance of Image struct creating a width x height sized image
Image image(width, height)

//Do some work with image instance

//Writes data to specified file
//Will create file if file doesn't exist
image.Export("<filename>.bmp")
```

After compiling BmpTutorial.cpp, the image file specified when calling .Export() should be saved  
in the same directory where the program ran and should look like the image below  
![image](image.bmp)  

## Reading BMP Image Files

There isn't really a program I can write that shows you it read the BMP file properly,  
but the reading functionality can be seen in other programs I have created
In particular, my Pokemon demo utilizes BMP image file reading