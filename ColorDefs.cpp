//
//  ColorDefs.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#include "ColorDefs.hpp"

namespace ColorPairInfo
{
    const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}
