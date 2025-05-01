//
//  main.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//
#include "ColorPair.hpp"
#include "ColorpairTest.hpp"

void runColorpairTests()
{
    ColorPairTests::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    ColorPairTests::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    ColorPairTests::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    ColorPairTests::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
}

int main()
{
    runColorpairTests();
    return 0;
}
