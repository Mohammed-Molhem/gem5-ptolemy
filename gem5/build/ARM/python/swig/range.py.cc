#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_range[] = {
    120,156,205,90,123,111,27,75,21,63,187,107,59,177,27,55,
    206,187,143,180,53,66,21,230,10,106,110,225,62,160,165,208,
    54,165,228,138,134,178,238,165,173,65,152,141,119,98,111,98,
    239,90,187,155,180,46,137,144,72,5,247,15,36,248,14,8,
    33,190,7,226,107,193,249,157,217,93,219,125,72,112,19,7,
    146,120,52,30,143,207,243,119,206,153,57,155,54,37,63,121,
    126,253,176,74,20,253,211,32,114,249,207,160,30,81,223,160,
    166,65,134,50,200,189,72,123,121,10,191,67,110,158,94,19,
    53,77,82,38,29,243,196,162,95,152,228,207,201,119,10,212,
    179,100,197,160,97,137,84,142,154,121,122,234,47,80,78,21,
    104,175,68,225,175,201,48,12,223,160,103,238,12,185,179,244,
    154,169,243,164,40,4,103,201,45,201,164,72,238,57,153,148,
    104,88,33,117,142,154,76,124,134,154,101,38,245,1,147,58,
    47,164,254,1,82,46,127,114,137,220,50,182,179,44,207,177,
    51,135,157,194,227,188,80,153,39,119,30,84,118,88,135,74,
    182,145,9,91,180,187,64,205,5,82,252,87,161,99,168,201,
    75,139,212,92,36,181,72,187,75,212,92,34,119,65,104,44,
    203,238,101,76,220,69,89,89,145,149,21,76,220,37,89,89,
    149,149,85,76,220,229,148,225,74,198,112,77,62,190,64,205,
    11,164,248,111,77,51,100,62,23,169,121,81,24,94,162,230,
    37,153,92,166,230,101,153,172,83,115,157,220,85,33,127,69,
    190,127,5,19,119,77,86,174,202,202,85,76,220,11,178,114,
    77,86,174,97,194,174,104,212,46,179,79,189,127,241,79,141,
    125,74,241,28,15,7,42,140,188,192,111,121,254,78,224,153,
    248,188,128,1,8,104,99,152,73,160,112,31,80,248,59,9,
    14,92,51,129,194,17,145,129,247,68,61,147,142,100,114,100,
    210,176,70,135,6,237,230,200,181,232,144,217,228,161,90,199,
    160,99,147,126,105,97,195,17,143,57,118,222,85,202,197,26,
    7,187,226,60,77,105,134,142,242,116,152,167,198,179,67,19,
    11,123,69,10,255,74,175,214,133,232,172,16,53,233,144,199,
    28,29,231,232,168,64,79,121,19,47,237,22,97,88,227,217,
    33,107,202,43,141,90,142,165,221,26,83,23,170,184,94,232,
    59,125,21,67,201,86,232,248,29,85,43,165,159,5,209,141,
    129,19,119,109,217,108,193,10,253,65,44,68,2,95,197,231,
    120,178,227,249,110,171,31,184,251,61,21,207,130,66,107,199,
    235,169,86,75,62,220,236,15,130,48,126,16,134,65,104,195,
    144,178,216,11,156,236,27,48,99,187,23,68,170,6,110,194,
    198,6,249,24,187,119,6,66,17,2,136,128,248,178,171,162,
    118,232,13,98,246,143,166,136,221,160,86,131,103,100,136,30,
    242,80,255,60,98,47,214,187,193,158,218,247,247,188,126,125,
    67,29,168,94,48,232,43,63,174,63,120,112,243,195,239,110,
    212,59,170,255,81,125,123,223,235,185,245,187,246,163,250,96,
    24,119,3,191,30,189,240,58,117,49,195,13,94,89,4,65,
    94,105,121,162,74,171,171,122,3,21,150,177,122,9,204,140,
    138,49,103,20,12,203,168,25,101,158,229,249,101,25,235,230,
    57,99,203,131,50,109,40,8,195,90,41,94,254,66,226,25,
    118,236,158,73,225,58,208,176,203,127,6,220,199,152,104,224,
    51,83,62,251,25,172,160,87,119,45,248,88,47,30,10,130,
    24,74,188,243,54,156,234,147,192,32,79,187,5,210,240,96,
    84,105,188,132,67,140,188,29,100,76,38,158,163,232,79,147,
    20,252,10,177,149,57,35,240,210,42,179,250,157,32,174,81,
    131,224,91,130,129,184,235,69,193,11,95,44,141,185,196,72,
    131,109,242,120,248,211,237,93,213,142,163,107,188,240,60,216,
    175,182,29,223,15,226,170,227,186,85,39,142,67,111,123,63,
    86,81,53,14,170,215,163,90,17,174,93,72,97,148,209,27,
    14,82,216,192,197,12,27,253,198,245,218,49,191,89,146,55,
    98,255,72,197,12,129,110,224,70,188,14,18,29,21,219,16,
    50,62,207,195,221,148,157,96,173,86,72,145,17,169,222,78,
    92,18,144,57,81,212,18,118,88,23,60,225,219,7,78,111,
    95,67,63,138,157,152,185,98,170,25,77,9,81,23,160,83,
    170,18,204,212,242,3,223,29,178,68,94,251,58,152,93,16,
    92,205,17,144,181,194,168,154,225,177,64,101,70,89,197,108,
    67,248,92,130,41,193,211,42,84,37,241,177,145,100,1,198,
    214,49,231,138,154,41,193,46,90,72,96,85,49,195,151,109,
    64,215,70,230,179,215,49,92,73,21,61,125,109,203,111,106,
    123,19,28,76,81,177,109,37,202,100,193,177,53,17,28,23,
    71,193,193,89,172,1,144,155,8,133,17,200,45,168,27,222,
    73,16,141,240,97,167,242,199,99,56,22,35,216,21,40,87,
    72,33,104,3,87,227,224,234,140,129,203,134,253,5,89,246,
    197,247,25,236,218,89,24,172,163,13,246,17,56,204,37,152,
    40,11,22,74,70,27,14,53,19,243,137,233,54,120,50,92,
    131,233,198,141,182,198,21,232,169,95,150,82,34,229,72,138,
    190,142,127,109,75,61,201,1,61,59,22,173,38,37,34,66,
    184,14,194,224,229,176,26,236,84,99,74,101,184,125,61,186,
    113,61,186,197,1,93,189,35,41,66,135,180,14,218,80,13,
    66,14,206,162,188,209,1,215,146,224,107,37,233,158,141,187,
    2,163,153,169,73,37,191,68,113,136,180,50,37,123,150,50,
    123,66,188,91,32,95,18,99,90,180,198,175,146,33,50,180,
    2,201,100,82,222,229,83,126,221,131,89,161,153,34,28,240,
    236,134,150,80,132,135,26,246,215,38,80,112,234,162,219,31,
    48,173,141,52,92,10,148,249,28,47,11,194,1,193,127,32,
    57,68,25,244,123,130,127,217,141,9,230,37,186,240,130,155,
    150,176,253,87,36,73,226,29,165,199,212,177,99,38,105,132,
    67,43,250,68,182,234,74,244,25,125,49,150,97,142,45,50,
    80,53,172,228,48,51,94,53,114,89,180,9,48,254,163,202,
    144,155,12,75,184,163,235,68,216,166,3,208,202,2,112,148,
    172,178,243,8,103,149,211,199,204,172,38,220,130,12,155,35,
    196,32,37,95,54,150,204,49,28,124,3,195,55,51,8,24,
    233,218,169,138,115,237,205,28,58,86,49,90,58,111,253,24,
    60,115,34,229,124,65,106,216,253,97,187,199,103,165,20,208,
    249,20,208,27,25,160,149,164,209,215,114,124,197,104,194,159,
    199,166,193,119,19,125,43,225,67,1,78,204,5,82,51,56,
    101,226,210,145,79,46,29,28,12,96,34,144,76,95,146,134,
    144,190,38,178,182,216,100,75,91,43,115,178,246,31,134,151,
    83,10,123,184,240,118,207,233,111,187,206,157,6,136,131,67,
    59,141,30,51,21,183,50,46,46,144,111,188,79,98,121,251,
    173,84,236,131,41,133,252,135,76,43,19,87,0,238,6,109,
    137,243,39,93,85,237,171,254,54,179,233,122,131,234,78,207,
    233,136,245,211,40,127,8,117,190,71,114,24,208,186,252,81,
    223,60,150,199,146,189,196,185,241,148,163,151,11,194,161,132,
    123,203,212,53,97,228,42,137,71,57,91,3,246,190,122,209,
    210,88,210,169,30,110,119,6,3,229,187,163,192,148,35,149,
    19,118,244,150,41,122,180,197,119,50,143,15,134,159,143,130,
    114,158,147,248,50,191,222,134,34,132,26,83,75,98,51,159,
    69,233,165,169,73,42,78,108,166,78,172,225,214,50,170,23,
    114,90,213,193,204,229,149,175,18,241,80,167,203,175,99,192,
    249,207,254,36,179,63,130,201,85,124,77,82,137,11,226,10,
    101,103,22,190,9,197,97,48,228,18,43,5,140,223,247,90,
    173,105,150,163,58,228,74,13,95,224,76,88,48,138,185,162,
    33,41,38,45,77,15,211,28,144,160,144,128,194,137,136,202,
    128,21,6,253,71,94,59,12,30,223,215,14,249,120,122,146,
    223,6,60,105,116,238,252,18,18,99,135,31,132,125,167,119,
    86,66,127,159,36,81,159,68,104,156,216,188,200,62,59,67,
    223,33,221,39,73,100,150,163,224,93,215,13,109,108,120,187,
    22,253,141,254,251,90,148,148,160,25,116,111,146,150,216,76,
    218,18,155,77,170,83,210,45,59,151,118,203,230,210,110,89,
    153,220,57,153,156,79,26,98,232,124,233,22,88,5,45,48,
    76,22,210,206,214,114,210,11,107,174,160,220,33,179,157,168,
    220,73,241,152,98,198,233,211,105,86,57,251,230,25,73,107,
    127,155,146,147,236,255,162,194,73,88,115,133,203,64,170,109,
    129,59,215,216,185,243,227,212,72,83,50,8,50,126,64,239,
    47,105,153,35,39,66,254,77,47,138,66,43,227,17,199,213,
    50,86,97,79,57,7,202,157,118,213,147,238,220,24,191,40,
    131,227,137,181,232,48,143,253,158,19,122,241,240,76,180,24,
    227,23,159,68,139,133,9,45,184,90,123,3,21,77,93,131,
    228,74,13,94,251,39,145,254,252,164,244,222,43,53,117,209,
    165,99,199,140,14,78,34,247,252,132,220,7,78,207,155,62,
    246,147,78,162,231,190,56,61,201,163,216,9,227,51,145,92,
    56,189,60,137,228,75,19,146,199,129,128,221,239,76,93,122,
    156,47,50,110,195,9,13,164,73,66,73,213,168,140,107,128,
    194,241,46,37,150,39,148,232,171,176,163,162,167,94,220,29,
    181,171,166,120,116,146,35,241,136,231,171,83,213,69,210,114,
    132,78,253,217,233,50,226,249,155,19,234,178,56,169,75,212,
    216,223,70,215,231,76,52,193,165,51,229,120,120,170,122,180,
    3,63,118,60,255,140,60,2,61,82,142,71,111,69,250,255,
    199,149,249,183,169,92,53,60,211,24,93,153,237,79,49,188,
    235,146,124,15,3,26,90,246,143,48,160,9,102,127,134,225,
    39,24,240,48,193,126,140,1,183,86,251,9,134,159,103,222,
    0,189,228,110,61,58,252,225,116,105,223,154,80,243,244,117,
    253,1,211,234,129,40,91,124,236,30,253,238,223,47,115,237,
    147,71,169,224,246,224,229,212,111,124,207,152,214,23,116,162,
    91,106,38,238,166,63,117,113,159,147,8,113,18,113,139,169,
    184,141,236,72,52,69,129,209,71,250,243,72,96,185,148,188,
    241,63,9,154,51,192,164,59,226,195,8,120,39,123,62,19,
    89,158,162,167,221,166,79,83,37,182,156,190,126,92,42,15,
    6,237,175,96,248,106,26,101,210,231,211,15,69,228,57,132,
    126,170,195,87,37,121,174,35,141,121,251,6,6,116,133,164,
    254,235,14,149,244,166,66,213,241,34,78,255,114,160,107,31,
    240,233,2,62,126,228,188,124,226,181,247,164,27,35,221,13,
    105,23,72,56,196,136,248,177,163,207,56,13,120,36,233,95,
    216,65,255,158,23,167,196,176,95,206,76,155,190,156,189,158,
    116,67,229,184,155,27,242,141,100,237,113,16,198,155,27,130,
    82,241,189,216,115,138,193,173,251,206,250,105,215,29,220,37,
    34,48,196,147,220,226,124,209,40,152,248,239,0,203,40,25,
    101,35,103,204,149,139,86,177,80,204,91,156,0,176,178,100,
    148,172,98,105,181,88,228,119,28,250,86,209,204,126,141,213,
    229,100,245,141,79,254,13,184,49,159,137,
};

EmbeddedPython embedded_m5_internal_range(
    "m5/internal/range.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/swig/range.py",
    "m5.internal.range",
    data_m5_internal_range,
    2507,
    9371);

} // anonymous namespace
