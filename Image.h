#pragma once

#include <vector>

//Struct to store the RGB color values for a given pixels hexcode color value
struct Color
{
    //Used to calculate the hexcode value for a color
    float r, g, b;

    Color();
    Color(float r, float b, float g);
    ~Color();
};


//Will store all the data for the image we want to create
class Image
{
public:
    Image(int width, int height);
    ~Image();

    Color GetColor(int x, int y) const;
    void setColor(const Color& color, int x, int y);

    void Read(const char* path);
    void Export(const char* path) const;

private:
    int m_width;
    int m_height;
    std::vector <Color> m_colors;
};


