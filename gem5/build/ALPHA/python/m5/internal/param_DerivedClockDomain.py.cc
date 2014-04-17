#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivedClockDomain[] = {
    120,156,205,88,255,115,219,72,21,127,43,201,78,236,216,141,
    211,52,109,211,4,98,134,201,156,185,225,98,174,80,14,184,
    78,134,114,233,204,29,195,228,138,2,164,103,224,116,138,180,
    182,101,203,146,71,218,36,231,155,228,23,210,1,126,227,143,
    96,248,129,255,131,255,11,222,123,43,41,74,210,116,58,3,
    83,147,88,59,171,213,238,123,251,222,251,188,47,187,30,100,
    127,21,124,126,222,6,72,251,2,192,199,159,128,16,96,34,
    160,39,64,72,1,254,42,140,43,144,252,8,252,10,188,2,
    232,25,32,13,184,192,142,9,191,55,32,106,240,154,42,132,
    38,143,8,152,213,65,90,208,171,192,97,180,2,150,172,194,
    184,14,201,87,32,132,136,4,188,244,23,192,95,132,87,72,
    29,59,53,38,184,8,126,157,59,53,240,151,184,83,135,89,
    11,228,18,244,144,248,2,244,154,72,234,125,36,117,135,73,
    253,139,72,249,248,229,30,248,77,154,142,123,249,130,102,90,
    52,147,121,220,97,42,203,249,206,90,208,91,201,251,119,75,
    253,213,82,255,30,247,151,65,174,192,104,13,70,247,97,244,
    0,80,33,126,171,224,240,16,164,9,163,117,232,173,131,196,
    223,67,184,64,253,248,43,165,21,143,120,197,221,98,197,6,
    175,216,132,222,38,72,252,109,232,21,85,56,232,172,161,206,
    131,127,227,95,7,117,14,170,129,205,137,76,210,32,142,156,
    32,234,199,129,65,223,171,212,144,133,60,106,22,50,83,125,
    66,166,250,39,176,157,124,35,51,213,57,32,97,65,178,132,
    6,156,115,231,220,128,89,7,206,4,140,44,240,77,56,67,
    54,21,218,192,64,192,133,1,127,48,105,194,57,182,22,42,
    247,219,96,41,109,167,17,43,87,83,90,128,243,10,156,85,
    224,224,229,153,65,3,227,26,36,255,128,111,54,153,232,34,
    19,53,224,12,91,11,46,44,56,175,194,33,78,194,161,81,
    141,196,23,47,207,80,82,28,57,232,88,184,219,253,146,184,
    36,138,31,36,145,59,145,106,29,251,206,212,77,220,137,179,
    39,147,224,68,250,159,132,177,55,222,139,39,110,16,117,234,
    249,244,56,221,153,186,106,104,243,122,147,20,51,153,42,166,
    27,71,82,45,97,167,31,68,190,51,137,253,227,80,170,69,
    34,234,244,131,80,58,14,127,252,108,50,141,19,245,60,73,
    226,196,38,221,242,96,24,187,197,10,210,172,23,198,169,236,
    16,55,102,99,19,121,69,179,251,83,166,72,27,224,61,211,
    98,95,166,94,18,76,21,154,76,83,164,217,68,173,67,198,
    226,38,37,187,117,127,155,162,97,187,195,120,44,143,163,113,
    48,233,238,201,19,25,198,211,137,140,84,247,249,243,199,31,
    254,116,175,59,144,147,39,221,163,227,32,244,187,207,126,245,
    226,211,103,221,233,76,13,227,168,139,163,65,164,36,42,42,
    236,222,166,162,29,156,123,151,152,157,6,3,39,96,49,157,
    161,12,167,50,105,210,232,35,218,136,104,137,134,168,10,83,
    116,68,19,123,21,124,76,177,105,44,137,253,128,4,245,72,
    120,2,155,153,195,235,239,192,134,68,28,140,13,72,54,9,
    60,35,252,9,178,54,66,232,128,190,25,252,237,215,164,33,
    61,58,50,9,18,122,240,140,1,135,200,195,153,79,9,3,
    17,48,106,42,48,170,130,70,19,130,80,195,43,153,81,139,
    211,137,140,129,196,45,72,255,118,149,66,212,2,180,0,58,
    56,14,221,71,86,127,98,128,30,116,104,227,251,140,15,53,
    12,210,248,52,98,43,80,159,93,234,0,117,242,98,246,249,
    209,72,122,42,221,194,129,47,226,227,182,231,70,81,172,218,
    174,239,183,93,165,146,224,232,88,201,180,173,226,246,118,218,
    169,145,217,87,114,136,21,244,102,211,28,82,100,126,132,148,
    126,241,3,79,225,203,42,191,176,254,83,169,16,30,195,216,
    79,113,156,72,12,164,178,105,147,234,14,54,207,114,118,140,
    195,78,53,71,77,42,195,190,170,51,0,221,52,117,152,29,
    141,51,214,104,245,137,27,30,75,69,243,83,229,42,228,74,
    93,205,104,14,104,123,72,242,230,226,146,10,157,40,142,252,
    25,238,54,240,182,105,35,15,25,115,13,32,212,173,33,226,
    22,176,173,66,19,17,216,50,60,18,204,202,240,198,88,187,
    79,106,0,182,191,200,2,10,226,238,2,195,78,199,224,184,
    193,18,178,67,182,169,71,139,109,130,181,189,65,205,38,53,
    223,202,149,240,110,53,209,188,174,137,199,196,221,96,241,61,
    51,19,180,112,170,253,43,78,181,126,233,84,24,44,15,200,
    57,12,114,161,75,231,48,73,21,201,110,230,9,228,118,8,
    6,252,92,194,63,43,200,110,145,224,213,28,186,54,225,177,
    12,202,65,9,148,54,217,134,17,105,175,223,166,204,173,121,
    43,115,160,149,249,132,184,55,50,44,53,25,67,117,225,17,
    16,140,76,181,172,214,61,236,204,30,144,90,203,10,125,128,
    73,240,48,106,114,54,227,140,200,117,129,142,41,90,207,186,
    99,17,234,250,38,220,207,178,84,74,33,96,154,196,95,207,
    218,113,191,173,32,223,195,211,237,116,103,59,253,24,131,68,
    123,151,195,142,14,19,58,16,36,114,154,160,195,215,248,69,
    59,177,195,14,237,100,233,5,21,79,25,159,237,197,234,230,
    152,149,170,132,66,213,28,116,93,47,116,77,91,255,152,88,
    215,89,209,38,60,192,167,46,120,127,78,204,145,147,171,15,
    254,138,207,47,72,229,36,181,4,170,15,237,3,189,123,22,
    140,68,180,223,187,130,158,119,42,150,253,62,242,217,203,93,
    176,10,5,86,232,49,105,227,228,21,127,1,174,210,4,252,
    25,8,23,104,254,204,143,216,99,233,33,243,174,210,244,47,
    129,131,210,107,210,160,161,253,209,200,194,22,186,107,250,17,
    79,213,89,241,151,240,215,82,68,187,48,65,80,6,51,179,
    58,172,156,193,172,194,131,25,80,111,149,165,172,171,174,78,
    166,26,186,41,77,211,78,109,22,78,125,25,28,139,186,9,
    35,213,187,197,218,162,102,234,208,254,62,187,68,26,165,135,
    13,177,106,148,240,243,125,106,62,40,160,35,242,177,119,182,
    213,173,235,241,188,148,217,28,29,67,63,165,253,88,44,193,
    114,149,11,175,155,164,10,135,169,228,14,243,184,112,24,201,
    225,253,21,87,239,212,26,132,137,11,67,224,209,9,203,27,
    58,181,88,32,43,208,171,146,107,113,81,42,50,207,19,121,
    192,163,64,121,37,119,176,166,246,181,14,11,88,104,139,83,
    243,245,28,2,12,25,253,105,232,78,142,124,119,247,144,24,
    19,119,47,247,69,35,23,165,85,22,133,252,72,220,38,13,
    191,254,32,23,233,100,14,193,229,67,228,83,136,194,174,228,
    199,30,71,148,223,12,101,123,34,39,71,184,133,97,48,109,
    247,67,119,192,86,51,51,81,63,207,69,85,108,246,235,249,
    59,165,176,181,31,183,189,56,194,140,112,236,169,56,105,251,
    18,143,51,210,111,127,208,230,116,210,14,210,182,123,132,95,
    93,79,105,191,184,234,232,92,46,186,201,32,229,202,112,124,
    74,221,57,89,221,193,3,108,128,101,241,203,92,85,250,64,
    85,228,6,174,132,181,147,97,154,197,99,138,154,233,240,247,
    99,106,190,71,205,54,204,47,133,116,145,207,239,136,33,41,
    178,138,17,170,38,184,224,189,57,251,5,81,73,111,250,250,
    233,219,248,186,190,32,201,60,190,74,51,229,2,157,169,169,
    173,81,58,233,213,243,193,37,110,27,60,216,204,239,96,238,
    240,224,50,244,90,116,121,65,35,43,20,48,22,254,219,128,
    193,46,54,39,231,250,242,127,26,39,236,199,255,7,146,216,
    63,132,172,234,184,45,70,136,178,152,77,29,35,70,34,47,
    248,203,50,242,37,195,214,27,160,232,120,137,116,149,212,118,
    124,52,23,233,57,252,232,109,124,85,88,51,23,177,56,8,
    125,84,136,121,193,37,216,236,94,169,44,103,227,138,67,172,
    151,176,116,63,99,77,56,134,174,222,47,145,107,21,10,161,
    10,39,146,167,175,217,142,86,138,46,211,105,91,238,116,42,
    35,255,178,4,231,47,115,0,8,197,57,226,149,215,65,88,
    111,223,195,231,166,219,146,144,37,153,217,172,149,194,81,231,
    99,96,134,247,48,55,109,135,234,159,203,208,110,147,97,117,
    48,47,226,184,253,179,194,84,239,189,17,187,225,216,241,121,
    128,142,127,111,61,23,235,180,236,230,36,31,226,234,246,205,
    75,131,147,192,151,9,243,121,235,201,196,104,41,103,164,199,
    216,146,236,145,190,12,165,146,183,98,80,145,74,178,195,184,
    47,49,139,199,51,60,31,242,9,11,223,67,199,153,87,178,
    251,9,242,249,35,100,241,149,146,93,21,211,221,26,254,215,
    172,154,224,234,226,218,69,180,222,35,29,40,244,89,98,150,
    218,28,230,150,11,35,243,61,105,158,215,217,209,233,84,188,
    239,78,244,165,23,95,225,216,223,161,230,187,57,78,216,59,
    245,81,147,79,112,250,28,141,78,205,165,15,87,58,246,14,
    141,19,223,201,147,157,92,180,29,45,90,73,38,190,172,157,
    60,81,27,175,157,120,16,76,244,85,160,90,185,246,221,79,
    104,241,218,181,81,212,127,224,134,193,55,250,238,47,31,230,
    197,55,57,19,54,74,239,92,71,220,18,173,25,8,137,28,
    4,41,82,100,114,55,163,22,89,70,109,191,9,156,101,34,
    115,194,143,174,242,245,13,199,46,41,32,221,197,134,110,253,
    106,203,53,81,53,232,150,217,20,117,209,20,150,104,52,107,
    102,173,90,171,152,136,49,26,89,21,117,179,86,111,8,253,
    191,133,120,171,27,91,141,154,248,15,219,12,32,56,
};

EmbeddedPython embedded_m5_internal_param_DerivedClockDomain(
    "m5/internal/param_DerivedClockDomain.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_DerivedClockDomain.py",
    "m5.internal.param_DerivedClockDomain",
    data_m5_internal_param_DerivedClockDomain,
    2158,
    6806);

} // anonymous namespace
