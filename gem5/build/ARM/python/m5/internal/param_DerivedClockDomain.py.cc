#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivedClockDomain[] = {
    120,156,197,88,95,111,227,198,17,159,37,41,218,146,165,179,
    125,62,223,157,207,110,173,34,48,162,6,141,213,92,123,77,
    219,28,140,166,241,1,77,129,58,41,213,214,23,181,13,67,
    147,107,139,50,69,10,228,218,142,2,251,165,62,180,125,235,
    135,40,250,208,239,209,239,213,206,204,146,52,109,159,15,7,
    52,144,108,113,177,92,238,206,236,204,252,230,207,174,15,249,
    95,13,159,95,180,1,178,67,1,16,224,79,64,4,48,18,
    208,23,32,164,128,96,5,142,107,144,254,24,130,26,188,2,
    232,27,32,13,184,196,142,9,127,52,32,110,242,26,27,34,
    147,71,4,76,26,32,45,232,215,96,63,94,6,75,218,112,
    220,128,244,43,16,66,196,2,94,6,115,16,204,195,43,164,
    142,157,58,19,156,135,160,193,157,58,4,11,220,105,192,100,
    9,228,2,244,145,248,28,244,91,72,234,61,36,117,143,73,
    253,135,72,5,248,229,1,4,45,154,142,123,249,130,102,90,
    52,147,121,220,99,42,139,197,206,150,160,191,92,244,239,87,
    250,43,149,254,3,238,47,130,92,134,225,42,12,31,194,240,
    17,160,66,130,165,146,195,99,144,38,12,215,160,191,6,18,
    127,143,225,18,245,19,44,87,86,60,225,21,247,203,21,235,
    188,98,3,250,27,32,241,183,174,87,216,208,235,172,162,206,
    195,255,226,95,7,117,14,170,137,205,169,76,179,48,137,221,
    48,62,76,66,131,190,219,212,144,133,124,106,230,114,83,125,
    66,166,250,55,176,157,2,35,55,213,5,32,97,65,178,68,
    6,92,112,231,194,128,73,7,206,5,12,45,8,76,56,71,
    54,53,218,192,145,128,75,3,254,100,210,132,11,108,45,84,
    238,119,193,82,218,78,67,86,174,166,52,7,23,53,56,175,
    65,239,229,185,65,3,199,117,72,255,5,223,108,48,209,121,
    38,106,192,57,182,22,92,90,112,97,195,62,78,194,161,97,
    157,196,23,47,207,81,82,28,233,117,44,220,237,94,69,92,
    18,37,8,211,216,27,73,181,134,125,119,236,165,222,200,221,
    149,105,120,42,131,79,162,196,63,222,77,70,94,24,119,26,
    197,244,36,219,30,123,106,224,240,122,147,20,51,26,43,166,
    155,196,82,45,96,231,48,140,3,119,148,4,39,145,84,243,
    68,212,61,12,35,233,186,252,241,211,209,56,73,213,139,52,
    77,82,135,116,203,131,81,226,149,43,72,179,126,148,100,178,
    67,220,152,141,67,228,21,205,62,28,51,69,218,0,239,153,
    22,7,50,243,211,112,172,208,100,154,34,205,38,106,29,50,
    22,55,153,135,77,247,247,25,26,182,59,72,142,229,73,124,
    28,142,186,187,242,84,70,201,120,36,99,213,125,241,226,233,
    7,63,219,237,30,201,209,179,238,193,73,24,5,221,143,157,
    223,116,199,19,53,72,226,46,142,133,177,146,168,166,168,123,
    151,130,182,113,238,125,98,117,22,30,185,33,11,233,14,100,
    52,150,105,139,70,159,208,54,196,146,104,10,91,152,162,35,
    90,216,171,225,99,138,13,99,65,236,133,36,166,79,162,19,
    212,204,2,92,255,4,54,35,162,224,216,128,116,131,160,51,
    196,159,32,91,35,128,122,244,205,224,111,191,37,253,232,209,
    161,73,128,208,131,231,12,55,196,29,206,124,78,8,136,129,
    49,83,131,161,13,26,75,8,65,13,174,116,66,45,78,39,
    50,6,18,183,32,251,199,117,10,241,18,160,254,209,189,113,
    232,33,178,250,11,195,179,215,161,141,239,49,58,212,32,204,
    146,179,152,109,64,125,118,168,30,234,228,243,201,103,7,67,
    233,171,108,19,7,190,72,78,218,190,23,199,137,106,123,65,
    208,246,148,74,195,131,19,37,179,182,74,218,91,89,167,78,
    70,95,46,0,86,210,155,140,11,64,145,241,17,80,250,37,
    8,125,133,47,43,252,194,250,207,164,66,112,12,146,32,195,
    113,34,113,36,149,67,155,84,247,176,249,184,96,199,40,236,
    216,5,102,50,25,29,170,6,195,207,203,50,151,217,209,56,
    35,141,86,159,122,209,137,84,52,63,83,158,66,174,212,213,
    140,166,142,181,199,36,109,33,44,41,208,141,147,56,152,224,
    94,67,127,139,182,241,152,17,215,4,194,220,42,226,109,14,
    91,27,90,136,191,37,195,39,177,172,28,109,140,180,135,164,
    4,96,235,139,60,152,32,234,46,49,228,116,12,142,25,44,
    31,59,99,155,122,180,216,33,80,59,235,212,108,80,243,157,
    66,5,211,212,67,235,166,30,158,18,111,131,133,247,205,92,
    204,210,161,246,174,57,212,218,149,67,97,152,236,145,99,24,
    228,62,87,142,97,146,34,210,157,220,11,200,229,16,8,248,
    185,130,125,86,143,179,68,98,219,5,108,29,194,98,21,144,
    71,21,64,58,100,25,70,163,179,118,151,42,55,103,171,202,
    35,173,202,103,196,187,153,227,168,197,248,105,8,159,64,96,
    228,138,101,165,238,98,103,242,136,148,90,85,231,35,76,126,
    251,113,139,179,24,103,66,174,7,116,52,209,90,214,29,139,
    16,119,104,194,195,60,59,101,228,252,227,52,249,122,210,78,
    14,219,10,138,61,60,223,202,182,183,178,143,48,60,180,119,
    56,224,232,0,161,67,64,42,199,41,186,122,157,95,180,251,
    186,236,202,110,158,86,80,237,148,233,217,90,172,108,142,86,
    153,74,41,72,77,93,211,141,82,211,180,241,143,136,113,131,
    213,108,194,35,124,26,130,119,231,38,28,49,185,230,224,175,
    248,252,146,20,78,50,75,160,170,208,233,233,189,179,88,36,
    160,243,238,53,228,76,81,40,231,61,228,178,91,56,159,13,
    37,78,232,49,105,219,228,15,127,3,174,204,4,252,21,8,
    19,104,250,220,131,216,87,233,33,211,174,208,244,47,129,131,
    209,107,146,159,161,61,209,200,195,21,58,106,246,33,79,213,
    185,240,215,240,247,74,36,187,52,65,80,222,50,243,218,171,
    154,183,172,210,119,25,76,111,149,155,172,235,78,78,134,26,
    120,25,77,211,238,108,150,238,124,21,20,203,90,9,99,212,
    52,113,54,175,89,186,180,187,79,175,80,70,73,97,93,172,
    24,21,236,252,128,154,247,75,216,136,98,108,74,27,221,188,
    25,197,43,217,204,213,145,243,87,180,27,139,247,191,104,115,
    169,117,155,84,233,42,181,194,85,158,150,174,34,57,168,191,
    226,106,157,90,131,240,112,105,8,60,42,97,65,67,167,20,
    11,100,13,250,54,57,21,23,161,34,247,57,81,4,58,10,
    144,215,50,6,235,105,79,107,176,132,132,182,54,53,95,79,
    61,176,144,193,159,71,222,232,32,240,118,246,137,45,241,246,
    11,47,52,10,65,150,170,130,144,7,137,187,100,225,215,31,
    22,2,157,78,61,168,124,128,92,74,65,216,133,130,196,231,
    72,242,187,129,108,143,228,232,0,55,48,8,199,237,195,200,
    59,98,139,153,185,160,159,21,130,42,54,249,205,140,157,81,
    184,218,75,218,126,18,99,22,56,241,85,146,182,3,137,71,
    23,25,180,223,111,115,10,105,135,89,219,59,192,175,158,175,
    180,71,92,119,112,46,14,189,244,40,227,58,240,248,140,186,
    51,177,184,139,71,213,16,75,224,151,133,162,244,209,169,204,
    7,92,245,106,247,194,196,138,71,18,53,209,65,239,39,212,
    124,159,154,45,152,85,218,232,34,151,63,16,59,82,162,141,
    113,169,46,184,184,189,61,251,115,162,146,221,246,241,179,183,
    241,113,125,17,146,123,186,77,51,229,28,157,157,169,173,83,
    10,233,55,138,193,5,110,155,60,216,42,238,90,238,241,224,
    34,244,151,232,146,130,70,150,41,80,204,253,191,129,130,157,
    107,38,110,245,229,183,26,31,156,167,51,151,195,249,17,228,
    85,198,93,177,65,84,133,108,233,216,48,20,69,105,95,149,
    144,47,18,54,223,0,67,215,79,165,167,164,182,225,147,25,
    200,206,65,71,111,226,171,210,146,133,128,229,129,231,195,82,
    200,75,46,184,38,15,42,5,56,27,86,236,99,117,132,69,
    250,57,235,193,53,116,157,126,133,89,171,84,7,213,51,177,
    60,123,205,118,180,74,116,65,78,219,242,198,99,25,7,87,
    197,54,127,153,58,56,40,186,81,180,40,170,30,172,172,31,
    224,115,219,93,73,196,138,196,108,210,90,233,160,179,48,46,
    3,123,80,152,181,67,213,206,85,56,119,200,168,58,128,151,
    177,219,249,121,105,166,119,223,136,218,232,216,13,120,128,14,
    121,111,61,23,171,178,252,102,164,24,226,58,246,205,75,195,
    211,48,144,41,243,121,235,201,196,104,161,96,164,199,216,142,
    236,139,129,140,164,146,119,226,79,145,74,242,3,119,32,49,
    111,39,19,60,5,242,73,10,223,35,215,157,77,130,251,41,
    114,249,51,228,81,149,18,156,141,41,110,21,255,235,86,93,
    112,53,113,227,146,89,239,144,14,14,250,204,48,201,28,14,
    111,139,165,137,249,14,180,200,228,236,226,116,242,221,243,70,
    250,74,139,175,104,156,239,81,243,78,129,18,246,75,125,160,
    228,147,154,62,43,163,59,115,169,195,149,141,179,77,227,196,
    119,244,108,187,16,109,91,139,86,145,137,47,98,71,207,212,
    250,107,39,246,194,145,190,232,83,203,55,190,7,41,45,94,
    189,49,138,218,15,189,40,252,70,223,236,21,195,188,248,54,
    103,66,70,229,157,107,135,59,162,52,195,32,149,71,97,134,
    20,153,220,237,120,69,150,81,91,111,130,102,149,200,76,208,
    163,43,122,125,135,177,67,226,103,59,216,208,157,94,125,177,
    46,108,131,110,144,77,209,16,45,97,137,102,171,110,214,237,
    122,205,68,132,209,200,138,104,152,245,70,83,232,255,77,68,
    91,195,216,108,214,197,255,0,102,91,22,32,
};

EmbeddedPython embedded_m5_internal_param_DerivedClockDomain(
    "m5/internal/param_DerivedClockDomain.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_DerivedClockDomain.py",
    "m5.internal.param_DerivedClockDomain",
    data_m5_internal_param_DerivedClockDomain,
    2156,
    6768);

} // anonymous namespace
