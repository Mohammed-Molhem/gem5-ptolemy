#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_pyobject[] = {
    120,156,189,86,221,110,27,69,20,62,179,187,118,98,39,110,
    92,162,254,209,64,141,80,132,169,32,22,21,21,66,173,42,
    10,169,160,149,72,203,90,168,109,64,44,238,238,218,94,199,
    222,181,118,38,45,70,206,13,169,128,11,36,30,2,113,193,
    123,240,40,188,7,156,239,140,215,113,42,144,184,192,88,222,
    209,236,153,217,243,243,157,239,156,153,144,102,191,18,63,31,
    52,136,244,31,60,137,248,175,104,72,52,82,180,175,72,197,
    138,162,58,29,148,40,127,151,162,18,61,39,218,119,40,118,
    232,152,39,46,125,225,80,186,46,223,148,105,232,138,68,209,
    164,74,177,71,251,37,122,152,158,37,47,46,211,65,149,242,
    175,73,41,149,42,122,20,173,80,180,74,207,89,59,79,42,
    162,112,149,162,170,76,42,20,173,201,164,74,147,58,197,107,
    180,207,202,87,104,191,198,170,174,178,170,51,162,234,119,168,
    138,120,229,44,69,53,108,103,95,30,99,167,135,157,98,227,
    140,104,217,160,104,67,38,172,203,165,65,29,19,118,180,221,
    124,137,3,77,254,228,95,83,241,204,172,243,240,52,206,117,
    146,165,65,146,118,179,196,193,122,25,3,240,9,49,172,204,
    128,250,8,64,253,70,130,82,228,204,128,58,34,82,120,39,
    26,58,116,36,147,35,135,38,77,154,42,26,120,20,185,52,
    101,51,37,58,86,212,83,116,236,208,151,46,54,28,241,232,
    113,104,175,146,103,44,74,3,9,205,106,90,161,163,18,77,
    75,212,126,52,117,32,56,168,80,254,43,125,187,37,74,87,
    69,169,67,83,30,61,58,246,232,168,76,15,121,19,139,6,
    21,0,162,30,77,57,82,150,180,155,30,123,187,183,16,46,
    66,137,146,60,237,140,98,83,225,121,48,158,100,79,6,113,
    104,154,213,98,57,211,59,227,142,233,251,178,223,5,16,163,
    177,17,61,89,26,155,53,158,116,147,52,10,70,89,116,56,
    140,205,42,148,4,221,100,24,7,129,44,222,29,141,179,220,
    220,201,243,44,247,129,165,8,135,89,103,254,5,144,12,135,
    153,142,155,176,38,102,124,168,55,216,221,29,139,70,56,32,
    62,226,227,40,214,97,158,140,13,167,200,106,196,110,104,107,
    34,57,50,232,123,60,180,62,215,156,200,86,63,59,136,15,
    211,131,100,212,218,141,159,198,195,108,60,138,83,211,186,115,
    231,218,59,239,239,182,122,241,232,122,235,201,97,50,140,90,
    183,253,79,91,227,137,233,103,105,75,63,75,122,173,2,137,
    29,22,130,36,16,6,137,68,19,244,227,225,56,206,107,144,
    190,12,123,170,174,214,85,89,185,170,169,106,60,43,241,227,
    170,45,103,77,237,37,136,39,68,140,224,144,91,176,230,23,
    146,252,112,122,15,28,202,183,192,137,1,255,21,146,200,204,
    104,99,205,145,181,207,0,132,149,14,92,100,218,10,167,194,
    35,38,20,239,188,137,212,166,36,100,40,209,160,76,150,36,
    204,45,203,154,124,130,145,183,67,141,195,202,61,210,63,159,
    214,144,214,137,129,230,170,97,209,121,54,245,157,240,174,221,
    132,227,123,66,3,211,79,116,246,44,21,176,49,151,74,105,
    51,38,15,38,247,5,39,125,133,5,143,179,195,70,216,73,
    211,204,52,58,81,212,232,24,147,39,79,14,77,172,27,38,
    107,108,235,38,56,230,159,45,152,52,215,55,25,23,204,65,
    150,153,57,246,37,74,66,195,47,155,242,34,248,235,216,48,
    11,250,89,164,89,14,21,189,216,248,112,210,156,225,225,118,
    97,78,232,214,44,23,228,208,241,176,107,170,194,179,142,214,
    129,152,131,92,40,133,175,159,118,134,135,177,193,126,109,58,
    134,173,98,106,13,45,143,84,23,17,86,17,21,144,10,210,
    44,141,38,236,84,18,110,195,222,69,161,214,58,129,92,231,
    152,88,43,60,150,169,198,68,171,59,33,252,247,102,180,18,
    74,157,71,180,36,105,86,179,118,192,244,58,230,166,209,116,
    164,234,37,16,41,175,6,102,248,216,7,123,253,203,24,182,
    48,188,82,196,186,148,128,107,47,6,124,13,70,28,137,50,
    116,103,241,204,75,100,239,84,137,92,58,41,17,238,104,109,
    80,221,65,65,156,80,221,69,196,249,173,25,175,81,68,156,
    90,94,94,96,179,224,224,215,17,95,185,32,162,15,118,45,
    82,172,183,64,49,31,41,16,126,249,151,254,9,179,43,255,
    19,102,61,139,217,117,24,89,159,49,163,38,140,168,170,16,
    105,117,102,8,10,122,187,60,153,92,0,122,139,184,93,224,
    3,233,97,90,147,147,69,78,39,57,33,109,35,176,112,218,
    137,7,14,117,93,58,63,59,49,52,234,118,156,103,223,76,
    26,89,183,97,168,240,225,230,182,222,217,214,55,184,178,27,
    183,164,87,216,218,182,213,155,199,227,156,171,84,142,149,192,
    86,94,32,85,24,204,90,63,227,123,14,184,57,5,170,210,
    104,180,201,209,95,150,7,105,117,14,41,60,188,1,11,85,
    193,211,165,11,252,84,149,184,17,216,15,228,192,151,85,126,
    62,4,178,8,46,38,92,136,252,182,117,82,252,71,36,254,
    27,167,184,176,12,239,253,171,172,110,183,168,155,50,205,51,
    143,199,133,127,160,242,15,124,114,42,36,255,123,66,150,57,
    153,51,242,75,153,225,65,178,54,177,253,43,146,134,241,55,
    39,145,99,139,200,153,181,20,174,49,253,158,108,181,7,211,
    61,250,113,161,219,28,187,164,112,136,184,179,27,206,226,33,
    226,205,203,78,232,241,175,14,10,239,116,125,34,35,253,142,
    198,54,91,137,238,188,18,79,26,215,252,134,194,237,101,41,
    204,89,181,186,3,184,113,247,132,55,232,208,151,213,166,179,
    192,134,183,48,188,61,39,130,42,100,255,181,71,87,94,108,
    169,11,103,72,96,219,216,39,48,235,137,163,27,229,176,160,
    50,188,252,24,249,71,131,49,54,225,68,63,33,93,88,222,
    179,97,200,245,10,133,30,102,105,202,38,31,240,229,71,91,
    156,161,177,147,247,150,87,167,126,139,213,181,105,126,66,72,
    202,95,184,142,91,227,243,251,132,158,104,31,18,127,99,238,
    252,170,109,92,124,91,51,19,185,35,88,180,230,34,116,167,
    61,190,6,216,11,106,3,223,189,134,225,117,12,111,66,3,
    140,89,167,164,246,108,63,75,227,103,210,209,132,140,254,14,
    134,214,210,107,95,130,185,105,123,231,45,220,132,53,12,227,
    118,80,217,168,168,178,131,75,167,171,170,124,83,240,212,122,
    173,226,86,202,149,146,203,183,5,72,54,85,213,173,172,85,
    156,191,0,147,52,234,147,
};

EmbeddedPython embedded_m5_internal_pyobject(
    "m5/internal/pyobject.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/swig/pyobject.py",
    "m5.internal.pyobject",
    data_m5_internal_pyobject,
    1463,
    3562);

} // anonymous namespace
