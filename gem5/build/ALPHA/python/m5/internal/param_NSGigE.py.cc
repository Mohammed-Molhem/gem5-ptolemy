#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NSGigE[] = {
    120,156,197,89,109,115,27,73,17,238,217,149,100,75,177,252,
    18,231,61,78,172,112,248,162,4,206,226,2,225,128,75,165,
    200,197,46,46,20,231,11,43,40,231,4,197,178,222,29,201,
    43,239,139,106,119,28,159,174,236,47,56,5,124,160,138,31,
    65,241,129,255,193,255,130,238,158,221,245,90,182,47,87,5,
    209,197,210,84,107,166,167,103,186,251,233,158,158,137,11,217,
    191,42,126,127,222,2,72,231,13,0,15,63,2,2,128,80,
    64,79,128,144,2,188,101,216,171,66,242,35,240,170,240,6,
    160,103,128,52,224,24,9,19,126,103,64,52,199,115,106,16,
    152,220,35,96,220,0,89,129,94,21,182,163,37,168,200,26,
    236,53,32,249,35,8,33,34,1,175,188,25,240,102,225,13,
    74,71,162,206,2,103,193,107,48,81,7,239,18,19,13,24,
    47,130,188,4,61,20,62,3,189,38,138,122,136,162,230,89,
    212,191,73,148,135,35,87,192,107,18,59,238,229,11,226,172,
    16,39,175,49,207,82,22,242,157,45,66,111,41,167,47,151,
    232,229,18,125,165,68,95,45,209,215,74,244,245,18,125,163,
    68,223,44,209,183,74,244,237,18,189,82,162,239,148,232,187,
    37,122,181,68,183,74,244,189,18,253,29,166,23,64,46,193,
    240,61,24,126,23,134,107,208,71,39,45,22,150,120,31,164,
    9,195,251,208,187,15,18,63,239,195,49,250,209,91,42,205,
    104,243,140,203,197,140,7,60,227,33,244,30,130,196,207,3,
    61,163,6,221,246,85,196,134,255,31,252,215,22,72,169,57,
    108,94,203,36,245,227,200,246,163,126,236,27,52,94,163,134,
    144,228,82,51,147,65,234,57,65,234,95,192,120,242,140,12,
    82,71,128,130,5,233,18,24,112,196,196,145,1,227,54,28,
    10,24,86,192,51,225,16,151,169,210,6,6,2,142,13,248,
    189,73,12,71,216,86,16,4,119,161,162,52,158,134,12,2,
    45,105,6,142,170,112,88,133,238,171,67,131,58,246,234,144,
    252,19,190,90,97,161,179,44,212,128,67,108,43,112,92,129,
    163,26,108,35,19,118,13,235,164,190,120,117,136,154,98,79,
    183,93,193,221,110,149,212,37,85,60,63,137,156,80,170,38,
    210,246,200,73,156,208,222,234,254,194,31,108,182,27,57,75,
    156,174,143,28,181,107,241,28,147,140,17,142,20,203,138,35,
    169,46,33,209,247,35,207,14,99,111,63,144,106,150,4,217,
    125,63,144,182,205,131,47,194,81,156,168,205,36,137,19,139,
    236,201,157,65,236,20,51,200,154,110,16,167,178,77,171,241,
    50,22,137,87,196,221,31,177,68,218,0,239,147,38,123,50,
    117,19,127,164,208,77,90,34,113,147,180,54,57,136,155,116,
    27,155,206,111,83,116,102,103,55,222,147,251,209,158,31,118,
    54,228,107,25,196,163,80,70,170,179,185,249,232,195,159,110,
    116,6,50,124,220,217,217,247,3,175,243,236,87,47,63,125,
    214,25,141,213,110,28,117,176,215,143,148,68,227,4,157,178,
    89,214,113,252,50,45,112,224,15,108,159,85,179,119,101,48,
    146,9,89,48,189,69,139,139,69,49,39,106,194,20,109,209,
    68,170,138,95,83,172,24,151,196,150,79,202,185,164,48,129,
    202,204,97,244,15,96,135,161,191,247,12,72,86,8,36,67,
    252,8,242,42,66,165,75,99,6,143,253,154,172,162,123,135,
    38,185,94,119,30,50,176,16,97,200,249,132,124,29,1,163,
    163,10,195,26,104,212,32,216,52,140,146,49,181,200,78,98,
    12,20,94,129,244,239,167,37,68,139,128,86,199,132,131,93,
    215,112,169,63,49,16,187,109,218,248,22,99,66,237,250,105,
    124,16,177,229,137,230,208,233,162,77,94,142,63,223,25,74,
    87,165,171,216,241,69,188,223,114,157,40,138,85,203,241,188,
    150,163,84,226,239,236,43,153,182,84,220,90,75,219,117,114,
    245,82,14,171,66,222,120,148,195,136,92,142,48,210,63,60,
    223,85,248,99,153,127,176,253,83,169,16,18,187,177,151,98,
    63,137,24,72,101,209,38,213,60,54,207,242,229,24,123,237,
    90,142,148,84,6,125,213,96,208,57,105,106,243,114,212,207,
    248,162,217,175,157,96,95,42,226,79,149,163,112,85,34,245,
    66,83,66,216,13,210,49,87,145,204,102,71,113,228,141,113,
    135,190,187,70,139,223,96,156,205,1,33,237,42,162,108,6,
    219,26,52,17,117,139,134,75,202,84,50,140,49,190,174,145,
    234,192,62,23,89,178,64,172,29,99,74,105,27,156,19,88,
    43,14,188,22,81,52,217,34,40,91,183,169,89,161,230,78,
    174,248,187,215,190,57,169,253,35,90,209,96,149,93,51,83,
    174,8,158,173,83,193,115,243,36,120,48,249,117,41,8,12,
    10,149,147,32,48,73,253,228,105,134,120,10,47,116,58,14,
    151,112,206,70,177,22,73,217,90,14,81,139,112,87,6,223,
    160,4,62,139,252,193,200,179,110,94,100,192,213,111,195,128,
    3,109,192,199,180,226,92,134,153,38,99,165,33,92,114,184,
    145,153,147,77,185,129,196,248,58,153,178,108,196,235,120,144,
    109,71,77,62,145,248,84,227,26,68,231,11,109,91,77,84,
    8,93,125,19,174,101,39,77,74,225,61,74,226,47,199,173,
    184,223,82,144,239,225,201,90,186,190,150,126,140,9,160,245,
    148,83,138,78,1,58,200,19,57,74,48,152,235,252,67,7,
    168,205,193,106,103,199,5,26,155,78,109,246,17,155,152,243,
    81,170,18,74,67,83,178,111,163,176,47,109,247,99,90,174,
    193,198,53,225,58,126,27,130,247,100,199,156,9,185,106,224,
    81,252,126,66,102,38,77,37,80,253,105,117,245,142,89,25,
    82,203,186,127,10,37,239,92,21,235,33,202,222,200,195,171,
    6,5,38,232,107,210,102,9,241,127,1,174,168,4,252,25,
    200,255,232,230,44,70,56,26,233,75,110,92,38,246,63,0,
    39,153,115,142,50,67,199,154,145,165,33,12,197,244,35,102,
    213,39,219,47,225,175,165,12,117,108,130,160,83,200,204,106,
    166,242,41,84,41,162,147,129,243,141,78,154,202,233,48,38,
    247,236,58,41,177,233,128,53,139,128,61,73,118,69,189,131,
    89,232,221,99,106,86,47,100,211,158,94,156,32,138,82,252,
    109,177,108,148,112,242,125,106,62,40,32,34,242,190,119,186,
    189,213,201,156,92,58,145,108,157,7,63,165,61,84,120,215,
    11,53,62,51,245,244,34,0,170,121,0,60,42,2,64,114,
    90,126,195,85,52,181,6,249,251,216,16,120,213,194,242,131,
    110,57,21,144,85,232,213,40,84,184,80,20,89,36,137,60,
    105,81,178,59,149,243,217,34,91,218,86,133,203,181,55,169,
    249,114,74,73,130,28,250,36,112,194,29,207,121,42,105,49,
    90,209,205,99,203,200,183,191,88,222,62,197,133,184,72,3,
    254,249,131,92,141,215,83,74,16,31,106,95,233,237,115,56,
    120,177,203,89,225,55,187,178,21,202,112,7,151,221,245,71,
    173,126,224,12,216,59,102,166,222,231,185,122,138,221,59,121,
    190,166,148,122,182,226,150,27,71,152,189,247,93,21,39,45,
    79,226,85,66,122,173,15,90,156,250,91,126,218,114,118,112,
    212,113,149,198,249,233,96,229,178,205,73,6,41,163,109,239,
    128,200,41,122,215,198,75,162,143,37,105,63,55,143,190,192,
    20,121,156,171,80,29,52,120,12,226,21,65,141,117,218,250,
    49,53,15,168,89,131,233,166,251,14,240,27,8,164,100,176,
    26,102,150,186,224,210,93,115,188,36,238,244,108,188,254,237,
    155,196,171,126,20,201,162,182,70,156,114,134,238,167,212,214,
    41,221,247,26,121,231,37,110,231,184,179,153,119,206,115,187,
    192,157,139,249,99,204,18,119,94,134,222,50,189,14,80,207,
    21,202,4,51,255,107,38,224,56,154,98,4,5,255,215,4,
    96,61,250,150,118,111,253,16,178,146,224,162,224,23,101,213,
    154,58,248,135,34,175,180,203,122,241,205,125,121,2,123,182,
    155,72,71,73,237,163,91,83,211,146,243,135,94,58,42,60,
    149,171,82,220,52,62,42,212,57,230,58,104,124,165,84,3,
    179,227,196,54,22,45,88,39,31,178,198,182,161,75,229,19,
    36,86,10,197,201,235,145,60,176,203,202,235,58,152,182,226,
    140,70,50,242,78,106,92,30,153,146,195,41,57,37,112,82,
    128,96,65,123,5,191,103,195,173,162,115,73,174,27,187,172,
    90,4,216,244,156,199,16,61,200,221,198,111,122,39,57,216,
    34,167,233,172,91,36,92,235,103,133,27,90,147,248,243,66,
    7,43,27,219,9,130,216,69,52,208,5,234,237,76,88,18,
    169,5,178,198,233,126,117,247,188,137,158,163,28,187,159,72,
    45,251,45,44,36,185,153,73,46,122,47,152,36,83,247,109,
    114,11,150,83,114,243,94,118,61,135,164,39,3,137,122,149,
    5,48,98,179,171,47,206,80,73,60,198,155,25,223,115,240,
    119,96,219,211,60,198,126,130,178,247,104,17,122,138,163,99,
    172,134,7,217,85,254,171,87,234,130,43,132,137,199,91,189,
    179,239,65,94,211,143,83,139,51,218,66,129,5,126,103,204,
    207,105,142,117,186,133,110,57,161,126,64,226,167,17,235,30,
    53,239,229,112,226,96,213,215,60,190,73,233,123,43,198,53,
    151,47,92,173,88,235,212,79,238,8,31,175,231,10,173,107,
    133,54,213,174,76,208,36,159,56,232,15,131,89,212,157,175,
    229,244,93,169,110,159,203,241,210,245,179,241,91,231,143,7,
    142,234,199,73,120,193,2,47,34,149,60,143,177,137,3,126,
    125,58,203,209,29,167,74,134,103,86,151,209,126,104,127,38,
    195,56,25,127,22,123,82,221,155,24,127,150,213,111,154,197,
    126,45,169,208,227,144,58,187,196,105,222,11,20,197,65,253,
    196,200,119,146,179,227,207,49,248,246,164,151,241,156,175,45,
    243,108,196,161,131,253,231,175,210,245,243,85,150,38,198,189,
    132,102,93,157,232,69,156,251,78,224,127,37,213,202,164,1,
    60,47,177,156,104,32,115,221,207,95,112,35,116,190,222,191,
    126,156,141,19,78,243,65,126,139,62,7,76,84,211,149,59,
    184,240,43,157,182,28,199,137,28,248,232,211,132,133,148,185,
    179,227,136,162,76,221,156,76,36,229,153,83,140,121,125,159,
    210,111,64,79,233,127,1,210,30,54,244,254,89,95,168,139,
    154,65,111,236,166,104,136,166,168,136,185,102,221,172,215,234,
    85,19,243,2,245,44,139,134,89,111,204,137,183,255,173,98,
    246,104,24,171,205,186,248,47,28,51,103,196,
};

EmbeddedPython embedded_m5_internal_param_NSGigE(
    "m5/internal/param_NSGigE.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_NSGigE.py",
    "m5.internal.param_NSGigE",
    data_m5_internal_param_NSGigE,
    2348,
    7232);

} // anonymous namespace
