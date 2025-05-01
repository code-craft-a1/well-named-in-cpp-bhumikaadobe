//
//  ColorDefs.hpp
//  wellnamed
//
//  Created by Bhumika Vaish on 01/05/25.
//

#ifndef ColorDefs_hpp
#define ColorDefs_hpp

#include <stdio.h>
namespace ColorPairInfo {
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;
}
#endif /* ColorDefs_hpp */
