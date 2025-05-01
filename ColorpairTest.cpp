//
//  ColorpairTest.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#include "ColorpairTest.hpp"
#include <iostream>
#include <assert.h>
#include "ColorPairUtility.hpp"

namespace ColorPairTests
{
    void testNumberToPair(int pairNumber,MajorColor expectedMajor,MinorColor expectedMinor)
    {
        ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major,MinorColor minor,int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}
