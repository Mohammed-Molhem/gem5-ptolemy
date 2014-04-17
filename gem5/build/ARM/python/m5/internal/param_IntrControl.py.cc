#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntrControl[] = {
    120,156,197,88,109,115,220,72,17,238,145,180,107,239,218,27,
    219,113,156,87,39,86,46,184,88,174,56,47,23,8,7,92,
    42,16,226,84,17,138,248,14,45,84,114,203,139,144,165,241,
    90,107,189,108,73,99,231,246,202,254,130,83,192,55,126,4,
    197,7,254,194,125,230,127,65,119,143,36,203,107,135,186,42,
    96,207,94,77,141,230,165,103,186,251,121,122,122,228,67,241,
    215,192,231,39,54,64,254,165,0,8,240,39,32,2,136,5,
    12,4,8,41,32,88,133,131,6,100,223,131,160,1,111,1,
    6,6,72,3,78,177,98,194,111,12,72,22,121,78,19,34,
    147,91,4,76,218,32,45,24,52,224,85,178,2,150,108,194,
    65,27,178,63,128,16,34,17,240,58,152,131,96,30,222,162,
    116,172,180,88,224,60,4,109,174,180,32,88,224,74,27,38,
    203,32,23,96,128,194,231,96,208,65,81,239,163,168,43,44,
    234,159,36,42,192,158,107,16,116,104,56,238,229,51,26,105,
    209,72,94,227,10,75,89,42,119,182,12,131,149,178,126,181,
    86,95,173,213,175,213,234,107,181,250,245,90,253,70,173,126,
    179,86,191,85,171,223,174,213,239,112,125,9,228,10,140,214,
    97,116,23,70,247,96,15,13,186,92,237,122,3,164,9,35,
    27,6,54,72,252,109,192,41,218,60,88,169,205,184,207,51,
    174,86,51,222,227,25,15,96,240,0,36,254,222,211,51,154,
    208,239,174,161,31,195,127,225,95,23,253,8,106,17,139,35,
    153,229,97,154,184,97,178,151,134,6,245,55,169,32,175,251,
    84,204,21,238,127,70,238,255,7,176,239,3,163,112,255,9,
    160,96,65,186,68,6,156,112,229,196,128,73,23,142,5,140,
    44,8,76,56,198,101,26,180,129,161,128,83,3,126,107,210,
    128,19,44,45,116,216,61,176,148,246,253,136,29,166,37,205,
    193,73,3,142,27,208,127,125,108,80,195,65,11,178,191,195,
    23,235,44,116,158,133,26,112,140,165,5,167,22,156,52,225,
    21,14,194,166,81,139,212,23,175,143,81,83,108,233,119,45,
    220,237,78,77,93,82,37,8,179,196,139,165,186,138,117,119,
    236,101,94,236,190,72,84,246,44,197,34,141,186,237,114,92,
    154,111,141,61,181,239,240,68,147,44,18,143,21,11,76,19,
    169,22,176,178,23,38,129,27,167,193,97,36,213,60,73,115,
    247,194,72,186,46,119,190,136,199,105,166,158,103,89,154,57,
    100,84,110,140,82,175,154,65,38,245,163,52,151,93,90,141,
    151,113,72,188,162,209,123,99,150,72,27,224,205,210,228,64,
    230,126,22,142,21,250,74,75,164,209,36,173,75,94,226,34,
    31,96,209,251,117,142,30,237,237,167,7,242,48,57,8,227,
    222,182,60,146,81,58,142,101,162,122,207,159,63,252,240,135,
    219,189,161,140,31,245,118,15,195,40,232,61,117,94,246,198,
    19,181,159,38,61,108,11,19,37,209,62,81,239,130,101,182,
    112,16,217,44,127,19,14,221,144,181,115,247,101,52,150,89,
    135,90,111,211,250,98,89,44,138,166,48,69,87,116,176,214,
    192,199,20,235,198,130,216,9,73,63,159,116,38,112,153,37,
    156,254,6,236,56,244,251,129,1,217,58,129,101,132,63,65,
    222,69,200,244,169,207,224,190,95,146,97,116,235,200,36,8,
    232,198,99,6,24,34,13,71,62,38,159,39,192,40,105,192,
    168,9,26,61,8,58,13,167,108,66,37,14,39,49,6,10,
    183,32,255,235,121,9,201,50,160,225,49,72,96,211,117,92,
    234,143,12,200,126,151,54,190,195,176,80,251,97,158,190,73,
    216,248,84,103,10,245,209,38,159,78,62,217,29,73,95,229,
    27,216,240,89,122,104,251,94,146,164,202,246,130,192,246,148,
    202,194,221,67,37,115,91,165,246,102,222,109,145,183,87,74,
    100,85,242,38,227,18,73,228,117,68,146,126,9,66,95,225,
    203,42,191,176,253,115,169,16,21,251,105,144,99,59,137,24,
    74,229,208,38,213,21,44,158,150,203,49,252,186,205,18,44,
    185,140,246,84,155,113,231,229,185,203,203,81,59,67,140,102,
    31,121,209,161,84,52,62,87,158,194,85,169,170,23,154,29,
    200,110,146,154,165,150,100,57,55,73,147,96,130,155,12,253,
    77,90,255,38,67,109,17,8,108,107,8,180,57,44,155,208,
    65,224,45,27,62,233,99,21,48,99,136,93,39,237,129,221,
    46,138,184,129,112,59,197,232,210,53,56,60,176,98,76,63,
    155,106,52,217,33,52,59,119,168,88,167,226,110,169,251,76,
    12,208,153,54,192,67,90,212,96,173,125,179,208,175,162,208,
    206,57,10,221,58,163,16,134,194,62,81,193,32,194,156,81,
    193,36,11,100,79,10,220,19,201,208,245,216,93,67,59,219,
    197,89,38,125,155,37,80,29,66,95,29,130,195,26,4,29,
    114,9,227,207,185,245,46,27,110,124,77,54,28,106,27,62,
    162,69,23,11,228,116,24,49,109,225,147,219,141,194,162,108,
    205,109,172,76,110,144,53,235,118,188,129,39,219,171,164,195,
    71,20,31,115,156,64,232,192,161,205,171,43,22,97,108,207,
    132,235,197,209,147,19,207,199,89,250,249,196,78,247,108,5,
    229,30,30,111,230,91,155,249,199,24,9,236,39,28,91,116,
    44,208,108,207,228,56,67,86,183,248,69,51,213,101,214,186,
    197,209,129,246,166,99,156,221,196,86,230,192,148,171,140,226,
    209,236,76,220,174,76,76,59,254,152,86,108,179,125,77,184,
    129,79,91,240,182,220,148,163,34,103,18,220,139,207,79,201,
    210,164,172,4,202,31,157,190,222,52,235,67,154,57,223,60,
    135,149,89,104,227,188,143,226,183,75,158,53,161,66,6,61,
    38,237,151,160,255,103,224,68,75,192,159,128,80,128,206,46,
    200,194,180,164,135,156,185,74,195,127,15,28,112,46,57,217,
    12,77,58,163,8,73,200,201,252,35,30,170,15,186,159,195,
    95,106,209,234,212,4,65,135,146,89,164,82,245,67,201,170,
    104,202,240,249,74,7,143,117,158,207,228,161,125,47,167,97,
    154,185,102,197,220,179,192,87,101,64,24,142,102,130,172,121,
    189,150,75,219,122,113,134,43,138,248,119,196,170,81,67,203,
    183,169,248,160,2,138,40,219,254,223,59,220,152,14,209,181,
    51,202,213,97,241,103,180,13,139,55,190,212,212,41,225,153,
    140,138,14,141,146,14,15,43,58,72,14,213,111,57,207,166,
    210,32,215,159,26,2,47,78,152,152,208,157,197,2,217,128,
    65,147,136,195,89,164,40,120,37,202,40,70,209,239,220,57,
    192,150,217,209,54,171,188,175,29,75,197,231,179,139,26,228,
    219,199,145,23,239,6,222,19,226,72,78,139,250,37,211,140,
    82,131,229,186,6,196,18,241,46,37,248,245,59,165,38,71,
    179,139,24,31,162,248,74,3,230,71,144,250,28,38,126,181,
    47,237,88,198,187,184,242,126,56,182,247,34,111,200,62,50,
    11,13,63,41,53,84,236,228,233,147,55,167,88,180,147,218,
    126,154,96,80,63,244,85,154,217,129,196,219,134,12,236,15,
    108,62,17,236,48,183,189,93,236,245,124,165,81,127,158,189,
    156,214,121,217,48,231,12,238,224,13,85,103,235,99,23,239,
    147,33,102,173,110,105,33,125,205,169,194,59,39,170,154,66,
    120,64,226,45,66,77,116,40,251,62,21,223,162,98,19,102,
    126,10,244,80,252,239,104,29,50,91,19,163,77,75,168,149,
    243,212,253,148,230,229,23,9,188,251,85,8,172,191,121,20,
    52,110,210,72,57,71,87,90,42,91,116,20,12,218,229,23,
    148,5,110,92,164,207,21,120,115,167,150,43,68,248,185,255,
    150,240,204,149,217,178,68,254,79,121,238,60,252,250,20,112,
    190,11,69,42,240,46,142,139,186,118,29,205,241,145,40,83,
    237,186,106,124,135,191,121,25,184,92,63,147,158,146,218,93,
    183,103,169,45,135,11,189,250,176,114,90,169,82,117,229,248,
    168,82,235,148,243,160,201,181,90,38,204,62,20,175,48,105,
    193,108,249,152,53,119,13,157,48,159,225,210,170,12,64,1,
    33,145,111,220,11,70,208,41,49,237,199,27,143,101,18,156,
    165,187,220,51,59,0,80,64,162,75,98,153,133,96,110,123,
    13,159,139,36,36,165,106,58,178,247,26,21,237,102,234,71,
    70,109,82,122,176,187,4,245,208,235,144,255,116,176,173,226,
    172,243,163,202,35,183,46,133,100,62,201,233,42,245,31,122,
    49,19,210,89,226,36,103,155,49,182,3,25,73,37,47,122,
    87,209,242,197,77,50,144,120,144,165,19,188,229,240,133,1,
    223,35,215,157,113,224,255,129,246,29,228,116,44,81,224,111,
    98,232,95,19,45,171,37,248,84,157,250,48,170,55,246,13,
    178,217,143,169,224,216,176,84,153,144,191,221,149,167,26,179,
    133,110,115,59,94,172,191,200,240,135,6,231,62,21,15,74,
    47,48,210,245,93,137,239,34,250,254,135,204,224,243,158,143,
    119,103,171,180,106,252,104,171,84,103,75,171,211,159,228,74,
    198,252,237,48,126,164,238,76,141,145,201,97,236,190,148,113,
    154,77,94,166,129,84,247,167,250,159,22,169,132,30,226,30,
    73,202,57,148,125,233,74,231,199,94,88,74,15,194,78,253,
    53,140,51,229,139,253,207,162,212,63,144,65,49,230,238,187,
    199,108,167,177,135,237,151,175,210,15,203,85,86,166,250,131,
    140,102,173,77,181,34,122,66,47,10,191,144,106,125,218,0,
    65,144,57,94,50,148,165,238,228,193,178,87,145,99,167,87,
    36,247,84,111,156,55,76,199,114,6,119,38,135,33,122,38,
    99,25,213,248,34,194,17,232,212,189,203,9,85,155,59,91,
    42,232,12,93,127,105,120,66,215,150,252,23,88,208,183,182,
    214,82,75,52,13,250,164,107,138,182,232,8,75,44,118,90,
    102,171,217,106,152,72,23,106,89,21,109,179,213,94,20,151,
    253,111,32,149,218,198,198,66,75,252,27,219,21,246,44,
};

EmbeddedPython embedded_m5_internal_param_IntrControl(
    "m5/internal/param_IntrControl.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_IntrControl.py",
    "m5.internal.param_IntrControl",
    data_m5_internal_param_IntrControl,
    2207,
    6741);

} // anonymous namespace
