#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasePrefetcher[] = {
    120,156,197,89,95,115,27,73,17,239,217,149,100,75,177,98,
    59,182,243,215,137,55,9,1,113,112,22,23,8,7,117,169,
    20,185,115,170,56,138,248,194,26,42,57,241,103,89,239,142,
    165,149,87,187,98,103,156,156,174,236,23,156,2,222,248,16,
    20,15,247,21,120,230,227,240,29,160,187,103,87,94,217,86,
    46,20,148,18,107,167,102,123,123,122,166,187,127,221,211,51,
    9,32,255,87,197,231,39,14,128,250,135,0,8,241,39,32,
    6,24,8,232,8,16,82,64,184,2,251,85,200,126,0,97,
    21,94,3,116,44,144,22,28,99,199,134,95,91,144,44,240,
    152,26,196,54,83,4,140,26,32,43,208,169,194,243,100,25,
    42,178,6,251,13,200,126,15,66,136,68,192,139,112,14,194,
    121,120,141,210,177,83,103,129,243,16,54,184,83,135,240,2,
    119,26,48,90,2,121,1,58,40,124,14,58,77,20,245,30,
    138,186,200,162,254,73,162,66,252,178,10,97,147,216,113,45,
    159,19,103,133,56,121,142,139,44,101,177,88,217,18,116,150,
    139,254,165,82,127,165,212,95,45,245,215,74,253,203,165,254,
    149,82,255,106,169,127,173,212,191,94,234,223,224,254,34,200,
    101,232,175,67,255,38,244,111,193,30,26,116,105,188,234,13,
    144,54,244,29,232,56,32,241,183,1,199,104,243,112,185,52,
    226,54,143,184,52,30,113,135,71,220,133,206,93,144,248,187,
    99,70,212,96,167,181,134,126,140,254,141,255,90,232,71,208,
    11,216,188,148,153,138,210,196,139,146,189,52,178,232,123,141,
    26,242,122,64,205,92,238,254,79,200,253,95,1,251,62,180,
    114,247,31,1,10,22,164,75,108,193,17,119,142,44,24,181,
    224,80,64,191,2,161,13,135,56,77,149,22,208,21,112,108,
    193,111,108,98,56,194,182,130,14,187,5,21,109,124,223,103,
    135,25,73,115,112,84,133,195,42,236,188,56,180,136,176,95,
    135,236,239,240,229,58,11,157,103,161,22,28,98,91,129,227,
    10,28,213,224,57,50,33,169,95,39,245,197,139,67,212,20,
    41,59,173,10,174,118,187,164,46,169,18,70,89,226,15,164,
    38,75,120,67,63,243,7,222,199,190,146,207,50,185,39,117,
    208,147,89,171,81,176,166,106,115,232,235,158,203,99,109,50,
    202,96,168,89,102,154,72,125,1,59,123,81,18,122,131,52,
    60,136,165,158,39,129,222,94,20,75,207,227,143,159,14,134,
    105,166,159,100,89,154,185,100,87,38,198,169,63,30,65,86,
    13,226,84,201,22,205,198,211,184,36,94,19,247,222,144,37,
    210,2,120,189,52,56,148,42,200,162,161,70,119,25,137,196,
    77,210,90,228,40,110,212,111,177,105,255,74,161,83,219,189,
    116,95,30,36,251,209,160,189,37,95,202,56,29,14,100,162,
    219,79,158,220,255,224,199,91,237,174,28,60,104,239,30,68,
    113,216,126,236,62,109,15,71,186,151,38,109,164,69,137,150,
    104,162,184,125,158,113,54,145,239,18,77,243,42,234,122,17,
    43,232,245,100,60,148,89,147,168,215,105,9,98,73,44,136,
    154,176,69,75,52,177,87,197,199,22,235,214,5,177,29,145,
    138,1,169,77,16,179,11,80,253,13,216,125,232,253,125,11,
    178,117,130,76,31,127,130,124,140,192,217,161,111,22,127,251,
    5,217,198,80,251,54,1,193,16,15,25,102,136,55,228,124,
    72,158,79,128,177,82,133,126,13,12,134,16,122,6,84,217,
    136,90,100,39,49,22,10,175,128,250,235,164,132,100,9,208,
    246,152,42,144,116,25,167,250,35,195,114,167,69,11,223,102,
    100,232,94,164,210,87,9,219,159,250,28,72,59,104,147,103,
    163,207,118,251,50,208,106,3,9,159,167,7,78,224,39,73,
    170,29,63,12,29,95,235,44,218,61,208,82,57,58,117,238,
    169,86,157,28,190,92,128,107,44,111,52,44,192,68,142,71,
    48,153,151,48,10,52,190,172,240,11,219,95,73,141,192,232,
    165,161,66,58,137,232,74,237,210,34,245,69,108,30,23,211,
    49,2,91,181,2,47,74,198,123,186,193,208,243,149,242,120,
    58,162,51,202,104,244,75,63,62,144,154,248,149,246,53,206,
    74,93,51,209,76,113,118,149,52,45,20,37,227,121,73,154,
    132,35,92,103,20,220,163,37,92,101,180,45,0,225,109,13,
    177,54,135,109,13,154,136,189,37,43,32,149,42,57,210,24,
    101,151,201,0,192,158,23,121,2,65,196,29,99,154,105,89,
    156,39,88,55,14,66,135,122,52,216,37,64,187,55,168,89,
    167,230,102,161,254,172,108,208,60,109,131,251,52,175,197,138,
    7,118,174,226,56,144,182,39,2,233,218,73,32,97,90,220,
    161,128,176,40,108,78,2,194,38,35,100,143,114,244,83,168,
    33,0,240,115,9,243,108,26,119,137,84,174,21,112,117,9,
    131,101,32,118,75,64,116,201,43,140,66,247,218,52,51,110,
    188,59,51,118,141,25,31,208,188,11,57,126,154,140,155,134,
    8,200,249,86,110,84,54,232,22,118,70,87,200,160,101,83,
    94,193,141,238,121,210,228,29,139,119,61,174,39,76,6,49,
    22,54,157,10,33,109,207,134,203,249,78,164,40,224,135,89,
    250,197,200,73,247,28,13,197,26,30,222,83,155,247,212,71,
    152,18,156,71,156,100,76,82,48,97,159,201,97,134,225,93,
    231,23,19,178,30,135,175,151,111,35,104,114,218,203,216,83,
    108,104,206,80,74,103,148,152,102,106,229,198,216,202,180,232,
    143,104,210,6,155,216,134,43,248,52,4,175,204,75,57,67,
    114,109,193,95,241,249,152,140,77,250,74,160,138,210,221,49,
    235,102,149,72,57,247,91,19,136,153,145,66,238,123,56,195,
    86,17,112,53,24,227,131,30,155,150,76,49,240,103,224,234,
    75,192,159,128,176,128,46,207,163,134,227,147,30,114,233,10,
    177,255,14,56,249,156,179,209,89,38,250,172,60,61,97,112,
    170,15,153,213,236,123,63,131,191,148,50,215,177,13,130,246,
    40,59,175,175,202,123,84,101,28,175,12,162,183,218,135,42,
    147,129,77,78,234,249,138,216,76,8,219,227,16,62,73,130,
    227,154,8,243,210,172,240,53,111,166,243,104,101,159,158,160,
    139,54,128,27,98,197,42,97,230,187,212,188,63,134,139,40,
    104,51,88,228,198,233,140,93,218,181,60,147,37,127,74,43,
    169,240,218,23,107,188,87,79,138,25,135,70,181,8,141,251,
    227,208,144,156,188,95,115,21,78,173,69,24,56,182,4,30,
    171,176,96,161,19,77,5,100,21,58,53,10,34,46,48,69,
    30,99,162,72,106,148,12,39,118,6,182,207,182,177,220,24,
    6,198,195,212,124,49,211,36,66,78,126,24,251,131,221,208,
    127,68,241,162,104,222,160,136,58,171,80,98,169,172,4,69,
    140,152,166,7,191,126,175,80,230,229,76,19,200,7,56,195,
    88,9,14,151,48,13,56,107,252,178,39,157,129,28,236,226,
    228,189,104,232,236,197,126,151,61,101,231,74,126,86,40,169,
    217,213,167,119,100,69,169,105,59,117,130,52,193,76,127,16,
    232,52,115,66,137,199,17,25,58,239,59,188,77,56,145,114,
    252,93,252,234,7,218,68,192,100,48,115,209,231,103,93,197,
    245,221,254,43,234,206,220,211,30,30,59,35,44,107,189,194,
    72,230,40,52,206,249,28,29,38,156,112,227,196,99,134,30,
    153,228,246,67,106,190,77,205,61,120,23,91,67,27,103,160,
    89,20,25,175,134,249,167,46,244,234,153,72,126,70,163,213,
    217,120,254,215,219,196,179,185,32,65,6,89,131,254,28,183,
    243,180,51,116,234,5,177,193,237,5,38,46,20,196,38,183,
    23,153,184,88,16,151,184,93,102,226,165,130,184,194,237,42,
    19,215,10,226,101,110,175,48,241,106,65,188,198,237,117,38,
    222,40,136,235,220,222,100,226,173,34,251,108,48,209,129,206,
    237,226,42,232,14,101,162,218,255,154,137,56,130,103,30,187,
    242,255,154,128,220,251,239,84,7,247,251,144,151,44,211,146,
    143,5,165,195,196,135,38,249,24,207,96,97,51,90,45,21,
    184,172,175,120,142,85,8,22,193,135,92,30,123,150,169,131,
    79,220,200,117,5,223,83,208,153,32,145,175,188,243,162,195,
    20,187,4,16,127,56,148,73,120,82,200,242,151,153,218,139,
    178,74,10,39,149,5,86,173,171,248,156,69,46,169,86,210,
    148,17,90,29,99,245,250,187,240,179,30,167,208,187,19,41,
    212,37,71,154,164,57,206,151,198,43,223,153,146,175,188,208,
    215,190,231,7,129,84,74,42,47,77,226,17,157,155,254,43,
    126,44,126,248,162,232,236,39,237,76,19,19,251,90,38,129,
    153,235,107,153,104,2,218,43,242,119,253,205,105,3,14,148,
    244,6,190,66,11,122,81,200,178,223,146,149,102,160,12,53,
    65,229,250,238,124,35,200,110,38,37,79,240,117,60,36,153,
    0,111,94,245,250,52,118,53,82,44,239,141,12,36,140,11,
    241,145,154,174,25,130,47,242,99,79,253,225,192,87,189,55,
    27,97,146,181,48,194,4,85,127,99,218,224,32,75,241,128,
    58,244,187,210,172,252,173,24,105,14,186,222,44,209,244,205,
    169,203,139,190,52,70,126,51,7,201,228,219,46,124,225,176,
    214,55,216,224,177,212,242,220,52,164,41,66,242,251,140,16,
    23,144,165,35,60,104,243,129,21,223,99,207,155,125,141,241,
    35,147,100,204,181,42,213,24,53,177,118,234,175,94,169,11,
    46,233,78,221,220,155,117,146,245,93,58,41,185,156,255,23,
    199,145,207,55,203,69,61,197,137,158,238,23,182,253,129,185,
    44,228,11,48,247,54,53,119,139,188,193,128,53,71,119,62,
    23,155,27,9,76,234,92,108,114,109,233,110,22,185,126,240,
    96,179,208,110,211,104,183,131,232,148,3,190,217,30,60,96,
    95,148,121,100,114,48,240,158,202,65,154,141,158,166,161,212,
    183,79,125,127,156,215,177,134,197,123,41,169,224,229,28,113,
    118,166,73,222,51,83,25,38,252,104,46,106,57,86,207,126,
    255,36,78,131,125,25,230,60,55,167,243,108,165,3,31,233,
    231,207,178,19,21,179,44,159,250,30,102,52,106,237,20,213,
    4,25,34,150,35,126,194,0,97,152,185,126,210,149,133,238,
    228,193,226,43,95,197,157,183,110,10,220,9,10,151,173,188,
    216,73,180,49,236,51,217,141,40,203,177,184,137,97,249,70,
    77,120,100,215,156,31,118,37,17,51,143,21,115,108,52,23,
    98,143,40,151,168,159,99,67,23,195,245,197,186,168,89,244,
    95,16,182,104,136,166,168,136,133,102,221,174,215,234,85,27,
    227,137,40,43,162,97,215,27,11,226,188,191,13,140,175,134,
    181,177,92,23,255,1,7,114,232,21,
};

EmbeddedPython embedded_m5_internal_param_BasePrefetcher(
    "m5/internal/param_BasePrefetcher.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_BasePrefetcher.py",
    "m5.internal.param_BasePrefetcher",
    data_m5_internal_param_BasePrefetcher,
    2378,
    7435);

} // anonymous namespace
