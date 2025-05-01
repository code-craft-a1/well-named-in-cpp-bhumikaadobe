//
//  ColorPairUtility.hpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#ifndef ColorPairUtility_hpp
#define ColorPairUtility_hpp

#include <stdio.h>

class ColorPair;
namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

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

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif /* ColorPairUtility_hpp */
