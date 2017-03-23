#include "BitmapFilterTable.h"

namespace carto {

    const int BitmapFilterTable::_GaussTableSize = 64;

    const float BitmapFilterTable::_GaussTable[] = {
        1.0000f, 0.9394f, 0.8825f, 0.8290f, 0.7788f, 0.7316f, 0.6873f, 0.6456f,
        0.6065f, 0.5698f, 0.5353f, 0.5028f, 0.4724f, 0.4437f, 0.4169f, 0.3916f,
        0.3679f, 0.3456f, 0.3247f, 0.3050f, 0.2865f, 0.2691f, 0.2528f, 0.2375f,
        0.2231f, 0.2096f, 0.1969f, 0.1850f, 0.1738f, 0.1632f, 0.1534f, 0.1441f,
        0.1353f, 0.1271f, 0.1194f, 0.1122f, 0.1054f, 0.0990f, 0.0930f, 0.0874f,
        0.0821f, 0.0771f, 0.0724f, 0.0681f, 0.0639f, 0.0601f, 0.0564f, 0.0530f,
        0.0498f, 0.0468f, 0.0439f, 0.0413f, 0.0388f, 0.0364f, 0.0342f, 0.0321f,
        0.0302f, 0.0284f, 0.0266f, 0.0250f, 0.0235f, 0.0221f, 0.0208f, 0.0195f,
        0.0000f, 0.0000f
    };

}
