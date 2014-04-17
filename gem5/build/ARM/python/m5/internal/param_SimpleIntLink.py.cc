#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleIntLink[] = {
    120,156,197,88,95,115,219,198,17,223,3,64,74,164,68,75,
    178,100,203,127,100,11,157,140,166,108,166,17,27,183,78,218,
    198,227,105,18,185,83,119,26,37,5,219,177,195,120,138,66,
    192,145,4,9,2,28,224,100,135,25,233,165,242,180,125,235,
    91,191,64,167,15,253,30,253,94,237,238,30,0,129,178,52,
    147,153,166,180,68,220,28,14,119,123,183,187,191,223,222,222,
    249,144,255,213,240,249,133,13,144,253,93,0,4,248,19,16,
    1,76,4,244,4,8,41,32,216,132,113,13,210,159,64,80,
    131,215,0,61,3,164,1,103,88,49,225,43,3,226,85,30,
    83,135,200,228,22,1,179,38,72,11,122,53,120,22,111,128,
    37,235,48,110,66,250,71,16,66,196,2,158,7,75,16,44,
    195,107,148,142,149,6,11,92,134,160,201,149,6,4,43,92,
    105,194,108,29,228,10,244,80,248,18,244,90,40,234,93,20,
    117,141,69,253,155,68,5,248,101,11,130,22,117,199,181,124,
    73,61,45,234,201,115,92,99,41,107,197,202,214,161,183,81,
    212,175,87,234,155,149,250,86,165,126,163,82,191,89,169,111,
    87,234,183,184,190,6,114,3,70,183,97,116,7,70,119,161,
    143,198,90,47,87,180,3,210,132,209,61,232,221,3,137,191,
    29,56,67,123,6,27,149,17,247,121,196,245,114,196,46,143,
    176,161,103,131,196,223,174,30,81,135,110,251,6,250,40,252,
    15,254,181,209,71,160,86,177,120,41,211,44,76,98,55,140,
    251,73,104,208,247,58,21,228,81,159,138,165,220,181,159,146,
    107,255,5,236,215,192,200,93,123,10,40,88,144,46,145,1,
    167,92,57,53,96,214,134,19,1,35,11,2,19,78,112,154,
    26,45,96,32,224,204,128,23,38,117,56,197,210,66,103,220,
    7,75,105,191,142,216,25,90,210,18,156,214,224,164,6,221,
    231,39,6,53,140,27,144,254,19,190,217,97,161,203,44,212,
    128,19,44,45,56,179,224,180,14,207,176,19,54,141,26,164,
    190,120,126,130,154,98,75,183,109,225,106,15,43,234,146,42,
    65,152,198,222,68,170,45,172,187,83,47,245,38,110,55,156,
    76,35,249,52,86,191,9,227,113,187,89,244,76,178,253,169,
    167,134,14,15,53,201,38,147,169,98,145,73,44,213,10,86,
    250,97,28,184,147,36,56,142,164,90,38,121,110,63,140,164,
    235,242,199,167,147,105,146,170,39,105,154,164,14,153,149,27,
    163,196,43,71,144,81,253,40,201,100,155,102,227,105,28,18,
    175,168,119,127,202,18,105,1,188,92,26,28,200,204,79,195,
    169,66,111,105,137,212,155,164,181,201,79,92,100,47,176,232,
    252,62,67,159,118,134,201,88,30,199,227,112,210,57,144,47,
    101,148,76,39,50,86,157,39,79,30,188,255,179,131,206,64,
    78,30,118,142,142,195,40,232,124,236,124,214,153,206,212,48,
    137,59,216,22,198,74,162,133,162,206,37,182,217,199,110,215,
    105,150,87,225,192,13,89,63,119,40,163,169,76,91,212,122,
    135,86,32,214,197,170,168,11,83,180,69,11,107,53,124,76,
    177,99,172,136,195,144,52,244,73,107,2,152,89,64,234,31,
    192,206,67,223,143,13,72,119,8,48,35,252,9,242,48,194,
    166,75,223,12,254,246,91,50,141,110,29,153,4,3,221,120,
    194,32,67,180,97,207,71,228,247,24,24,41,53,24,213,65,
    35,8,129,167,33,149,206,168,196,238,36,198,64,225,22,100,
    127,155,151,16,175,3,154,30,131,0,54,221,196,169,254,196,
    160,236,182,105,225,135,12,12,53,12,179,228,85,204,230,167,
    58,211,168,139,54,249,98,246,249,209,72,250,42,219,197,134,
    47,147,99,219,247,226,56,81,182,23,4,182,167,84,26,30,
    29,43,153,217,42,177,247,178,118,131,252,189,81,96,171,148,
    55,155,22,88,34,191,35,150,244,75,16,250,10,95,54,249,
    133,237,159,73,133,184,24,38,65,134,237,36,98,32,149,67,
    139,84,215,176,248,184,152,142,1,216,174,23,112,201,100,212,
    87,77,70,158,151,101,46,79,71,237,12,50,26,253,210,139,
    142,165,162,254,153,242,20,206,74,85,61,209,34,97,118,139,
    20,45,244,36,219,185,113,18,7,51,92,102,232,239,209,10,
    110,49,216,86,129,224,118,3,161,182,132,101,29,90,8,189,
    117,195,39,141,172,28,104,12,178,155,164,63,176,227,69,30,
    61,16,112,103,24,99,218,6,7,9,86,141,41,104,83,141,
    6,59,132,103,231,46,21,59,84,220,43,180,95,144,9,90,
    23,77,240,128,166,53,88,111,223,204,53,44,105,116,56,71,
    163,219,231,52,194,144,216,37,58,24,68,154,115,58,152,100,
    131,244,113,142,125,34,26,186,31,63,87,16,207,150,113,214,
    73,227,122,1,86,135,16,88,133,225,160,2,67,135,156,194,
    24,116,110,95,101,197,221,183,102,197,129,182,226,67,154,118,
    53,71,79,139,81,211,20,62,185,222,200,109,202,246,60,192,
    202,108,155,236,89,181,228,54,238,113,207,226,22,111,86,188,
    225,113,154,160,195,135,54,176,174,88,132,179,190,9,55,243,
    77,40,35,182,79,211,228,235,153,157,244,109,5,197,26,30,
    237,101,251,123,217,71,24,15,236,199,28,97,116,68,208,156,
    79,229,52,69,110,55,248,69,243,213,101,238,186,249,22,130,
    22,167,13,157,29,197,118,230,240,148,169,148,162,210,34,141,
    220,44,141,76,107,254,136,230,108,178,133,77,216,198,167,41,
    120,97,110,194,209,145,179,10,254,138,207,39,100,107,82,87,
    2,229,137,78,87,47,155,53,34,221,156,239,207,225,101,49,
    250,56,239,226,4,7,5,219,234,80,162,131,30,147,86,76,
    4,248,11,112,218,37,224,207,64,72,64,135,231,148,97,114,
    210,67,14,221,164,238,127,0,14,60,151,236,113,134,166,158,
    145,135,38,100,102,246,33,119,213,91,222,175,225,175,149,168,
    117,102,130,160,237,201,204,19,171,234,246,100,149,100,101,8,
    125,171,45,200,154,103,53,249,104,232,101,212,77,243,215,44,
    249,123,30,0,203,108,8,131,210,130,208,181,172,103,115,105,
    97,79,207,177,69,177,255,174,216,52,42,136,249,33,21,239,
    149,96,17,69,219,255,127,141,187,23,131,117,101,191,114,117,
    128,252,21,45,196,226,165,175,213,57,46,205,73,41,105,81,
    43,104,241,160,164,133,228,176,253,154,115,111,42,13,2,192,
    153,33,240,160,132,137,10,157,81,44,144,53,232,213,137,64,
    156,87,138,156,95,162,136,103,52,223,220,158,192,214,57,212,
    118,43,49,160,221,75,197,215,139,140,31,228,225,71,145,55,
    57,10,188,199,95,209,140,52,173,95,48,206,40,116,88,175,
    234,64,108,17,87,169,193,175,63,42,116,121,185,200,216,241,
    62,78,80,234,192,76,9,18,159,3,198,239,134,210,158,200,
    201,17,206,61,12,167,118,63,242,6,236,39,51,215,241,243,
    66,71,197,142,190,184,19,103,20,149,14,19,219,79,98,12,
    241,199,190,74,82,59,144,120,6,145,129,253,158,205,251,131,
    29,102,182,119,132,95,61,95,105,244,207,243,152,83,61,47,
    29,100,156,213,141,95,81,117,209,126,118,241,164,25,98,46,
    251,162,176,145,62,254,148,193,158,211,87,77,37,220,48,241,
    108,161,102,58,172,125,64,197,15,168,216,131,183,176,39,116,
    112,130,30,205,68,166,171,99,228,105,8,206,131,230,58,126,
    65,99,179,55,169,252,217,183,161,178,190,237,200,9,93,47,
    174,73,150,64,46,211,209,182,215,164,251,2,106,89,33,150,
    47,253,175,44,103,122,44,154,24,71,223,41,185,157,7,111,
    83,5,231,199,144,103,2,87,17,91,84,245,107,105,98,143,
    68,145,111,87,149,227,227,252,157,203,209,228,250,169,244,148,
    212,78,187,179,88,141,57,78,232,249,131,210,117,133,90,229,
    217,227,195,82,181,51,78,133,102,91,149,132,152,61,41,158,
    97,222,130,73,243,9,107,239,26,58,111,62,199,167,85,26,
    97,27,139,88,190,114,47,49,132,206,141,105,69,222,116,42,
    227,224,60,239,229,47,139,4,194,7,154,207,101,42,130,73,
    238,22,62,111,18,146,20,171,232,201,62,172,149,20,92,176,
    55,25,191,163,194,143,109,58,128,156,199,93,135,188,168,35,
    109,25,100,157,159,67,17,120,75,132,6,50,146,74,94,230,
    31,69,131,243,99,97,32,113,23,74,102,120,96,225,204,31,
    223,35,215,93,120,204,254,41,97,5,242,179,22,197,236,58,
    70,237,134,213,16,188,37,94,184,237,212,11,251,30,20,249,
    237,44,115,152,230,107,165,250,124,35,87,236,73,12,122,58,
    155,29,122,19,125,203,194,87,7,14,9,112,222,41,204,200,
    112,213,231,30,62,85,232,211,28,2,156,247,107,222,158,157,
    125,106,191,143,197,228,225,126,161,209,190,214,232,19,47,11,
    253,92,33,190,23,156,60,84,247,174,238,233,36,152,221,167,
    156,140,190,217,227,211,40,241,199,50,208,87,84,87,72,225,
    62,7,201,196,195,246,187,151,246,64,27,231,18,54,46,124,
    15,82,26,117,227,66,43,122,55,244,162,240,27,121,133,60,
    94,55,171,71,214,45,62,242,53,227,37,38,32,63,86,27,
    120,87,126,51,112,50,6,83,57,8,51,50,199,245,11,131,
    242,104,66,224,80,246,21,49,183,42,96,209,176,213,233,176,
    62,226,63,166,139,223,236,151,88,208,69,87,99,173,33,234,
    6,221,168,154,162,41,90,194,18,171,173,134,217,168,55,106,
    38,66,155,90,54,69,211,108,52,87,197,252,255,46,66,190,
    105,236,54,27,226,191,209,96,200,188,
};

EmbeddedPython embedded_m5_internal_param_SimpleIntLink(
    "m5/internal/param_SimpleIntLink.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_SimpleIntLink.py",
    "m5.internal.param_SimpleIntLink",
    data_m5_internal_param_SimpleIntLink,
    2138,
    6574);

} // anonymous namespace
