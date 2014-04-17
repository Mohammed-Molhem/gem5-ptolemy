#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RawDiskImage[] = {
    120,156,197,88,109,111,220,198,17,158,37,121,148,238,164,179,
    36,203,111,178,213,138,65,32,244,18,52,186,198,173,155,182,
    49,132,186,149,129,184,72,20,151,215,86,206,165,13,67,145,
    123,119,60,241,200,3,185,178,114,129,244,165,50,218,126,235,
    143,40,250,161,255,163,255,171,157,153,37,41,74,178,129,0,
    45,206,210,113,177,92,238,206,236,204,60,243,178,27,64,241,
    215,192,231,151,14,64,62,16,0,33,254,4,196,0,19,1,
    125,1,66,10,8,215,225,168,1,217,79,32,108,192,43,128,
    190,1,210,128,115,236,152,240,165,1,201,50,175,177,33,54,
    121,68,192,172,5,210,130,126,3,14,146,53,176,164,13,71,
    45,200,190,6,33,68,34,224,69,184,0,225,34,188,66,234,
    216,105,50,193,69,8,91,220,105,66,184,196,157,22,204,86,
    65,46,65,31,137,47,64,191,141,164,222,71,82,55,152,212,
    191,137,84,136,95,110,65,216,166,233,184,151,47,104,166,69,
    51,153,199,13,166,178,82,238,108,21,250,107,101,255,102,173,
    191,94,235,223,226,254,10,200,53,24,223,134,241,29,24,223,
    5,84,72,184,90,113,184,7,210,132,241,6,244,55,64,226,
    239,30,156,163,126,194,181,218,138,251,188,226,102,181,226,1,
    175,216,132,254,38,72,252,61,208,43,108,232,117,110,163,206,
    163,255,224,95,7,117,14,106,25,155,151,50,203,163,52,241,
    162,100,144,70,6,125,183,169,33,11,5,212,44,20,166,250,
    53,153,234,95,192,118,10,141,194,84,103,128,132,5,201,18,
    27,112,198,157,51,3,102,29,56,21,48,182,32,52,225,20,
    217,52,104,3,67,1,231,6,252,209,164,9,103,216,90,168,
    220,239,131,165,180,157,198,172,92,77,105,1,206,26,112,218,
    128,222,139,83,131,6,142,154,144,253,19,190,221,100,162,139,
    76,212,128,83,108,45,56,183,224,204,134,3,156,132,67,227,
    38,137,47,94,156,162,164,56,210,235,88,184,219,253,154,184,
    36,74,24,101,137,63,145,106,29,251,222,212,207,252,137,231,
    250,39,123,81,126,244,108,226,15,101,167,85,78,76,243,157,
    169,175,70,46,175,52,73,37,147,169,98,138,105,34,213,18,
    118,6,81,18,122,147,52,60,142,165,90,36,114,222,32,138,
    165,231,241,199,103,147,105,154,169,167,89,150,102,46,105,149,
    7,227,212,175,86,144,78,131,56,205,101,135,184,49,27,151,
    200,43,154,61,152,50,69,218,0,239,150,22,135,50,15,178,
    104,170,208,88,154,34,205,38,106,29,50,19,55,249,159,176,
    233,254,62,71,147,118,71,233,145,60,78,142,162,73,119,79,
    190,148,113,58,157,200,68,117,159,62,125,248,225,207,247,186,
    67,57,121,212,61,60,142,226,176,251,228,211,231,159,60,233,
    78,103,106,148,38,93,28,141,18,37,81,69,113,247,186,114,
    118,112,214,77,98,115,18,13,189,136,5,244,70,50,158,202,
    172,77,163,247,105,11,98,85,44,11,91,152,162,35,218,216,
    107,224,99,138,77,99,73,236,71,36,98,64,98,19,192,204,
    18,82,255,0,54,30,218,254,200,128,108,147,0,51,198,159,
    32,11,35,108,122,244,205,224,111,191,37,221,232,209,177,73,
    48,208,131,167,12,50,68,27,206,124,76,118,79,128,145,210,
    128,177,13,26,65,8,60,13,169,108,70,45,78,39,50,6,
    18,183,32,255,251,101,10,201,42,160,238,209,169,113,232,14,
    178,250,51,131,178,215,161,141,239,51,50,212,40,202,211,147,
    132,245,79,125,118,163,30,234,228,249,236,243,195,177,12,84,
    190,133,3,95,164,199,78,224,39,73,170,28,63,12,29,95,
    169,44,58,60,86,50,119,84,234,108,231,157,38,25,124,173,
    4,87,69,111,54,45,193,68,134,71,48,233,151,48,10,20,
    190,48,106,61,214,127,46,21,2,99,148,134,57,142,19,137,
    161,84,46,109,82,221,192,230,73,201,142,17,216,177,75,188,
    228,50,30,168,22,67,207,207,115,143,217,209,56,163,140,86,
    191,244,227,99,169,104,126,174,124,133,92,169,171,25,205,21,
    103,247,72,210,82,80,82,158,151,164,73,56,195,125,70,193,
    54,109,225,30,163,109,25,8,111,183,17,107,11,216,218,208,
    70,236,173,26,1,137,100,21,72,99,148,221,33,5,0,91,
    94,20,225,3,17,119,142,65,166,99,112,148,96,217,216,9,
    29,234,209,98,151,0,237,62,160,102,147,154,239,149,226,207,
    75,7,237,171,58,120,72,124,13,22,60,48,11,17,43,71,
    218,191,228,72,27,23,142,132,65,177,71,14,97,144,219,92,
    56,132,73,74,200,118,11,244,147,171,33,0,240,115,13,243,
    172,26,119,149,68,182,75,184,186,132,193,58,16,135,53,32,
    186,100,21,70,161,187,241,38,53,110,189,61,53,14,181,26,
    31,17,223,229,2,63,109,198,77,75,4,100,124,163,80,42,
    43,116,15,59,179,187,164,208,186,42,239,98,154,59,72,218,
    156,175,56,231,113,230,215,17,68,107,88,119,44,66,218,192,
    132,59,69,30,202,201,225,167,89,250,205,204,73,7,142,130,
    114,15,143,183,243,157,237,252,99,12,9,206,46,7,25,29,
    20,180,219,103,114,154,161,123,55,249,69,187,172,199,238,235,
    21,105,4,85,78,57,157,45,197,138,230,8,149,171,140,2,
    211,92,181,220,170,180,76,155,254,152,152,182,88,197,38,220,
    197,167,37,120,103,94,202,17,146,43,11,254,138,207,175,72,
    217,36,175,4,170,253,220,158,222,55,139,68,194,185,63,184,
    132,152,57,9,228,190,143,28,246,74,135,179,161,194,7,61,
    38,109,153,124,224,175,192,181,151,128,191,0,97,1,77,94,
    120,13,251,39,61,100,210,117,154,254,21,112,240,121,77,162,
    51,180,247,25,69,120,66,231,204,63,226,169,58,239,253,6,
    254,86,139,92,231,38,8,202,81,102,81,93,213,115,148,85,
    249,43,131,232,59,229,33,235,178,99,147,145,70,126,78,211,
    180,11,155,149,11,95,4,193,170,38,194,184,52,47,124,45,
    106,118,30,237,236,217,5,186,40,1,60,16,235,70,13,51,
    63,164,230,131,10,46,162,28,155,195,38,183,174,70,236,90,
    214,242,116,148,252,132,118,98,241,222,87,108,46,29,234,68,
    42,199,104,148,142,241,176,114,12,201,161,251,21,87,224,212,
    26,132,128,115,67,224,241,7,203,21,58,121,88,32,27,208,
    183,201,133,184,188,20,133,135,137,50,164,81,40,188,148,23,
    88,59,251,90,111,21,8,180,125,169,249,102,174,33,132,76,
    252,56,246,39,135,161,191,123,64,44,137,111,80,250,156,81,
    10,177,90,23,130,252,69,188,73,14,126,253,81,41,204,203,
    185,134,143,15,145,67,37,4,59,75,152,6,28,51,126,55,
    146,206,68,78,14,145,249,40,154,58,131,216,31,178,165,204,
    66,200,207,75,33,21,155,250,106,62,206,41,48,237,167,78,
    144,38,24,231,143,3,149,102,78,40,241,48,34,67,231,3,
    135,147,132,19,229,142,127,136,95,253,64,105,252,95,118,101,
    46,249,252,108,152,115,117,119,116,66,221,185,91,218,195,35,
    103,132,69,237,139,82,73,250,32,84,69,124,174,99,181,51,
    97,218,196,67,134,154,233,208,246,83,106,222,163,102,27,222,
    70,98,232,34,135,63,16,43,82,158,141,209,167,41,248,88,
    84,159,247,156,86,230,215,189,249,179,239,226,205,250,26,163,
    240,105,187,188,255,88,0,185,72,103,220,126,139,46,14,104,
    100,137,28,125,225,127,117,116,118,144,185,187,198,87,255,87,
    255,118,31,190,85,25,220,31,67,81,15,188,201,183,69,93,
    192,182,246,237,177,40,11,239,186,116,124,180,223,120,45,156,
    188,32,147,190,146,218,106,247,231,44,49,135,10,189,129,175,
    43,219,149,98,85,135,144,143,42,209,206,185,32,154,221,170,
    21,198,108,74,113,128,213,11,22,207,167,44,189,103,232,250,
    249,2,161,86,165,4,58,179,37,242,196,187,174,8,93,34,
    211,134,252,233,84,38,225,69,249,203,95,230,10,4,138,70,
    62,92,212,35,88,235,222,194,231,186,75,146,96,53,57,217,
    136,141,202,9,231,109,78,6,240,160,52,100,135,235,144,42,
    244,186,100,70,29,108,171,56,235,254,2,202,216,91,65,52,
    148,177,84,242,53,6,82,180,182,56,31,134,18,19,81,58,
    195,131,11,31,0,240,61,246,188,249,71,237,159,33,7,226,
    194,135,46,138,218,54,198,237,166,213,20,156,22,175,220,124,
    234,157,81,173,171,203,220,89,238,178,159,175,84,226,243,245,
    92,153,150,24,245,116,72,219,247,39,250,198,133,111,17,220,
    119,168,121,183,84,35,3,86,159,127,248,112,161,143,117,136,
    112,206,217,156,162,221,29,26,167,179,242,228,209,78,41,208,
    142,22,168,146,134,111,8,39,143,222,48,173,23,77,244,45,
    148,90,187,242,61,204,124,236,223,190,50,138,58,143,252,56,
    250,86,95,59,149,195,138,36,189,202,151,246,91,189,113,26,
    188,22,168,216,228,153,28,70,57,210,97,34,87,93,151,236,
    192,117,242,107,226,91,125,241,220,17,162,203,79,125,172,222,
    165,11,215,124,23,27,186,94,106,174,52,133,109,208,69,166,
    41,90,162,45,44,177,220,110,154,77,187,217,48,17,69,52,
    178,46,90,102,179,181,44,244,255,22,162,170,101,108,181,154,
    226,191,209,49,136,247,
};

EmbeddedPython embedded_m5_internal_param_RawDiskImage(
    "m5/internal/param_RawDiskImage.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_RawDiskImage.py",
    "m5.internal.param_RawDiskImage",
    data_m5_internal_param_RawDiskImage,
    2086,
    6381);

} // anonymous namespace
