#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CopyEngine[] = {
    120,156,197,89,109,115,27,73,17,238,217,149,100,75,177,98,
    249,45,206,139,115,86,200,153,136,43,206,226,2,225,128,75,
    165,72,236,84,17,170,226,11,107,32,137,160,88,214,187,35,
    123,229,125,81,237,142,147,211,149,253,5,167,128,111,252,8,
    138,15,252,1,126,193,253,38,190,66,119,207,238,122,45,203,
    87,161,0,157,237,157,234,237,153,237,153,238,126,186,167,103,
    236,66,246,83,197,231,167,109,128,244,159,2,192,195,63,1,
    1,64,40,160,39,64,72,1,222,18,28,86,33,249,1,120,
    85,120,7,208,51,64,26,112,138,132,9,191,49,32,154,227,
    111,106,16,152,204,17,48,106,128,172,64,175,10,47,163,5,
    168,200,26,28,54,32,249,61,8,33,34,1,175,188,25,240,
    102,225,29,74,71,162,206,2,103,193,107,48,81,7,239,10,
    19,13,24,181,64,94,129,30,10,159,129,94,19,69,125,132,
    162,174,178,168,175,72,148,135,61,203,224,53,105,56,174,229,
    53,141,172,208,72,158,227,42,75,153,207,87,214,130,222,66,
    78,47,150,232,165,18,189,92,162,87,74,244,181,18,189,90,
    162,175,151,232,27,37,250,102,137,190,85,162,215,74,244,237,
    18,253,65,137,94,47,209,109,166,231,65,46,192,224,14,12,
    190,5,131,187,208,71,103,180,10,141,63,4,105,194,96,3,
    122,27,32,241,239,67,56,69,127,121,11,165,47,190,205,95,
    44,22,95,220,227,47,58,208,235,128,196,191,123,250,139,26,
    236,118,86,16,3,254,191,240,167,131,24,0,53,135,205,27,
    153,164,126,28,217,126,212,143,125,131,250,107,212,16,98,92,
    106,102,50,232,108,17,116,254,14,140,27,207,200,160,115,2,
    40,88,144,46,129,1,39,76,156,24,48,234,192,177,128,65,
    5,60,19,142,113,154,42,45,96,95,192,169,1,191,53,105,
    192,9,182,21,116,246,7,80,81,26,55,3,118,182,150,52,
    3,39,85,56,174,194,238,171,99,131,24,135,117,72,254,6,
    95,174,177,208,89,22,106,192,49,182,21,56,173,192,73,13,
    94,226,32,100,13,234,164,190,120,117,140,154,34,103,183,83,
    193,213,238,148,212,37,85,60,63,137,156,80,170,5,164,237,
    161,147,56,161,189,21,15,71,79,163,125,63,146,157,70,62,
    44,78,55,135,142,58,176,248,59,147,12,18,14,21,203,139,
    35,169,174,32,209,247,35,207,14,99,239,40,144,106,150,132,
    217,125,63,144,182,205,157,207,194,97,156,168,167,73,18,39,
    22,217,148,153,65,236,20,95,144,69,221,32,78,101,135,102,
    227,105,44,18,175,104,116,127,200,18,105,1,188,86,250,216,
    147,169,155,248,67,133,174,210,18,105,52,73,235,144,147,184,
    73,95,99,211,253,85,138,14,237,30,196,135,242,40,58,244,
    195,238,182,124,35,131,120,24,202,72,117,159,62,189,255,201,
    143,183,187,251,50,124,208,221,59,242,3,175,251,216,122,222,
    29,142,212,65,28,117,145,231,71,74,162,121,130,238,184,97,
    54,113,204,34,77,241,214,223,183,125,86,206,62,144,193,80,
    38,77,226,222,164,233,69,75,204,137,154,48,69,71,52,145,
    170,226,99,138,53,227,138,216,241,73,61,151,84,38,104,153,
    57,152,254,10,236,54,244,250,161,1,201,26,65,101,128,127,
    130,124,139,128,217,165,62,131,251,126,65,118,209,220,129,73,
    0,208,204,99,134,23,226,12,71,62,36,143,71,192,24,169,
    194,160,6,26,59,8,57,13,166,100,68,45,14,39,49,6,
    10,175,64,250,151,243,18,162,22,160,221,49,189,32,235,26,
    78,245,7,134,227,110,135,22,190,195,168,80,7,126,26,191,
    141,216,246,68,115,0,237,162,77,94,140,62,223,27,72,87,
    165,235,200,120,29,31,181,93,39,138,98,213,118,60,175,237,
    40,149,248,123,71,74,166,109,21,183,55,210,78,157,156,189,
    144,3,171,144,55,26,230,64,34,167,35,144,244,139,231,187,
    10,95,150,248,133,237,159,74,133,160,56,136,189,20,249,36,
    98,95,42,139,22,169,174,98,243,56,159,142,209,215,169,229,
    88,73,101,208,87,13,134,157,147,166,54,79,71,124,70,24,
    125,253,198,9,142,164,162,241,169,114,20,206,74,164,158,104,
    106,24,187,78,90,230,74,146,225,236,40,142,188,17,174,209,
    119,55,104,250,235,140,180,57,32,172,173,32,206,102,176,173,
    65,19,113,215,50,92,82,167,146,161,140,17,118,141,148,7,
    246,186,200,146,6,162,237,20,83,75,199,224,220,192,122,113,
    240,181,137,162,143,45,2,179,117,139,154,53,106,110,231,170,
    79,67,255,230,184,254,247,105,78,131,149,118,205,76,189,34,
    128,118,206,5,208,141,179,0,194,52,184,75,129,96,80,184,
    156,5,130,73,6,72,30,101,168,167,16,67,199,99,119,9,
    235,108,22,171,69,234,214,114,152,90,132,189,50,0,247,75,
    0,180,200,35,140,62,235,198,101,38,92,255,102,76,184,175,
    77,248,128,230,156,203,112,211,100,188,52,132,75,78,55,50,
    131,178,49,183,145,24,173,146,49,203,102,92,197,77,237,101,
    212,228,221,137,119,56,174,59,116,214,208,214,213,68,133,16,
    214,55,225,90,182,235,164,20,228,195,36,254,98,212,142,251,
    109,5,249,26,30,110,164,155,27,233,103,152,6,218,143,56,
    177,232,68,160,67,61,145,195,4,67,186,206,47,58,76,109,
    14,89,59,219,54,208,220,180,131,179,151,216,200,156,149,82,
    149,80,50,154,154,133,27,133,133,105,193,159,209,132,13,54,
    175,9,171,248,52,4,175,202,142,57,35,114,13,193,189,248,
    60,33,67,147,174,18,168,234,180,118,245,154,89,29,82,204,
    186,119,14,41,83,80,198,250,8,165,111,231,65,86,131,2,
    23,244,152,180,92,194,253,159,128,43,44,1,127,4,194,0,
    186,58,139,20,142,73,122,200,149,75,52,252,119,192,201,102,
    194,166,102,232,136,51,178,116,132,1,153,126,202,67,245,30,
    247,115,248,115,41,83,157,154,32,104,63,50,179,26,170,188,
    31,85,138,24,101,240,188,215,158,83,57,31,204,228,160,3,
    39,165,97,58,108,205,34,108,207,146,94,81,251,96,46,154,
    6,174,102,245,84,54,173,234,217,25,170,40,217,223,18,75,
    70,9,43,223,165,230,227,2,38,34,231,253,159,23,184,62,
    158,157,75,187,147,173,51,226,207,104,21,21,94,247,124,141,
    35,229,76,68,17,10,213,60,20,238,23,161,32,57,73,191,
    227,234,154,90,131,252,126,106,8,60,106,97,65,66,167,156,
    10,200,42,244,106,20,52,92,60,138,44,166,68,158,192,40,
    241,157,219,1,216,46,59,218,98,133,235,181,87,169,249,98,
    106,9,131,28,251,48,112,194,61,207,121,68,70,72,105,78,
    55,143,50,35,87,160,85,86,128,34,68,92,166,3,191,126,
    47,87,228,205,212,146,197,39,160,15,69,172,0,135,134,23,
    187,156,33,126,121,32,219,161,12,247,112,226,3,127,216,238,
    7,206,62,123,200,204,20,252,60,87,80,177,139,199,119,220,
    148,210,208,78,220,118,227,8,179,249,145,171,226,164,237,73,
    60,98,72,175,253,113,155,183,130,182,159,182,157,61,236,117,
    92,165,17,127,62,112,185,152,115,146,253,148,235,182,195,183,
    68,78,213,195,54,30,33,125,44,85,189,220,64,250,104,83,
    228,117,174,78,117,248,224,198,136,71,7,53,210,73,236,135,
    212,124,135,154,13,152,118,250,239,162,244,61,154,134,140,86,
    195,60,83,23,170,117,46,106,95,208,87,233,197,216,253,199,
    251,196,174,190,32,201,34,184,70,35,229,12,157,97,169,173,
    211,22,208,107,228,204,43,220,206,49,179,153,51,175,114,59,
    207,204,86,206,92,224,118,145,153,75,57,115,153,219,21,102,
    94,203,175,112,86,153,121,29,122,55,232,174,129,56,55,41,
    127,204,252,183,249,131,99,111,170,81,55,248,159,166,13,235,
    254,55,182,126,235,251,144,21,21,151,165,12,81,86,174,169,
    83,198,64,228,21,123,89,51,190,7,88,157,128,86,219,77,
    164,163,164,246,213,205,41,234,202,185,71,79,30,20,30,203,
    21,42,206,45,159,22,74,157,114,61,53,90,46,213,211,236,
    64,241,18,139,31,172,185,143,89,111,219,208,101,247,25,38,
    43,133,250,203,216,68,242,173,61,110,2,93,87,211,114,156,
    225,80,70,222,89,205,204,61,83,115,62,37,183,4,206,138,
    25,44,144,151,241,185,24,126,164,82,73,67,118,93,181,8,
    184,105,58,145,1,251,54,119,95,135,207,113,69,22,183,200,
    121,58,111,23,41,219,250,73,225,142,187,147,208,24,56,234,
    137,236,199,137,124,34,145,75,231,178,247,26,135,69,22,239,
    25,231,217,106,109,210,167,91,7,78,180,21,41,150,253,181,
    3,72,40,229,191,236,125,242,224,87,125,153,108,57,195,203,
    165,229,3,114,105,217,187,186,119,137,90,143,251,104,238,173,
    56,28,6,146,110,240,88,240,251,142,165,57,22,181,25,198,
    186,212,230,36,17,124,57,231,133,142,141,197,4,22,157,44,
    195,141,143,50,227,252,135,159,208,228,84,103,92,58,130,1,
    206,73,200,147,184,42,121,33,16,121,59,205,46,14,60,137,
    245,75,60,194,83,45,159,16,241,61,176,237,233,110,248,63,
    2,125,185,205,119,67,180,225,215,112,203,95,41,126,235,149,
    186,224,154,106,236,42,92,175,143,16,175,79,68,163,212,226,
    108,62,95,32,159,111,108,243,186,134,51,28,157,227,119,156,
    80,95,196,241,5,147,117,135,154,187,121,240,112,122,210,199,
    100,62,135,234,147,63,102,51,46,248,184,190,179,200,95,138,
    66,48,124,176,153,43,182,169,21,123,225,250,104,22,223,149,
    124,105,28,62,80,55,39,15,67,224,96,244,132,234,246,196,
    238,103,145,66,72,97,19,7,124,253,118,113,196,238,40,85,
    50,188,176,8,25,29,133,246,115,25,198,201,232,121,236,73,
    117,103,172,255,113,86,172,234,33,246,27,73,85,173,106,79,
    156,226,252,216,75,244,197,78,125,203,202,7,177,139,253,91,
    65,236,30,74,47,27,51,89,91,30,179,29,135,14,242,39,
    207,178,235,231,179,44,140,245,123,9,125,181,50,198,69,160,
    250,78,224,127,41,57,83,156,51,128,231,37,150,19,237,203,
    92,247,201,19,110,135,78,230,198,75,220,236,199,89,63,65,
    44,239,84,132,188,113,28,16,126,138,55,174,109,199,202,3,
    14,195,4,211,40,122,52,97,17,197,240,108,219,164,248,96,
    219,93,72,18,229,79,167,26,179,250,252,168,111,192,30,209,
    255,66,210,95,99,67,55,192,245,249,186,168,25,244,127,6,
    83,52,68,83,84,196,92,179,110,214,107,245,170,137,113,77,
    156,37,209,48,235,141,57,241,245,191,235,24,245,13,99,29,
    165,253,27,75,155,208,97,
};

EmbeddedPython embedded_m5_internal_param_CopyEngine(
    "m5/internal/param_CopyEngine.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_CopyEngine.py",
    "m5.internal.param_CopyEngine",
    data_m5_internal_param_CopyEngine,
    2407,
    7470);

} // anonymous namespace
