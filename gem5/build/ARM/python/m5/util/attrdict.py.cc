#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_attrdict[] = {
    120,156,197,85,223,111,220,68,16,158,93,159,125,63,146,54,
    161,18,9,41,2,156,23,116,18,40,134,86,32,21,218,82,
    32,33,17,18,121,240,9,181,68,173,140,177,55,137,47,119,
    246,201,187,46,28,10,47,132,63,156,153,177,215,119,73,4,
    15,136,131,187,100,189,59,235,157,217,249,230,155,239,18,104,
    62,14,254,63,243,1,244,219,2,32,197,63,1,169,132,51,
    7,78,120,169,4,156,162,197,129,63,0,174,0,126,56,145,
    244,134,146,108,237,180,86,135,14,53,86,183,181,118,64,185,
    144,122,112,33,161,220,22,184,141,214,19,15,210,46,40,15,
    162,46,164,61,154,164,125,120,76,143,1,236,28,226,115,220,
    133,195,163,218,92,175,123,180,238,211,155,87,162,222,58,60,
    58,170,15,60,193,199,143,232,228,230,110,202,83,199,198,91,
    163,237,49,255,69,237,178,11,17,135,231,51,54,40,62,235,
    120,28,151,167,57,226,176,14,163,225,29,4,202,244,112,136,
    141,41,211,44,49,134,44,211,106,98,178,214,50,64,75,49,
    51,89,145,211,50,177,24,35,178,240,21,97,252,57,78,20,
    222,73,16,180,53,148,136,85,141,30,77,58,13,210,39,110,
    3,46,221,158,241,60,233,66,56,26,122,120,94,63,197,225,
    121,25,207,124,138,241,161,175,11,127,94,84,126,18,231,126,
    165,149,79,119,201,126,170,12,206,146,68,105,237,155,194,63,
    83,38,208,202,248,106,162,166,42,55,58,145,232,66,54,197,
    255,154,46,22,224,228,82,192,37,192,133,7,229,14,77,198,
    108,65,80,71,70,128,145,100,186,146,48,118,172,117,72,89,
    29,15,59,4,203,26,14,81,132,97,50,163,166,81,100,92,
    186,103,53,83,101,72,233,155,77,187,221,94,46,138,134,20,
    223,208,105,173,38,167,60,161,221,33,29,224,65,31,226,16,
    124,175,85,169,131,243,226,66,85,249,69,54,13,246,213,107,
    53,41,102,148,70,112,112,240,224,227,71,251,193,153,154,126,
    18,232,50,9,102,115,115,94,228,1,174,42,147,77,2,91,
    149,61,180,175,45,223,32,138,118,201,191,199,165,89,23,119,
    68,226,52,88,116,44,30,223,214,120,24,224,180,5,161,162,
    119,201,50,22,84,52,180,148,159,17,40,198,177,184,116,24,
    63,73,243,17,161,231,46,173,57,215,99,67,128,69,92,67,
    67,193,210,172,100,194,104,19,151,70,255,156,153,243,144,226,
    215,144,213,23,214,246,194,139,117,141,240,144,28,132,228,42,
    236,210,235,4,248,235,120,82,169,213,224,23,174,163,175,247,
    23,160,237,138,29,177,34,18,165,106,82,167,120,11,12,220,
    169,193,96,56,23,201,175,40,101,34,237,7,55,120,34,154,
    102,150,54,101,170,95,75,18,155,141,176,204,38,87,188,226,
    203,174,136,218,235,150,218,200,35,106,172,143,40,128,228,59,
    183,37,106,239,251,6,192,181,178,8,212,161,107,215,166,139,
    86,179,20,61,45,80,174,219,153,188,175,52,5,221,166,240,
    112,145,194,144,20,151,101,55,138,242,120,138,155,220,51,81,
    52,45,210,106,66,203,110,77,142,34,65,202,208,123,204,85,
    174,94,120,143,134,55,175,65,255,239,243,132,28,190,71,78,
    41,174,39,60,209,119,249,235,220,150,255,109,248,11,249,15,
    107,137,208,175,160,145,118,27,128,212,221,156,199,198,207,149,
    54,42,189,165,238,74,251,113,101,138,105,108,178,36,158,76,
    230,126,82,42,132,112,224,227,167,57,66,110,240,7,41,46,
    51,165,247,18,219,176,174,101,68,140,147,249,125,34,177,17,
    182,61,165,109,207,231,249,51,232,160,88,93,12,160,124,9,
    66,8,82,192,142,85,192,47,224,119,128,156,15,226,15,237,
    111,146,136,114,9,86,247,28,16,248,24,189,96,134,177,0,
    134,125,42,0,247,45,247,54,119,6,215,247,46,14,95,218,
    212,14,202,178,40,67,234,121,174,109,163,129,55,21,143,14,
    167,43,42,41,221,233,17,57,221,228,242,57,226,62,54,255,
    134,240,100,95,108,10,22,171,112,139,6,170,103,248,150,205,
    98,149,36,163,108,63,37,167,20,220,147,158,248,7,228,122,
    130,195,119,69,154,157,206,111,211,43,246,167,153,214,89,126,
    182,196,176,113,165,141,95,42,83,149,185,246,143,139,92,181,
    114,210,146,231,225,223,147,231,94,75,158,61,34,15,49,225,
    197,146,224,184,45,19,164,197,48,220,177,218,73,1,255,27,
    161,167,184,223,144,211,222,82,181,255,151,42,83,186,251,109,
    149,81,74,26,225,155,198,89,30,69,25,161,150,73,75,254,
    95,121,156,103,125,198,114,96,219,37,138,80,7,80,10,73,
    233,89,155,234,54,147,54,29,62,245,75,72,138,21,190,75,
    195,96,181,73,113,10,143,107,181,126,250,14,57,127,128,195,
    134,220,218,222,186,187,213,91,23,125,252,14,176,173,54,197,
    154,112,165,144,93,76,155,103,194,197,157,13,252,221,117,69,
    15,45,127,2,84,83,160,139,
};

EmbeddedPython embedded_m5_util_attrdict(
    "m5/util/attrdict.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/python/m5/util/attrdict.py",
    "m5.util.attrdict",
    data_m5_util_attrdict,
    1112,
    3249);

} // anonymous namespace
