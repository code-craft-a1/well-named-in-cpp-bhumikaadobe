//
//  ColorpairTest.hpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#ifndef ColorpairTest_hpp
#define ColorpairTest_hpp

#include <stdio.h>
#include "ColorPair.hpp"

namespace ColorPairTests
{
    void testNumberToPair(int pairNumber,TelCoColorCoder::MajorColor expectedMajor,TelCoColorCoder::MinorColor expectedMinor);
    
    void testPairToNumber(TelCoColorCoder::MajorColor major,TelCoColorCoder::MinorColor minor,int expectedPairNumber);
}

#endif /* ColorpairTest_hpp */
