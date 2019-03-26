
#ifndef _BUILDDATE_H_
#define _BUILDDATE_H_

#define BUILD_MONTH_IS_JAN (__DATE__[0] == 'J' && __DATE__[1] == 'a' && __DATE__[2] == 'n')
#define BUILD_MONTH_IS_FEB (__DATE__[0] == 'F' && __DATE__[1] == 'e' && __DATE__[2] == 'b')
#define BUILD_MONTH_IS_MAR (__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'r')
#define BUILD_MONTH_IS_APR (__DATE__[0] == 'A' && __DATE__[1] == 'p' && __DATE__[2] == 'r')
#define BUILD_MONTH_IS_MAY (__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'y')
#define BUILD_MONTH_IS_JUN (__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'n')
#define BUILD_MONTH_IS_JUL (__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'l')
#define BUILD_MONTH_IS_AUG (__DATE__[0] == 'A' && __DATE__[1] == 'u' && __DATE__[2] == 'g')
#define BUILD_MONTH_IS_SEP (__DATE__[0] == 'S' && __DATE__[1] == 'e' && __DATE__[2] == 'p')
#define BUILD_MONTH_IS_OCT (__DATE__[0] == 'O' && __DATE__[1] == 'c' && __DATE__[2] == 't')
#define BUILD_MONTH_IS_NOV (__DATE__[0] == 'N' && __DATE__[1] == 'o' && __DATE__[2] == 'v')
#define BUILD_MONTH_IS_DEC (__DATE__[0] == 'D' && __DATE__[1] == 'e' && __DATE__[2] == 'c')

#define BUILDYEAR\
    (\
        ((__DATE__[7]  - '0') * 1000U) + \
        ((__DATE__[8]  - '0') *  100U) + \
        ((__DATE__[9]  - '0') *   10U) + \
        ((__DATE__[10] - '0') *    1U)   \
    )

#define BUILDMONTH \
    ( \
        (BUILD_MONTH_IS_JAN) ?  1U : \
        (BUILD_MONTH_IS_FEB) ?  2U : \
        (BUILD_MONTH_IS_MAR) ?  3U : \
        (BUILD_MONTH_IS_APR) ?  4U : \
        (BUILD_MONTH_IS_MAY) ?  5U : \
        (BUILD_MONTH_IS_JUN) ?  6U : \
        (BUILD_MONTH_IS_JUL) ?  7U : \
        (BUILD_MONTH_IS_AUG) ?  8U : \
        (BUILD_MONTH_IS_SEP) ?  9U : \
        (BUILD_MONTH_IS_OCT) ? 10U : \
        (BUILD_MONTH_IS_NOV) ? 11U : \
        (BUILD_MONTH_IS_DEC) ? 12U : \
        /* error default */     0U \
    )

#define BUILDDAY\
    (\
        ((__DATE__[4]  - '0') *   10U) + \
        ((__DATE__[5] - '0') *    1U)   \
    )

#define BUILDHOUR\
    (\
        ((__TIME__[0] - '0') *   10U) + \
        ((__TIME__[1] - '0') *    1U)   \
    )

#define BUILDMINUTE\
    (\
        ((__TIME__[3] - '0') *   10U) + \
        ((__TIME__[4] - '0') *    1U)   \
    )

#define BUILDSECOND\
    (\
        ((__TIME__[6] - '0') *   10U) + \
        ((__TIME__[7] - '0') *    1U)   \
    )

#define BCD_BUILDYEAR\
    (\
        ((0xFU & (__DATE__[7]  - '0')) << 12) | \
        ((0xFU & (__DATE__[8]  - '0')) <<  8) | \
        ((0xFU & (__DATE__[9]  - '0')) <<  4) | \
        ((0xFU & (__DATE__[10] - '0')) <<  0)   \
    )

#define BCD_BUILDMONTH \
    ( \
        (BUILD_MONTH_IS_JAN) ? 0x01U : \
        (BUILD_MONTH_IS_FEB) ? 0x02U : \
        (BUILD_MONTH_IS_MAR) ? 0x03U : \
        (BUILD_MONTH_IS_APR) ? 0x04U : \
        (BUILD_MONTH_IS_MAY) ? 0x05U : \
        (BUILD_MONTH_IS_JUN) ? 0x06U : \
        (BUILD_MONTH_IS_JUL) ? 0x07U : \
        (BUILD_MONTH_IS_AUG) ? 0x08U : \
        (BUILD_MONTH_IS_SEP) ? 0x09U : \
        (BUILD_MONTH_IS_OCT) ? 0x10U : \
        (BUILD_MONTH_IS_NOV) ? 0x11U : \
        (BUILD_MONTH_IS_DEC) ? 0x12U : \
        /* error default */    0x00U \
    )

#define BCD_BUILDDAY\
    (\
        ((0xFU & (__DATE__[4]  - '0')) <<  4) | \
        ((0xFU & (__DATE__[5]  - '0')) <<  0)   \
    )

#define BCD_BUILDHOUR\
    (\
        ((0xFU & (__TIME__[0]  - '0')) <<  4) | \
        ((0xFU & (__TIME__[1]  - '0')) <<  0)   \
    )

#define BCD_BUILDMINUTE\
    (\
        ((0xFU & (__TIME__[3]  - '0')) <<  4) | \
        ((0xFU & (__TIME__[4]  - '0')) <<  0)   \
    )

#define BCD_BUILDSECOND\
    (\
        ((0xFU & (__TIME__[6]  - '0')) <<  4) | \
        ((0xFU & (__TIME__[7]  - '0')) <<  0)   \
    )







#endif
