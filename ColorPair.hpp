//
//  ColorPair.hpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#ifndef ColorPair_hpp
#define ColorPair_hpp

#include <stdio.h>
#include <string>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    class ColorPair
    {
    private:
        TelCoColorCoder::MajorColor majorColor;
        TelCoColorCoder::MinorColor minorColor;
        
    public:
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor):
        majorColor(major), minorColor(minor)
        {}
        TelCoColorCoder::MajorColor getMajor();
        TelCoColorCoder::MinorColor getMinor();
        std::string ToString();
    };
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif /* ColorPair_hpp */
