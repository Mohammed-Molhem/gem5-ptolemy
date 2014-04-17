#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSimpleCPU[] = {
    120,156,197,88,235,111,219,200,17,159,37,37,217,146,173,216,
    142,157,56,15,231,172,220,213,61,37,77,172,158,219,244,90,
    92,16,212,137,3,52,69,227,75,169,28,156,115,15,229,209,
    226,90,162,204,135,74,174,156,211,193,254,82,7,109,191,245,
    143,40,250,161,255,71,255,175,118,102,150,164,41,63,128,0,
    215,42,182,184,24,238,99,118,30,191,153,157,101,7,210,191,
    50,62,191,110,0,36,27,6,128,139,63,1,62,64,32,96,
    87,128,144,2,220,69,56,40,67,252,115,112,203,240,14,96,
    215,0,105,192,9,18,38,252,193,128,112,150,215,84,192,55,
    185,71,192,168,6,178,4,187,101,216,9,23,160,36,43,112,
    80,131,248,91,16,66,132,2,222,184,83,224,78,195,59,228,
    142,68,149,25,78,131,91,99,162,10,238,12,19,53,24,205,
    131,156,129,93,100,62,5,187,117,100,117,31,89,93,97,86,
    255,38,86,46,142,44,129,91,167,233,40,203,215,52,179,68,
    51,121,143,43,204,101,46,147,108,30,118,23,50,250,106,129,
    94,44,208,75,5,250,90,129,190,94,160,151,11,244,141,2,
    125,179,64,223,42,208,183,11,244,74,129,190,83,160,63,42,
    208,171,5,186,81,160,239,22,232,143,11,244,39,5,250,71,
    5,122,141,233,57,144,11,208,255,49,244,63,133,126,19,246,
    209,145,243,185,181,238,129,52,161,127,31,118,239,131,196,223,
    61,56,65,95,187,11,133,21,63,225,21,87,243,21,15,120,
    197,67,216,125,8,18,127,15,244,138,10,180,155,215,16,63,
    222,127,240,175,41,144,82,179,216,28,202,56,241,162,208,246,
    194,253,200,51,104,188,66,13,161,173,67,205,84,10,187,103,
    4,187,127,1,99,206,53,82,216,29,3,50,22,164,139,111,
    192,49,19,199,6,140,154,112,36,160,95,2,215,132,35,220,
    166,76,2,116,5,156,24,240,141,73,19,142,177,45,33,80,
    62,130,146,210,152,235,51,80,52,167,41,56,46,195,81,25,
    218,111,142,12,234,56,168,66,252,79,248,126,133,153,78,51,
    83,3,142,176,45,193,73,9,142,43,176,131,147,176,171,95,
    37,245,197,155,35,212,20,123,218,205,18,74,187,93,80,151,
    84,113,189,56,116,2,169,150,144,182,7,78,236,4,246,83,
    39,145,109,47,24,248,242,217,171,175,154,181,108,102,148,172,
    15,28,213,179,120,169,73,54,9,6,138,89,70,161,84,51,
    72,236,123,161,107,7,145,59,244,165,154,38,126,246,190,231,
    75,219,230,193,23,193,32,138,213,243,56,142,98,139,204,202,
    157,126,228,228,43,200,168,29,63,74,100,147,118,227,109,44,
    98,175,104,246,254,128,57,146,0,44,46,45,118,101,210,137,
    189,129,66,111,105,142,52,155,184,53,201,79,220,36,223,96,
    211,250,42,65,159,182,122,209,129,28,134,7,94,208,218,146,
    135,210,143,6,129,12,85,235,249,243,141,207,126,181,213,234,
    202,224,81,107,111,232,249,110,107,211,122,217,26,140,84,47,
    10,91,216,231,133,74,162,133,252,214,5,182,89,199,105,87,
    105,151,183,94,215,246,88,63,187,39,253,129,140,235,212,123,
    139,36,16,243,98,86,84,132,41,154,162,142,84,25,31,83,
    172,24,51,98,219,35,13,59,164,53,1,204,204,32,245,15,
    96,231,161,239,15,12,136,87,8,48,125,252,9,242,48,194,
    166,77,99,6,143,253,158,76,163,123,251,38,193,64,119,30,
    49,200,16,109,56,243,49,249,61,4,70,74,25,250,21,208,
    8,66,224,105,72,197,35,106,113,58,177,49,144,121,9,146,
    191,143,115,8,231,1,77,143,9,10,187,174,227,86,127,102,
    80,182,155,36,248,54,3,67,245,188,36,122,27,178,249,137,
    230,48,106,163,77,94,141,190,220,235,203,142,74,86,177,227,
    235,104,216,232,56,97,24,169,134,227,186,13,71,169,216,219,
    27,42,153,52,84,212,88,75,154,85,242,247,66,134,173,156,
    223,104,144,97,137,252,142,88,210,47,174,215,81,248,178,200,
    47,108,255,68,42,196,69,47,114,19,236,39,22,93,169,44,
    18,82,93,193,102,51,219,142,1,216,172,100,112,73,164,191,
    175,106,140,60,39,73,108,222,142,250,25,100,180,250,208,241,
    135,82,209,252,68,57,10,119,37,82,111,52,73,152,221,32,
    69,51,61,201,118,118,24,133,238,8,197,244,58,107,36,193,
    13,6,219,44,16,220,174,33,212,166,176,173,64,29,161,55,
    111,116,72,163,82,10,52,6,217,117,210,31,216,241,34,205,
    30,8,184,19,204,49,77,131,147,4,171,198,33,216,32,138,
    22,91,132,103,235,54,53,43,212,220,201,180,159,144,9,234,
    103,77,176,65,219,26,172,119,199,76,53,204,195,104,123,44,
    140,110,158,134,17,166,196,54,133,131,65,65,115,26,14,38,
    217,32,126,146,98,159,2,13,221,143,195,5,196,179,101,172,
    121,210,184,146,129,213,34,4,22,97,216,45,192,208,34,167,
    48,6,173,155,151,89,113,245,131,89,177,171,173,248,136,182,
    157,77,209,83,103,212,212,68,135,92,111,164,54,101,123,110,
    33,49,90,38,123,22,45,185,140,103,220,78,88,231,195,138,
    15,60,46,97,116,250,208,6,214,68,137,112,182,111,194,245,
    244,16,74,40,218,7,113,244,221,168,17,237,55,20,100,50,
    60,94,75,214,215,146,47,48,31,52,158,112,134,209,25,65,
    199,124,44,7,49,198,118,149,95,116,188,218,28,187,118,122,
    132,160,197,233,64,103,71,177,157,57,61,37,42,166,172,52,
    73,35,215,114,35,147,204,95,208,158,53,182,176,9,203,248,
    212,4,11,102,71,156,29,185,170,224,81,124,158,146,173,73,
    93,9,84,195,90,109,45,54,107,68,186,89,159,142,225,101,
    50,250,88,247,113,131,173,44,218,42,144,163,131,30,147,36,
    166,0,248,43,112,217,37,224,47,64,72,64,135,167,33,195,
    193,73,15,57,116,145,166,255,17,56,241,92,112,198,25,58,
    244,140,52,53,97,100,38,159,243,84,125,228,253,22,254,86,
    200,90,39,38,8,58,158,204,180,176,42,30,79,165,60,88,
    25,66,239,117,4,149,198,163,154,124,212,115,18,154,166,227,
    215,204,227,247,52,1,230,213,16,38,165,9,161,107,90,239,
    102,147,96,47,78,177,69,185,255,182,88,52,10,136,121,64,
    205,195,28,44,34,235,251,255,203,184,122,54,89,23,206,43,
    91,39,200,223,144,32,37,22,125,174,194,121,105,140,75,30,
    22,229,44,44,54,242,176,144,156,182,223,113,237,77,173,65,
    0,56,49,4,94,226,176,80,161,251,83,9,100,25,118,43,
    20,64,92,87,138,52,190,68,150,207,104,191,177,51,129,173,
    179,173,237,150,99,64,187,151,154,239,38,153,63,200,195,143,
    125,39,216,115,157,39,61,218,145,182,237,100,17,103,100,58,
    204,23,117,160,104,17,151,169,193,175,63,205,116,57,156,100,
    238,248,140,162,40,211,129,35,197,141,58,156,48,94,247,100,
    35,144,193,30,238,221,243,6,141,125,223,233,178,159,204,84,
    199,47,51,29,21,59,250,236,73,156,80,86,218,142,26,157,
    40,196,20,63,236,168,40,110,184,18,239,32,210,109,60,108,
    240,249,208,240,146,134,179,135,163,78,71,105,244,143,199,49,
    151,122,78,220,77,184,170,59,120,75,228,164,253,108,227,77,
    211,195,90,214,203,108,164,175,63,121,178,231,242,85,135,18,
    30,152,120,183,80,35,157,214,126,65,205,61,106,214,224,3,
    156,9,45,220,160,75,59,145,233,42,152,121,170,130,235,160,
    177,137,175,104,109,114,62,148,183,222,39,148,245,151,152,52,
    160,43,32,167,232,182,75,31,90,202,233,135,22,12,238,202,
    15,13,110,142,138,73,199,67,244,63,141,105,107,227,67,170,
    96,253,12,210,2,224,178,120,54,160,80,151,127,174,227,89,
    251,5,203,132,209,82,161,88,100,117,197,14,158,233,88,80,
    30,113,169,105,27,186,166,60,117,34,159,210,124,223,95,198,
    38,148,111,237,11,32,167,235,70,66,135,51,24,200,208,61,
    173,9,121,100,146,214,162,56,253,19,156,30,211,88,0,46,
    225,115,30,181,164,88,65,79,70,103,57,199,233,173,15,224,
    228,195,60,39,205,140,229,36,139,188,168,179,80,158,128,116,
    62,98,191,144,168,174,244,165,146,23,185,70,205,67,126,91,
    114,37,38,231,104,132,117,60,23,196,248,238,219,246,196,83,
    217,47,9,71,153,135,40,149,85,68,181,84,21,124,78,156,
    249,4,168,197,90,135,172,232,27,37,22,7,193,92,174,60,
    127,166,202,18,53,163,157,46,44,219,78,160,63,61,240,125,
    218,186,75,205,39,153,253,24,167,250,50,192,165,182,190,226,
    32,178,249,16,227,51,203,226,45,137,10,30,173,103,250,172,
    159,234,131,154,240,119,178,224,17,127,42,56,63,105,51,14,
    94,255,238,169,106,92,58,232,236,249,114,199,241,15,80,238,
    139,57,180,71,137,146,129,186,125,102,80,134,195,192,126,41,
    131,40,30,189,140,92,169,238,158,25,223,76,207,95,61,197,
    62,148,116,80,95,38,199,216,220,115,91,233,73,56,168,63,
    43,113,145,121,126,252,153,31,117,14,164,155,206,185,115,249,
    156,173,40,112,176,255,226,93,16,32,41,135,133,51,227,110,
    76,171,174,157,233,69,120,122,142,239,125,47,213,202,89,3,
    184,110,108,57,97,87,102,186,95,44,54,250,224,5,245,196,
    195,129,74,56,132,138,115,94,197,81,71,226,133,55,101,113,
    49,16,210,73,231,22,63,139,134,68,94,182,152,118,110,111,
    102,163,151,194,7,231,156,211,77,15,190,192,2,236,53,250,
    13,161,67,232,207,70,185,166,31,135,40,69,121,74,115,1,
    193,162,142,197,35,231,133,88,118,61,4,91,156,223,10,78,
    243,58,197,42,163,231,130,204,50,182,118,210,89,68,23,237,
    250,67,196,19,74,151,201,183,216,208,231,184,234,92,85,84,
    12,250,238,107,138,154,168,139,146,152,173,87,205,106,165,90,
    54,49,211,80,207,162,168,153,213,218,172,120,223,255,85,204,
    78,53,99,181,90,21,255,5,83,111,39,232,
};

EmbeddedPython embedded_m5_internal_param_BaseSimpleCPU(
    "m5/internal/param_BaseSimpleCPU.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_BaseSimpleCPU.py",
    "m5.internal.param_BaseSimpleCPU",
    data_m5_internal_param_BaseSimpleCPU,
    2252,
    6922);

} // anonymous namespace
