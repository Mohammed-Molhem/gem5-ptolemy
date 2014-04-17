#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleNetwork[] = {
    120,156,197,88,239,110,219,200,17,159,37,37,57,146,173,216,
    142,157,255,190,152,215,156,47,106,208,179,122,105,211,107,123,
    65,208,92,28,224,82,28,124,41,117,69,114,106,81,150,38,
    87,22,37,138,20,200,181,29,29,236,47,117,208,246,67,129,
    62,68,209,15,125,143,62,205,189,68,59,51,75,210,180,99,
    29,124,104,161,216,226,98,184,220,157,217,153,249,205,236,236,
    122,144,253,85,241,249,149,5,144,126,43,0,124,252,9,8,
    1,70,2,186,2,132,20,224,175,192,176,10,201,79,193,175,
    194,27,128,174,1,210,128,99,36,76,248,157,1,209,2,207,
    169,65,104,114,143,128,73,3,100,5,186,85,120,25,45,67,
    69,214,96,216,128,228,143,32,132,136,4,188,242,231,192,191,
    4,111,144,59,18,117,102,120,9,252,6,19,117,240,231,153,
    104,192,100,9,228,60,116,145,249,28,116,155,200,234,62,178,
    186,204,172,254,77,172,124,252,178,10,126,147,134,227,90,190,
    166,145,21,26,201,50,46,51,151,197,124,101,75,208,93,206,
    233,43,37,122,165,68,175,150,232,171,37,250,90,137,190,94,
    162,111,148,232,155,37,250,86,137,190,93,162,215,74,244,123,
    37,250,78,137,94,103,122,17,228,50,12,44,24,188,15,131,
    31,64,15,29,176,84,104,121,23,164,9,131,15,160,251,1,
    72,252,221,133,99,244,145,191,92,154,177,193,51,174,20,51,
    62,228,25,247,160,123,15,36,254,62,212,51,106,208,105,93,
    69,191,7,255,193,191,22,250,29,212,2,54,251,50,73,131,
    56,114,130,168,23,7,6,125,175,81,67,40,241,168,153,203,
    224,242,148,224,242,47,96,172,248,70,6,151,35,64,198,130,
    116,9,13,56,98,226,200,128,73,11,14,5,12,42,224,155,
    112,136,98,170,180,128,93,1,199,6,252,222,164,1,71,216,
    86,208,193,119,160,162,52,86,6,236,96,205,105,14,142,170,
    112,88,133,206,171,67,131,58,134,117,72,254,9,223,172,49,
    211,75,204,212,128,67,108,43,112,92,129,163,26,188,196,65,
    216,53,168,147,250,226,213,33,106,138,61,157,86,5,87,187,
    93,82,151,84,241,131,36,114,71,82,173,34,237,140,221,196,
    29,57,157,96,52,14,229,182,84,7,113,50,108,53,242,145,
    113,186,57,118,85,223,230,169,38,217,100,52,86,204,50,142,
    164,154,71,162,23,68,190,51,138,253,189,80,170,75,196,207,
    233,5,161,116,28,254,248,124,52,142,19,245,44,73,226,196,
    38,179,114,103,24,187,197,12,50,170,23,198,169,108,145,52,
    22,99,19,123,69,163,123,99,230,72,11,224,229,210,100,95,
    166,94,18,140,21,122,75,115,164,209,196,173,69,126,226,38,
    253,3,54,237,223,166,232,211,118,63,30,202,189,104,24,140,
    218,91,114,95,134,241,120,36,35,213,126,246,236,193,199,191,
    216,106,239,202,209,195,246,206,94,16,250,237,39,95,188,248,
    252,73,123,60,81,253,56,106,99,111,16,41,137,54,10,219,
    231,88,103,19,135,93,33,57,7,193,174,19,176,134,78,95,
    134,99,153,52,169,247,22,173,65,44,137,5,81,19,166,104,
    137,38,82,85,124,76,177,102,204,139,237,128,116,244,72,111,
    130,152,153,131,234,31,192,238,67,239,15,13,72,214,8,50,
    3,252,9,242,49,2,167,67,223,12,254,246,27,50,142,238,
    29,152,4,4,221,121,200,48,67,188,225,200,71,228,249,8,
    24,43,85,24,212,64,99,8,161,167,65,149,76,168,197,225,
    196,198,64,230,21,72,255,126,154,67,180,4,104,124,76,45,
    216,117,13,69,253,137,97,217,105,209,194,183,25,26,170,31,
    164,241,65,196,14,32,154,3,169,131,54,121,49,249,114,103,
    32,61,149,174,99,199,215,241,158,229,185,81,20,43,203,245,
    125,203,85,42,9,118,246,148,76,45,21,91,27,105,171,78,
    30,95,206,209,85,240,155,140,115,52,145,231,17,77,250,197,
    15,60,133,47,43,252,194,246,79,165,66,100,244,99,63,197,
    126,98,177,43,149,77,139,84,151,177,121,146,139,99,8,182,
    106,57,96,82,25,246,84,131,177,231,166,169,195,226,168,159,
    97,70,179,247,221,112,79,42,26,159,42,87,161,84,34,181,
    160,217,2,237,6,169,154,107,74,214,115,162,56,242,39,184,
    208,192,219,160,53,220,96,184,45,0,1,238,42,130,109,14,
    219,26,52,17,124,75,134,71,58,85,50,168,49,204,174,145,
    5,128,93,47,178,12,130,144,59,198,60,211,50,56,81,176,
    114,28,134,22,81,52,217,38,68,219,183,169,89,163,230,189,
    92,255,153,25,161,121,214,8,15,72,176,193,154,123,102,166,
    99,17,74,219,167,66,233,230,73,40,97,98,236,80,72,24,
    20,56,39,33,97,146,21,146,199,25,254,41,216,16,2,248,
    185,132,122,182,141,189,68,58,215,114,192,218,132,194,50,20,
    119,75,80,180,201,45,140,67,251,230,52,59,174,191,67,59,
    238,106,59,62,36,193,11,25,130,154,140,156,134,240,200,253,
    70,102,85,182,232,22,18,147,235,100,209,178,45,175,227,94,
    247,50,106,242,166,197,27,31,151,32,58,137,104,19,107,162,
    66,88,235,153,112,45,219,140,82,138,249,113,18,191,158,88,
    113,207,82,144,175,225,209,70,186,185,145,126,138,89,193,122,
    204,121,70,231,5,29,249,137,28,39,24,225,117,126,209,81,
    235,112,4,59,217,86,130,54,167,141,157,93,197,150,230,36,
    149,170,132,114,211,108,205,220,40,204,76,171,254,148,164,54,
    216,198,38,92,199,167,33,120,105,78,204,89,146,235,11,254,
    138,207,103,100,109,82,88,2,85,161,118,71,47,156,117,34,
    237,236,123,167,48,51,43,141,236,251,40,98,43,143,185,26,
    20,8,161,199,164,53,83,24,252,5,184,4,19,240,103,32,
    52,160,211,179,192,225,16,165,135,156,186,98,101,75,62,20,
    231,237,118,134,14,64,35,75,81,24,159,233,39,60,84,111,
    126,191,134,191,150,178,215,177,9,130,54,42,51,43,178,202,
    27,85,165,8,89,134,209,133,54,163,202,233,216,38,47,245,
    221,148,134,233,40,54,139,40,62,73,132,69,101,132,169,105,
    102,8,187,164,229,57,180,180,231,39,248,162,93,224,182,88,
    49,74,168,249,17,53,31,21,128,17,121,223,44,86,185,126,
    54,109,151,246,46,71,167,202,207,105,41,21,94,252,98,141,
    243,211,41,46,69,112,84,243,224,120,80,4,135,228,4,254,
    134,107,113,106,13,2,193,177,33,240,48,134,101,11,157,131,
    42,32,171,208,173,81,24,113,157,41,178,40,19,121,94,35,
    121,167,118,7,182,207,182,182,92,129,3,237,98,106,94,207,
    54,143,144,151,31,133,238,104,199,119,31,239,144,76,18,236,
    229,113,103,228,90,44,149,181,160,152,17,211,20,225,215,31,
    231,218,236,207,54,135,124,140,34,10,45,56,98,252,216,227,
    196,241,85,95,90,35,57,218,65,233,253,96,108,245,66,119,
    151,125,101,102,90,126,153,107,169,216,217,103,247,229,148,178,
    211,118,108,121,113,132,233,126,207,83,113,98,249,18,207,37,
    210,183,62,178,120,175,176,130,212,114,119,240,171,235,41,29,
    3,167,227,153,139,63,55,217,77,185,206,27,30,16,57,123,
    95,59,120,254,12,176,190,245,114,43,233,67,81,145,248,185,
    164,213,1,133,219,39,158,55,212,68,39,184,159,81,243,67,
    106,54,224,157,236,15,109,50,31,201,34,243,213,48,7,213,
    5,87,70,167,6,190,160,185,233,219,33,253,183,139,132,180,
    190,89,201,2,187,70,35,229,28,29,132,169,173,211,54,209,
    109,228,157,243,220,46,112,103,51,239,188,204,237,34,119,46,
    229,55,58,203,220,121,5,186,43,116,13,65,61,171,148,44,
    230,254,215,100,193,49,54,251,232,10,254,175,57,194,126,240,
    110,149,176,127,2,89,97,49,45,63,136,178,134,77,157,31,
    6,34,47,226,203,234,241,77,193,173,243,1,233,120,137,116,
    149,212,142,187,53,107,157,57,225,232,21,12,11,247,229,138,
    21,71,154,79,10,229,142,185,182,154,172,150,170,108,246,166,
    120,137,133,16,86,226,135,172,191,99,232,98,252,4,165,149,
    194,12,215,177,137,228,129,115,142,41,116,193,77,43,114,199,
    99,25,249,39,197,52,127,153,45,24,40,169,197,112,82,219,
    96,229,188,138,207,219,129,73,170,149,52,101,63,86,139,80,
    156,185,71,25,197,42,247,37,223,54,158,164,112,155,60,169,
    147,118,145,175,237,95,22,190,105,77,129,168,235,187,99,21,
    236,75,39,137,247,84,16,241,249,237,226,131,177,250,82,36,
    242,236,7,117,127,10,7,116,253,56,70,53,157,29,55,242,
    15,2,95,245,89,224,247,24,78,34,233,142,236,237,79,234,
    238,20,46,59,123,189,158,76,156,52,248,70,178,180,139,140,
    35,49,116,43,88,234,99,220,112,172,251,50,148,74,158,135,
    115,182,70,118,106,247,37,150,5,241,4,79,147,124,40,195,
    247,208,113,222,193,22,250,115,20,209,39,89,100,54,218,66,
    107,184,137,94,229,255,122,165,46,184,86,57,115,53,173,23,
    72,173,62,128,76,82,155,19,231,98,129,39,190,62,205,75,
    5,78,34,116,128,222,118,71,250,66,140,239,120,236,247,169,
    185,155,67,146,195,95,31,77,249,216,167,143,220,152,48,184,
    144,226,186,201,222,164,126,58,253,140,30,110,230,122,109,106,
    189,236,189,157,73,166,21,223,225,142,30,242,49,160,60,240,
    51,55,13,188,231,145,250,34,136,134,206,190,164,122,77,221,
    57,151,89,121,228,20,121,60,196,70,60,163,138,103,5,233,
    17,79,195,216,27,74,95,223,73,78,225,194,99,182,226,145,
    139,253,183,207,29,129,254,202,56,44,159,249,238,39,52,235,
    234,153,94,196,74,224,134,136,199,41,252,120,221,172,215,89,
    213,75,26,229,214,57,215,130,207,94,95,212,130,217,72,101,
    77,245,216,211,56,194,32,8,67,52,226,218,212,65,157,73,
    170,228,136,49,149,127,101,99,188,237,120,138,164,140,230,210,
    240,237,173,151,99,47,145,187,65,74,142,227,234,227,100,126,
    182,25,81,68,240,154,207,203,2,229,249,179,143,86,125,52,
    211,23,79,143,41,1,165,95,97,67,87,176,245,197,186,168,
    25,116,219,111,138,134,104,138,138,88,104,214,205,122,173,94,
    53,49,162,169,103,69,52,204,122,99,65,124,215,255,58,70,
    124,195,88,111,214,197,127,1,41,171,187,144,
};

EmbeddedPython embedded_m5_internal_param_SimpleNetwork(
    "m5/internal/param_SimpleNetwork.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_SimpleNetwork.py",
    "m5.internal.param_SimpleNetwork",
    data_m5_internal_param_SimpleNetwork,
    2332,
    7342);

} // anonymous namespace
