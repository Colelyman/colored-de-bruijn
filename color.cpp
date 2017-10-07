#include "color.h"

Color::Color(string colorName, unsigned int bitIndex)
{
    this->colorName = colorName;
    this->bitIndex = bitIndex;
}

Color::getColorName()
{
    return colorName;
}

Color::getBitIndex() 
{
    return bitIndex;
}
