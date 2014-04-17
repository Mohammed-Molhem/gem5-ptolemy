#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ArmNativeTrace[] = {
    120,156,197,88,109,111,219,200,17,158,37,41,217,146,173,216,
    142,237,188,217,137,121,56,24,213,29,122,86,47,109,122,109,
    47,8,154,187,4,104,138,86,185,82,87,36,81,95,120,52,
    185,178,40,83,164,64,174,157,232,96,247,67,29,180,253,214,
    31,81,244,67,255,71,255,87,111,102,150,164,233,183,195,21,
    45,20,91,92,44,151,251,54,51,207,51,51,187,62,228,127,
    53,124,126,110,3,100,127,18,0,1,254,4,68,0,99,1,
    125,1,66,10,8,86,97,191,6,233,143,32,168,193,91,128,
    190,1,210,128,19,172,152,240,59,3,226,69,30,83,135,200,
    228,22,1,211,38,72,11,250,53,120,17,175,128,37,235,176,
    223,132,244,43,16,66,196,2,94,6,115,16,204,195,91,156,
    29,43,13,158,112,30,130,38,87,26,16,44,112,165,9,211,
    101,144,11,208,199,201,231,160,223,194,169,62,196,169,174,241,
    84,255,166,169,2,252,178,6,65,139,186,227,94,94,81,79,
    139,122,242,26,215,120,150,165,98,103,203,208,95,41,234,215,
    43,245,213,74,125,173,82,95,175,212,111,112,125,9,228,10,
    140,110,194,232,22,140,110,195,0,149,178,92,174,124,7,164,
    9,163,13,232,111,128,196,223,29,56,65,189,5,43,149,17,
    155,60,226,122,57,226,46,143,184,7,253,123,32,241,119,87,
    143,168,67,175,189,142,182,8,255,131,127,109,180,5,168,69,
    44,14,101,154,133,73,236,134,241,32,9,13,250,94,167,130,
    44,231,83,49,151,155,240,115,50,225,191,128,237,23,24,185,
    9,143,1,39,22,36,75,100,192,49,87,142,13,152,182,225,
    72,192,200,130,192,132,35,92,166,70,27,216,19,112,98,192,
    239,77,234,112,140,165,133,74,191,7,150,210,246,27,177,210,
    245,76,115,112,92,131,163,26,244,94,30,25,212,176,223,128,
    244,159,240,245,38,79,58,207,147,26,112,132,165,5,39,22,
    28,215,225,5,118,194,166,81,131,196,23,47,143,80,82,108,
    233,181,45,220,109,183,34,46,137,18,132,105,236,141,165,34,
    77,184,19,47,245,198,238,227,116,220,245,84,120,40,191,76,
    61,95,182,155,69,215,36,219,153,120,106,232,240,88,147,148,
    50,158,40,158,51,137,165,90,192,202,32,140,3,119,156,4,
    7,145,84,243,52,161,59,8,35,233,186,252,241,217,120,146,
    164,234,105,154,38,169,67,122,229,198,40,241,202,17,164,85,
    63,74,50,217,166,213,120,25,135,166,87,212,123,48,225,25,
    105,3,188,95,26,28,200,204,79,195,137,66,115,233,25,169,
    55,205,214,38,67,113,145,253,1,139,206,111,51,52,106,103,
    152,236,203,131,120,63,28,119,158,200,67,25,37,147,177,140,
    85,231,233,211,251,31,255,244,73,103,79,142,31,116,118,15,
    194,40,232,60,118,126,221,153,76,213,48,137,59,216,22,198,
    74,162,138,162,206,101,202,217,193,126,215,105,153,215,225,158,
    27,178,128,238,80,70,19,153,182,168,245,14,109,65,44,139,
    69,81,23,166,104,139,22,214,106,248,152,98,211,88,16,221,
    144,68,244,73,108,130,152,89,128,234,31,192,230,67,235,239,
    27,144,110,18,100,70,248,19,100,99,4,78,143,190,25,252,
    237,55,164,27,221,58,50,9,8,186,241,136,97,134,120,195,
    158,15,201,242,49,48,86,106,48,170,131,198,16,66,79,131,
    42,157,82,137,221,105,26,3,39,183,32,251,251,217,25,226,
    101,64,221,35,221,177,233,6,46,245,103,134,101,175,77,27,
    239,50,50,212,48,204,146,215,49,235,159,234,76,164,30,234,
    228,139,233,243,221,145,244,85,182,133,13,175,146,3,219,247,
    226,56,81,182,23,4,182,167,84,26,238,30,40,153,217,42,
    177,183,179,118,131,12,190,82,128,171,156,111,58,41,192,68,
    134,71,48,233,151,32,244,21,190,172,242,11,235,63,147,10,
    129,49,76,130,12,219,105,138,61,169,28,218,164,186,134,197,
    227,98,57,70,96,187,94,224,37,147,209,64,53,25,122,94,
    150,185,188,28,181,51,202,104,244,161,23,29,72,69,253,51,
    133,150,247,185,170,23,154,41,206,110,145,164,133,160,164,60,
    55,78,226,96,138,251,12,253,109,218,194,45,70,219,34,16,
    222,214,17,107,115,88,214,161,133,216,91,54,124,18,201,202,
    145,198,40,187,65,10,0,182,188,200,29,8,34,238,4,221,
    76,219,96,63,193,178,49,9,109,170,209,96,135,0,237,108,
    80,177,73,197,221,66,252,89,233,160,117,94,7,247,105,93,
    131,5,247,205,92,196,146,72,221,51,68,186,125,74,36,116,
    139,61,34,132,65,180,57,37,132,73,74,72,31,229,232,39,
    170,33,0,240,115,5,243,172,26,103,153,68,174,23,112,117,
    8,131,85,32,238,85,128,232,144,85,24,133,206,237,171,212,
    184,245,238,212,184,167,213,248,128,214,93,204,241,211,98,220,
    52,133,79,198,55,114,165,178,66,159,96,101,122,147,20,90,
    85,229,77,12,116,47,226,22,71,44,142,122,156,19,104,15,
    162,53,172,43,22,33,109,96,194,141,60,18,101,68,248,73,
    154,188,153,218,201,192,86,80,236,225,225,118,182,179,157,125,
    138,46,193,126,196,78,70,59,5,77,251,84,78,82,164,119,
    131,95,52,101,93,166,175,155,135,17,84,57,197,50,182,20,
    43,154,61,84,166,82,114,76,51,213,114,179,212,50,109,250,
    83,90,180,201,42,54,225,38,62,77,193,59,115,19,246,144,
    156,91,240,87,124,62,35,101,147,188,18,40,43,116,122,122,
    223,44,18,9,231,124,239,12,98,102,36,144,243,33,174,240,
    164,32,92,29,74,124,208,99,210,150,137,3,127,5,206,190,
    4,252,5,8,11,104,242,156,53,204,79,122,200,164,171,212,
    253,143,192,206,231,146,64,103,104,246,25,185,123,66,114,102,
    159,112,87,29,247,126,9,127,171,120,174,19,19,4,197,40,
    51,207,175,170,49,202,42,249,202,32,250,78,113,200,58,75,
    108,50,210,208,203,168,155,166,176,89,82,248,212,9,150,57,
    17,250,165,89,225,107,94,47,231,210,206,158,157,162,139,2,
    192,134,88,53,42,152,249,62,21,31,149,112,17,69,219,12,
    54,185,117,222,99,87,162,150,171,189,228,47,104,39,22,239,
    125,169,174,200,45,242,104,247,243,231,191,122,222,237,157,155,
    179,228,73,173,224,201,253,146,39,146,61,249,91,78,201,169,
    52,8,16,39,134,192,115,18,102,47,116,68,177,64,214,160,
    95,39,70,113,182,41,114,194,137,194,195,145,103,60,19,38,
    88,89,93,173,198,18,19,218,220,84,188,153,169,71,33,139,
    63,140,188,241,110,224,61,122,69,75,210,186,126,65,65,163,
    16,98,185,42,4,209,71,92,37,7,191,254,160,16,230,112,
    166,222,228,99,162,98,33,4,115,39,72,124,118,33,95,14,
    165,61,150,227,93,92,124,24,78,236,65,228,237,177,165,204,
    92,200,231,133,144,138,77,125,62,60,103,228,167,186,137,237,
    39,49,186,253,3,95,37,169,29,72,60,155,200,192,254,200,
    230,152,97,135,153,237,237,226,87,207,87,154,14,103,153,205,
    25,160,151,238,101,156,236,237,191,166,234,204,45,237,226,25,
    52,196,28,183,95,40,73,159,139,202,0,192,105,173,230,22,
    70,81,60,115,168,169,246,116,63,166,226,3,42,182,225,93,
    196,137,14,174,240,146,150,34,229,213,209,25,53,132,90,195,
    234,217,158,95,208,232,236,34,159,119,191,11,159,245,141,71,
    206,234,58,245,148,115,116,24,166,178,65,241,162,223,44,238,
    79,22,184,113,145,46,43,240,204,79,45,215,136,255,115,255,
    43,255,153,55,51,103,204,87,255,87,218,59,247,223,169,12,
    206,15,33,207,26,174,162,188,168,10,216,210,148,31,137,34,
    61,175,74,199,23,0,27,87,160,204,245,83,233,41,169,237,
    118,103,198,50,179,15,209,27,216,45,173,87,8,86,30,86,
    62,41,133,59,225,196,105,186,86,73,160,217,152,226,5,102,
    57,152,100,31,177,252,174,161,243,236,83,140,90,165,26,232,
    204,17,203,215,238,101,170,208,201,52,109,201,155,76,100,28,
    156,38,202,252,101,166,96,32,71,21,192,105,230,130,89,241,
    26,62,23,105,105,233,142,133,164,108,198,90,73,196,89,27,
    148,65,28,22,166,108,47,65,213,43,59,100,72,237,135,75,
    23,236,252,172,52,205,7,87,33,52,83,201,196,77,98,119,
    226,187,146,110,40,232,104,246,95,244,198,236,74,209,162,231,
    63,176,142,153,23,129,140,164,146,151,98,130,71,230,135,215,
    64,98,88,76,166,120,170,226,211,9,190,71,174,59,251,24,
    242,19,90,156,150,162,32,71,49,164,142,81,100,93,52,172,
    134,224,48,125,238,106,86,239,141,146,77,157,133,79,51,135,
    29,204,82,169,120,190,61,44,194,36,147,141,206,144,93,111,
    172,47,132,248,146,195,121,143,138,247,11,219,49,75,244,241,
    140,207,62,250,212,137,196,226,28,130,83,6,103,135,218,233,
    8,48,126,176,83,8,181,163,133,170,72,196,87,152,227,7,
    108,135,139,29,159,190,209,189,82,181,121,233,247,103,152,199,
    228,29,46,159,160,23,142,245,61,155,90,57,247,61,72,61,
    172,175,159,107,69,195,133,94,20,126,173,47,214,138,102,30,
    124,113,235,228,76,206,36,228,149,143,28,234,249,192,243,45,
    41,59,227,42,149,123,97,134,235,240,34,23,157,18,153,91,
    189,119,37,218,43,19,204,28,138,58,235,214,151,11,143,232,
    218,57,251,12,11,186,100,107,44,53,68,221,160,235,92,83,
    52,69,75,88,98,177,213,48,27,245,70,205,68,184,82,203,
    170,104,154,141,230,162,56,253,223,66,0,55,141,173,133,134,
    248,6,84,240,238,212,
};

EmbeddedPython embedded_m5_internal_param_ArmNativeTrace(
    "m5/internal/param_ArmNativeTrace.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_ArmNativeTrace.py",
    "m5.internal.param_ArmNativeTrace",
    data_m5_internal_param_ArmNativeTrace,
    2166,
    6673);

} // anonymous namespace
