//
//  main.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//
#include "ColorPairUtility.hpp"
#include "ColorpairTest.hpp"

void runColorpairTests()
{
    ColorPairTests::testNumberToPair(4, ColorPairInfo::WHITE, ColorPairInfo::BROWN);
    ColorPairTests::testNumberToPair(5, ColorPairInfo::WHITE, ColorPairInfo::SLATE);

    ColorPairTests::testPairToNumber(ColorPairInfo::BLACK, ColorPairInfo::ORANGE, 12);
    ColorPairTests::testPairToNumber(ColorPairInfo::VIOLET, ColorPairInfo::SLATE, 25);
}

int main()
{
    runColorpairTests();
    TelCoColorCoder::PrintColorCodingManual();
    return 0;
}
