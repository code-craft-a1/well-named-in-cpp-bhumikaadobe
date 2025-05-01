//
//  ColorPairUtility.cpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#include "ColorPairUtility.hpp"
#include <fstream>
#include <iostream>

using ColorPairInfo::numberOfMajorColors;
using ColorPairInfo::numberOfMinorColors;

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorCodingManual(const std::string& filename) {
        std::ofstream outFile(filename);
        if (!outFile.is_open()) {
            std::cerr << "Error: Unable to open file for writing.\n";
            return;
        }
        std::cout << "------------|-------------|-------------\n";
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair pair = GetColorFromPairNumber(i);
            std::cout << "Pair Number: " << i << ":: Major Color is "
            << ColorPairInfo::MajorColorNames[pair.getMajor()] << " ,Minor Color is "
            << ColorPairInfo::MinorColorNames[pair.getMinor()] << "\n";
            outFile << "Pair Number: " << i << ":: Major Color is "
            << ColorPairInfo::MajorColorNames[pair.getMajor()] << " ,Minor Color is "
            << ColorPairInfo::MinorColorNames[pair.getMinor()] << "\n";
        }
        outFile.close();
    }
}
