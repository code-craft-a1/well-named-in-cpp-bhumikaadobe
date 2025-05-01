//
//  ColorPairUtility.hpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#ifndef ColorPairUtility_hpp
#define ColorPairUtility_hpp

#include <stdio.h>
#include <string>
#include "ColorPair.hpp" // include ColorPair header

// Function declarations
namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    void PrintColorCodingManual(const std::string& filename = "/Users/bvaish/codecrafts/well-named-in-cpp-bhumikaadobe/wellnamed/wellnamed/ColorCoding.txt");
}
#endif /* ColorPairUtility_hpp */
