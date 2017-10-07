#ifndef COLOR_H
#define COLOR_H

#include <string>

using std::string;

class Color 
{
    public:
        
        Color(string colorName, unsigned int bitIndex);

        string getColorName();

        unsigned int getBitIndex();

    private:

        /// An unique human-readable identifier that represents the Color.
        string colorName;

        /// The number of bits to shift left in order to represent the color
        /// in a bitwise manner. For example, if bitIndex == 5, then the fifth
        /// bit to the left (i.e. 1<<bitIndex).
        unsigned int bitIndex;

};

#endif
