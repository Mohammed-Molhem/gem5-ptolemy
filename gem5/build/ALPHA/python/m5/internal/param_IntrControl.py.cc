#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntrControl[] = {
    120,156,197,88,109,115,220,72,17,238,145,180,107,239,218,27,
    219,113,222,227,196,202,5,23,203,21,231,229,2,225,128,75,
    5,66,156,170,11,117,231,11,90,168,228,150,3,33,75,227,
    181,214,122,217,146,198,206,237,149,253,5,167,128,111,252,8,
    138,15,252,5,62,243,191,160,187,71,146,229,181,67,93,21,
    176,177,87,83,163,121,239,238,231,233,238,145,15,197,95,3,
    159,159,217,0,249,63,4,64,128,63,1,17,64,44,96,32,
    64,72,1,193,42,236,55,32,251,1,4,13,120,3,48,48,
    64,26,112,130,21,19,126,99,64,178,200,115,154,16,153,220,
    34,96,210,6,105,193,160,1,47,147,21,176,100,19,246,219,
    144,253,30,132,16,137,128,87,193,28,4,243,240,6,87,199,
    74,139,23,156,135,160,205,149,22,4,11,92,105,195,100,25,
    228,2,12,112,241,57,24,116,112,169,247,113,169,75,188,212,
    63,105,169,0,123,174,64,208,161,225,120,150,47,104,164,69,
    35,121,143,75,188,202,82,121,178,101,24,172,148,245,203,181,
    250,106,173,126,165,86,191,90,171,95,171,213,175,215,234,55,
    106,245,155,181,250,173,90,253,54,215,151,64,174,192,104,13,
    70,119,96,116,23,118,81,161,203,213,169,215,65,154,48,178,
    97,96,131,196,223,58,156,160,206,131,149,218,140,123,60,227,
    114,53,227,61,158,113,31,6,247,65,226,239,61,61,163,9,
    253,238,85,180,99,248,47,252,235,162,29,65,45,98,113,40,
    179,60,76,19,55,76,118,211,208,160,254,38,21,100,117,159,
    138,185,194,252,79,201,252,127,7,182,125,96,20,230,63,6,
    92,88,144,44,145,1,199,92,57,54,96,210,133,35,1,35,
    11,2,19,142,112,155,6,29,96,40,224,196,128,47,77,26,
    112,140,165,133,6,187,11,150,210,182,31,177,193,244,74,115,
    112,220,128,163,6,244,95,29,25,212,176,223,130,236,111,240,
    245,26,47,58,207,139,26,112,132,165,5,39,22,28,55,225,
    37,14,194,166,81,139,196,23,175,142,80,82,108,233,119,45,
    60,237,118,77,92,18,37,8,179,196,139,165,186,140,117,119,
    236,101,94,236,62,79,84,246,52,197,34,141,186,237,114,92,
    154,111,142,61,181,231,240,68,147,52,18,143,21,47,152,38,
    82,45,96,101,55,76,2,55,78,131,131,72,170,121,90,205,
    221,13,35,233,186,220,249,60,30,167,153,122,150,101,105,230,
    144,82,185,49,74,189,106,6,169,212,143,210,92,118,105,55,
    222,198,161,229,21,141,222,29,243,138,116,0,62,44,77,14,
    100,238,103,225,88,161,173,244,138,52,154,86,235,146,149,184,
    200,191,196,162,247,235,28,45,218,219,75,247,229,65,178,31,
    198,189,45,121,40,163,116,28,203,68,245,158,61,123,240,225,
    143,183,122,67,25,63,236,237,28,132,81,208,123,242,233,139,
    79,158,244,198,19,181,151,38,61,108,13,19,37,81,67,81,
    239,156,110,54,113,16,105,45,127,29,14,221,144,229,115,247,
    100,52,150,89,135,90,111,209,9,196,178,88,20,77,97,138,
    174,232,96,173,129,143,41,214,140,5,177,29,146,132,62,73,
    77,240,50,75,64,253,21,216,116,104,249,125,3,178,53,130,
    203,8,127,130,236,139,160,233,83,159,193,125,191,36,213,232,
    214,145,73,32,208,141,71,12,49,196,26,142,124,68,86,79,
    128,113,210,128,81,19,52,126,16,118,26,80,217,132,74,28,
    78,203,24,184,184,5,249,95,206,174,144,44,3,170,30,221,
    4,54,93,195,173,254,192,144,236,119,233,224,219,12,12,181,
    23,230,233,235,132,213,79,117,38,81,31,117,242,98,242,249,
    206,72,250,42,95,199,134,47,210,3,219,247,146,36,85,182,
    23,4,182,167,84,22,238,28,40,153,219,42,181,55,242,110,
    139,236,189,82,98,171,90,111,50,46,177,68,118,71,44,233,
    151,32,244,21,190,172,242,11,235,63,151,10,113,177,151,6,
    57,182,211,18,67,169,28,58,164,186,132,197,147,114,59,6,
    96,183,89,194,37,151,209,174,106,51,242,188,60,119,121,59,
    106,103,144,209,236,67,47,58,144,138,198,231,202,83,184,43,
    85,245,70,179,132,217,13,18,180,148,147,116,231,38,105,18,
    76,240,152,161,191,65,39,184,193,96,91,4,130,219,85,132,
    218,28,150,77,232,32,244,150,13,159,36,178,10,160,49,200,
    174,145,252,192,134,23,133,239,64,192,157,160,135,233,26,236,
    34,88,52,166,160,77,53,154,236,16,158,157,219,84,172,81,
    113,167,148,126,70,42,232,76,171,224,1,109,107,176,220,190,
    89,72,88,209,104,251,12,141,110,158,210,8,29,98,159,232,
    96,16,105,78,233,96,146,14,178,199,5,246,137,104,104,126,
    236,174,33,158,53,227,44,147,196,205,18,172,14,33,176,14,
    195,97,13,134,14,25,133,49,232,220,124,155,22,215,223,153,
    22,135,90,139,15,105,219,197,2,61,29,70,77,91,248,100,
    122,163,208,41,235,115,11,43,147,235,164,207,186,38,175,99,
    132,123,153,116,56,84,113,184,227,68,66,187,15,173,96,93,
    177,8,103,187,38,92,43,66,80,78,108,31,103,233,87,19,
    59,221,181,21,148,103,120,180,145,111,110,228,31,163,63,176,
    31,179,135,209,30,65,115,62,147,227,12,185,221,226,23,205,
    87,151,185,235,22,33,4,53,78,225,156,13,197,122,102,247,
    148,171,140,188,210,44,149,220,174,148,76,103,254,152,246,108,
    179,134,77,184,142,79,91,240,193,220,148,189,35,231,20,220,
    139,207,207,73,215,36,174,4,202,36,157,190,62,54,75,68,
    178,57,223,62,131,151,217,200,227,188,143,27,108,149,108,107,
    66,133,14,122,76,58,49,17,224,79,192,73,151,128,63,2,
    33,1,13,94,80,134,201,73,15,25,116,149,134,255,14,216,
    241,92,16,227,12,77,61,163,112,77,200,204,252,35,30,170,
    67,222,47,224,207,53,175,117,98,130,160,240,100,22,105,85,
    61,60,89,21,89,25,66,223,40,4,89,103,89,77,54,218,
    243,114,26,166,249,107,86,252,61,117,128,85,54,132,78,105,
    70,232,154,215,187,185,116,176,231,167,216,34,223,127,91,172,
    26,53,196,124,151,138,15,42,176,136,178,237,255,127,198,245,
    105,103,93,139,87,174,118,144,159,208,65,44,62,250,82,83,
    167,136,167,107,84,164,104,148,164,120,80,145,66,178,211,126,
    195,121,55,149,6,153,255,196,16,120,145,194,52,133,238,48,
    22,200,6,12,154,68,31,206,42,69,193,46,81,122,51,242,
    130,103,34,2,235,102,91,107,173,66,128,54,46,21,95,205,
    210,123,144,125,31,69,94,188,19,120,143,137,41,57,109,235,
    151,124,51,74,25,150,235,50,16,87,196,219,196,224,215,239,
    149,178,28,206,210,115,124,136,27,84,50,48,79,130,212,103,
    119,241,171,61,105,199,50,222,193,189,247,194,177,189,27,121,
    67,182,147,89,200,248,121,41,163,98,67,79,199,225,156,124,
    210,118,106,251,105,130,14,254,192,87,105,102,7,18,111,32,
    50,176,63,176,57,58,216,97,110,123,59,216,235,249,74,99,
    255,44,139,57,209,243,178,97,206,57,221,254,107,170,206,218,
    206,46,222,50,67,204,100,221,82,71,250,242,83,185,122,78,
    94,53,145,48,92,226,205,66,77,180,83,251,33,21,223,161,
    98,3,222,65,68,232,225,6,191,165,157,72,117,77,244,59,
    45,161,86,206,82,248,5,205,203,207,19,121,231,155,16,89,
    127,11,41,232,220,164,145,114,142,174,186,84,182,40,44,12,
    218,229,151,149,5,110,92,164,207,24,120,163,167,150,75,68,
    252,185,255,150,248,204,152,89,115,69,254,79,249,238,60,120,
    151,34,56,223,135,34,53,120,27,215,69,93,190,142,230,250,
    72,148,9,120,93,56,190,223,223,184,8,96,174,159,73,79,
    73,109,178,91,179,149,151,29,135,222,127,88,25,174,20,170,
    186,138,124,84,9,118,194,153,209,228,74,45,63,102,59,138,
    151,152,198,96,14,125,196,178,187,134,78,163,79,209,105,85,
    42,32,199,144,200,215,238,57,53,232,68,153,206,227,141,199,
    50,9,78,147,96,238,153,37,8,200,53,209,5,178,204,75,
    48,227,189,130,207,121,50,146,88,53,41,217,130,141,138,126,
    51,182,37,99,55,41,173,216,93,130,186,27,118,200,134,218,
    241,86,62,215,249,73,101,149,155,23,2,51,159,228,116,201,
    250,15,189,152,27,233,220,113,146,179,214,24,225,129,140,164,
    146,231,45,172,104,251,226,150,25,72,12,107,233,4,239,63,
    124,145,192,247,200,117,103,30,4,126,164,237,7,57,5,41,
    10,2,77,12,3,87,69,203,106,9,142,178,83,31,79,245,
    209,190,69,90,251,41,21,236,35,150,42,37,242,247,189,50,
    198,49,103,232,166,183,237,197,250,155,13,127,136,112,238,81,
    113,191,180,3,227,93,223,162,248,142,162,239,134,200,15,142,
    255,28,238,157,205,82,175,241,195,205,82,156,77,45,78,127,
    146,43,25,243,247,197,248,161,186,61,53,70,38,7,177,251,
    153,140,211,108,242,89,26,72,117,111,170,255,73,145,90,232,
    33,238,161,164,28,68,217,23,238,116,118,236,185,173,244,32,
    236,212,223,203,56,123,62,223,255,52,74,253,125,25,20,99,
    238,188,125,204,86,26,123,216,126,241,46,253,176,220,101,101,
    170,63,200,104,214,213,169,86,196,79,232,69,225,215,82,173,
    77,43,32,8,50,199,75,134,178,148,157,44,88,246,42,50,
    236,244,142,100,158,234,141,115,136,105,159,206,240,206,228,48,
    68,203,100,188,70,53,190,240,115,4,58,117,247,98,74,213,
    230,206,154,12,58,107,215,223,33,30,211,101,38,255,20,11,
    250,26,215,90,106,137,166,65,159,125,77,209,22,29,97,137,
    197,78,203,108,53,91,13,19,9,67,45,171,162,109,182,218,
    139,226,162,255,117,36,83,219,88,95,104,137,127,3,179,175,
    0,83,
};

EmbeddedPython embedded_m5_internal_param_IntrControl(
    "m5/internal/param_IntrControl.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_IntrControl.py",
    "m5.internal.param_IntrControl",
    data_m5_internal_param_IntrControl,
    2210,
    6779);

} // anonymous namespace
