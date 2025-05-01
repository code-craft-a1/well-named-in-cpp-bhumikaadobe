//
//  ColorPair.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//
#include "ColorPair.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip> // for std::setw

std::string ColorPair::ToString()
{
    std::string colorPairStr = ColorPairInfo::MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += ColorPairInfo::MinorColorNames[minorColor];
    return colorPairStr;
}

MajorColor ColorPair::getMajor() {
    return majorColor;
}

MinorColor ColorPair::getMinor() {
    return minorColor;
}
