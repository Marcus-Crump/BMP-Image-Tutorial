// #include "Image.h"
#include "Image.cpp"

int main()
{
    // Dimensions of image in pixels
    const int width = 640;
    const int height = 640;

    Image image(width, height);

    //This for loop uses the x,y coordinates to create a specific color
    //Color is saved as an instance of Color struct storing RGB values of the pixel at x,y
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            image.setColor(Color((float)x / (float)width, 1.0f - ((float)x / (float)width), (float)y / (float)height),x,y);
        }
    }

    // Writes and saves the created image
    image.Export("image.bmp");

}