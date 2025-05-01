//
//  ColorPair.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//
#include "ColorPair.hpp"
#include <string>

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    std::string ColorPair::ToString()
    {
        std::string colorPairStr = TelCoColorCoder::MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += TelCoColorCoder::MinorColorNames[minorColor];
        return colorPairStr;
    }

    MajorColor ColorPair::getMajor()
    {
        return majorColor;
    }

    MinorColor ColorPair::getMinor()
    {
        return minorColor;
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
