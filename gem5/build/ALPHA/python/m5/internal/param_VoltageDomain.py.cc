#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VoltageDomain[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,180,37,91,177,
    29,219,113,226,100,51,139,193,168,86,172,86,155,46,235,182,
    6,193,178,57,64,91,20,110,70,181,117,170,117,227,104,242,
    36,81,166,72,129,60,59,85,33,255,50,7,219,126,219,31,
    49,236,135,253,31,251,191,182,247,222,145,180,236,216,88,129,
    13,138,45,30,142,199,187,119,239,203,231,125,185,11,160,248,
    171,225,243,43,7,32,239,10,128,16,127,2,98,128,145,0,
    124,23,82,64,184,14,199,53,200,126,10,97,13,94,1,116,
    13,144,6,156,99,199,132,223,25,144,44,243,26,27,98,147,
    71,4,76,26,32,45,232,214,224,48,89,3,75,218,112,220,
    128,236,143,32,132,72,4,188,8,23,32,92,132,87,72,29,
    59,117,38,184,8,97,131,59,117,8,151,184,211,128,201,42,
    200,37,232,34,241,5,232,54,145,212,59,72,234,22,147,250,
    23,145,10,241,203,6,132,77,154,142,188,124,77,51,45,154,
    201,123,220,98,42,43,37,103,171,208,93,43,251,183,103,250,
    235,220,95,1,185,6,195,13,24,110,194,240,14,244,80,224,
    213,138,234,22,72,19,134,119,161,123,23,36,254,182,224,28,
    117,18,174,205,172,184,199,43,110,87,43,182,121,197,125,232,
    222,7,137,191,109,189,194,134,78,107,19,245,28,253,27,255,
    90,168,103,80,203,216,156,202,44,143,210,196,139,146,94,26,
    25,244,221,166,134,172,18,80,179,80,152,231,55,100,158,127,
    2,219,38,52,10,243,156,1,18,22,36,75,108,192,25,119,
    206,12,152,180,96,42,96,104,65,104,194,20,183,169,17,3,
    125,1,231,6,124,99,210,132,51,108,45,84,232,15,193,82,
    218,54,67,86,168,166,180,0,103,53,152,214,160,243,98,106,
    208,192,113,29,178,127,192,119,15,152,232,34,19,53,96,138,
    173,5,231,22,156,217,112,136,147,112,104,88,39,241,197,139,
    41,74,138,35,157,150,133,220,30,204,136,75,162,132,81,150,
    248,35,169,54,176,239,141,253,204,31,121,95,165,177,242,251,
    114,63,29,249,81,210,106,148,51,211,124,111,236,171,129,203,
    75,77,210,201,104,172,152,100,154,72,181,132,157,94,148,132,
    222,40,13,79,98,169,22,137,158,215,139,98,233,121,252,241,
    147,209,56,205,212,179,44,75,51,151,212,202,131,113,234,87,
    43,72,169,65,156,230,178,69,187,241,54,46,145,87,52,187,
    55,102,138,196,0,179,75,139,67,153,7,89,52,86,104,45,
    77,145,102,19,181,22,217,137,155,252,15,216,180,191,204,209,
    166,237,65,122,44,79,146,227,104,212,222,151,167,50,78,199,
    35,153,168,246,179,103,15,223,255,197,126,187,47,71,143,218,
    71,39,81,28,182,159,126,246,252,227,167,237,241,68,13,210,
    164,141,163,81,162,36,234,40,110,95,163,157,61,156,118,155,
    246,121,25,245,189,136,37,244,6,50,30,203,172,73,163,219,
    196,131,88,21,203,194,22,166,104,137,38,246,106,248,152,226,
    129,177,36,14,34,146,49,32,185,9,98,102,9,170,191,3,
    155,15,173,127,108,64,246,128,32,51,196,159,32,27,35,112,
    58,244,205,224,111,191,37,229,232,209,161,73,64,208,131,83,
    134,25,226,13,103,62,38,203,39,192,88,169,193,208,6,141,
    33,132,158,6,85,54,161,22,167,19,25,3,137,91,144,255,
    237,50,133,100,21,80,249,232,202,56,116,7,183,250,19,195,
    178,211,34,198,15,24,26,106,16,229,233,203,132,13,64,125,
    118,164,14,234,228,249,228,243,163,161,12,84,190,131,3,95,
    167,39,78,224,39,73,170,28,63,12,29,95,169,44,58,58,
    81,50,119,84,234,236,230,173,58,89,124,173,68,87,69,111,
    50,46,209,68,150,71,52,233,151,48,10,20,190,172,243,11,
    235,63,151,10,145,49,72,195,28,199,137,68,95,42,151,152,
    84,183,176,121,90,110,199,16,108,217,37,96,114,25,247,84,
    131,177,231,231,185,199,219,209,56,195,140,86,159,250,241,137,
    84,52,63,87,190,194,93,169,171,55,154,47,208,238,146,168,
    165,164,164,61,47,73,147,112,130,140,70,193,46,241,112,151,
    225,182,12,4,184,77,4,219,2,182,54,52,17,124,171,70,
    64,50,89,5,212,24,102,119,72,3,192,166,23,69,4,65,
    200,157,99,156,105,25,28,40,88,56,118,67,135,122,180,216,
    37,68,187,247,169,121,64,205,15,74,249,231,166,132,230,85,
    37,60,164,141,13,150,60,48,11,25,43,87,58,184,228,74,
    247,46,92,9,3,99,135,92,194,32,199,185,112,9,147,180,
    144,61,41,240,79,206,134,16,192,207,51,168,103,221,184,171,
    36,179,93,2,214,37,20,206,66,177,63,3,69,151,204,194,
    56,116,239,221,164,199,157,55,168,199,190,214,227,35,218,120,
    185,64,80,147,145,211,16,1,153,223,40,180,202,26,221,199,
    206,100,139,52,58,171,203,45,204,117,135,73,147,147,22,39,
    62,78,249,58,136,104,21,235,142,69,88,235,153,112,167,72,
    70,57,249,252,56,75,191,157,56,105,207,81,80,242,240,120,
    55,223,219,205,63,194,168,224,60,225,56,163,227,130,246,252,
    76,142,51,244,240,58,191,104,175,245,216,131,189,34,149,160,
    206,41,177,179,169,88,211,28,164,114,149,81,108,154,175,154,
    27,149,154,137,235,143,104,215,6,235,216,132,45,124,26,130,
    89,243,82,142,146,92,95,240,87,124,126,77,218,38,129,37,
    80,213,231,118,52,227,44,19,73,231,190,125,9,51,243,146,
    200,125,7,183,216,47,125,206,134,10,33,244,152,196,51,185,
    193,95,128,75,48,1,127,6,66,3,26,189,112,28,118,81,
    122,200,168,235,78,193,242,84,92,151,237,12,237,128,70,17,
    162,208,63,243,15,121,170,78,126,159,194,95,103,162,215,185,
    9,130,18,149,89,20,89,179,137,202,170,92,150,97,244,189,
    146,145,117,217,183,201,74,3,63,167,105,218,139,205,202,139,
    47,2,97,85,25,97,104,154,27,194,22,245,126,30,177,246,
    201,5,190,40,11,220,23,235,198,12,106,126,66,205,187,21,
    96,68,57,54,15,46,119,174,134,237,153,220,229,233,80,249,
    49,177,98,49,243,43,54,199,167,75,84,42,231,168,149,206,
    241,176,114,14,201,1,252,21,215,226,212,26,4,130,115,67,
    224,225,7,203,22,58,119,88,32,107,208,181,201,141,184,206,
    20,133,151,137,50,174,209,126,151,178,3,235,231,64,107,174,
    194,129,54,49,53,223,206,55,142,144,149,31,199,254,232,40,
    244,159,124,69,123,210,198,65,233,119,70,41,197,234,172,20,
    228,51,226,38,65,248,245,189,82,154,211,249,198,144,247,201,
    184,165,20,236,49,97,26,112,224,248,98,32,157,145,28,29,
    225,238,131,104,236,244,98,191,207,182,50,11,41,63,47,165,
    84,108,236,171,121,57,167,232,116,144,58,65,154,96,184,63,
    9,84,154,57,161,196,115,137,12,157,119,29,206,21,78,148,
    59,254,17,126,245,3,165,125,224,178,63,115,241,231,103,253,
    156,235,188,227,151,212,157,191,173,61,60,127,70,88,223,30,
    150,90,210,135,162,42,240,115,73,171,29,10,211,39,158,55,
    212,68,7,184,159,81,243,99,106,118,225,141,228,135,54,110,
    241,37,237,69,234,179,49,6,213,5,87,70,151,38,62,167,
    181,249,235,46,125,244,125,92,90,223,100,20,142,109,211,76,
    185,64,7,97,106,235,148,38,186,141,242,94,100,137,7,151,
    233,18,2,207,251,52,114,139,66,192,194,255,26,2,216,115,
    230,239,51,191,255,191,122,190,251,240,205,10,225,126,0,69,
    185,112,147,215,139,89,9,155,218,235,135,162,44,205,103,197,
    227,243,255,246,245,48,243,130,76,250,74,106,195,109,207,91,
    102,14,35,154,3,175,50,95,41,88,117,80,249,176,18,238,
    156,43,166,201,198,76,237,204,214,20,135,88,222,96,125,61,
    101,249,61,67,151,216,23,40,181,42,53,108,97,147,200,151,
    222,53,170,208,101,52,113,228,143,199,50,9,47,74,100,254,
    50,95,48,80,168,242,225,162,98,193,122,120,3,159,215,29,
    147,68,155,145,148,237,88,171,92,113,238,22,101,20,247,74,
    91,182,86,96,54,48,187,100,73,29,138,171,40,236,254,178,
    178,205,206,13,16,61,213,99,116,24,251,175,115,176,130,226,
    122,180,120,103,61,50,246,67,25,75,68,217,53,107,21,49,
    84,156,77,67,137,201,47,157,224,153,137,143,30,248,30,123,
    222,27,72,20,63,199,45,190,161,189,40,149,81,162,176,49,
    85,108,138,186,85,23,156,141,175,92,190,106,230,168,216,214,
    37,246,36,119,57,136,172,84,186,229,11,194,50,25,178,67,
    209,17,241,192,31,233,43,31,190,197,112,223,162,230,71,165,
    121,216,21,244,225,139,15,54,250,80,137,206,195,165,2,87,
    6,238,30,141,211,81,125,244,104,175,148,105,79,203,212,137,
    70,250,126,139,239,40,71,143,212,218,149,105,97,134,194,170,
    205,43,163,168,214,200,143,163,239,244,189,86,57,172,72,146,
    171,116,137,159,234,141,115,235,235,81,142,205,154,201,126,148,
    35,33,166,82,173,40,188,158,84,173,156,27,96,53,187,122,
    254,48,208,149,173,62,183,63,161,91,221,252,49,54,116,131,
    85,95,169,11,219,160,203,82,83,52,68,83,88,98,185,89,
    55,235,118,189,102,34,84,104,100,93,52,204,122,99,89,208,
    255,14,194,166,97,236,44,213,197,127,0,43,118,172,222,
};

EmbeddedPython embedded_m5_internal_param_VoltageDomain(
    "m5/internal/param_VoltageDomain.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_VoltageDomain.py",
    "m5.internal.param_VoltageDomain",
    data_m5_internal_param_VoltageDomain,
    2111,
    6469);

} // anonymous namespace
