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
#include "ColorDefs.hpp"

using ColorPairInfo::MajorColor;
using ColorPairInfo::MinorColor;

class ColorPair
{
private:
    MajorColor majorColor;
    MinorColor minorColor;
    
public:
    ColorPair(MajorColor major, MinorColor minor):
    majorColor(major), minorColor(minor)
    {}
    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();
};

#endif /* ColorPair_hpp */
