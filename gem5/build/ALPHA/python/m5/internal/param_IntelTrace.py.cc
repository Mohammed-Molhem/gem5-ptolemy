#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntelTrace[] = {
    120,156,197,88,109,115,219,198,17,222,3,64,74,164,68,75,
    178,100,203,182,148,10,157,84,83,54,211,136,141,91,55,109,
    227,209,212,141,61,19,119,82,217,5,211,202,97,218,32,16,
    112,36,65,129,0,7,56,217,97,70,250,82,121,218,126,235,
    143,232,244,67,255,71,255,87,186,187,7,128,208,139,103,50,
    147,150,145,137,243,225,112,183,119,187,251,60,123,123,231,67,
    254,87,195,231,215,54,64,214,23,0,1,254,4,68,0,99,
    1,61,1,66,10,8,214,225,184,6,233,207,32,168,193,107,
    128,158,1,210,128,115,172,152,240,153,1,241,50,143,169,67,
    100,114,139,128,105,19,164,5,189,26,28,198,107,96,201,58,
    28,55,33,253,2,132,16,177,128,23,193,2,4,139,240,26,
    165,99,165,193,2,23,33,104,114,165,1,193,18,87,154,48,
    93,5,185,4,61,20,190,0,189,22,138,122,7,69,221,96,
    81,255,33,81,1,126,217,128,160,69,221,113,45,159,82,79,
    139,122,242,28,55,88,202,74,177,178,85,232,173,21,245,155,
    149,250,122,165,190,193,245,21,144,107,48,186,5,163,219,48,
    218,4,52,72,176,90,206,112,7,164,9,163,187,208,187,11,
    18,127,119,224,28,237,19,172,85,70,220,227,17,55,203,17,
    91,60,98,27,122,219,32,241,183,165,71,212,161,219,190,133,
    54,15,191,198,191,54,218,28,212,50,22,47,101,154,133,73,
    236,134,113,63,9,13,250,94,167,130,60,228,83,177,144,187,
    234,67,114,213,191,129,253,20,24,185,171,206,0,5,11,210,
    37,50,224,140,43,103,6,76,219,112,42,96,100,65,96,194,
    41,78,83,163,5,12,4,156,27,240,39,147,58,156,97,105,
    161,113,191,7,150,210,126,26,177,113,181,164,5,56,171,193,
    105,13,186,47,78,13,106,56,110,64,250,47,248,106,155,133,
    46,178,80,3,78,177,180,224,220,130,179,58,28,98,39,108,
    26,53,72,125,241,226,20,53,197,150,110,219,194,213,30,84,
    212,37,85,130,48,141,189,177,84,107,88,119,39,94,234,141,
    221,167,177,146,209,39,169,231,203,118,179,232,150,100,123,19,
    79,13,29,30,103,146,65,198,19,197,242,146,88,170,37,172,
    244,195,56,112,199,73,112,18,73,181,72,194,220,126,24,73,
    215,229,143,79,199,147,36,85,79,210,52,73,29,178,41,55,
    70,137,87,142,32,139,250,81,146,201,54,205,198,211,56,36,
    94,81,239,254,132,37,210,2,120,173,52,56,144,153,159,134,
    19,133,174,210,18,169,55,73,107,147,147,184,200,62,195,162,
    243,135,12,29,218,25,38,199,242,36,62,14,199,157,199,242,
    165,140,146,201,88,198,170,243,228,201,253,247,126,249,184,51,
    144,227,7,157,163,147,48,10,58,143,62,126,254,209,163,206,
    100,170,134,73,220,193,214,16,109,129,6,138,58,151,77,179,
    135,125,110,210,36,175,194,129,27,178,122,238,80,70,19,153,
    182,168,245,30,45,64,172,138,101,81,23,166,104,139,22,214,
    106,248,152,98,219,88,18,7,33,41,232,147,210,4,46,179,
    128,211,63,129,29,135,126,63,54,32,221,38,176,140,240,39,
    200,187,8,153,46,125,51,248,219,239,201,50,186,117,100,18,
    4,116,227,41,3,12,145,134,61,31,146,207,99,96,148,212,
    96,84,7,141,30,4,157,134,83,58,165,18,187,147,24,3,
    133,91,144,253,227,162,132,120,21,208,242,72,104,108,186,141,
    83,253,133,1,217,109,211,194,15,24,23,106,24,102,201,171,
    152,173,79,117,166,80,23,109,242,124,250,236,104,36,125,149,
    237,96,195,167,201,137,237,123,113,156,40,219,11,2,219,83,
    42,13,143,78,148,204,108,149,216,187,89,187,65,238,94,43,
    160,85,202,155,78,10,40,145,219,17,74,250,37,8,125,133,
    47,235,252,194,246,207,164,66,88,12,147,32,195,118,18,49,
    144,202,161,69,170,27,88,60,42,166,99,252,181,235,5,90,
    50,25,245,85,147,129,231,101,153,203,211,81,59,99,140,70,
    191,244,162,19,169,168,127,166,60,133,179,82,85,79,52,71,
    148,221,33,61,11,53,201,116,110,156,196,193,20,87,25,250,
    187,180,128,59,140,181,101,32,180,221,66,164,45,96,89,135,
    22,34,111,213,240,73,33,43,199,25,99,236,54,169,15,236,
    119,145,7,14,196,219,57,134,151,182,193,241,129,53,99,2,
    218,84,163,193,14,193,217,217,162,98,155,138,183,10,229,231,
    99,129,214,101,11,220,167,89,13,86,219,55,115,5,75,18,
    29,92,32,209,221,25,137,48,24,118,137,12,6,81,102,70,
    6,147,76,144,238,231,200,39,154,161,243,241,115,5,239,108,
    24,103,149,20,174,23,80,117,8,127,85,16,14,42,32,116,
    200,39,140,64,231,238,155,140,184,243,93,25,113,160,141,248,
    128,102,93,206,177,211,98,204,52,133,79,142,55,114,147,178,
    57,31,99,101,186,73,230,172,26,114,19,55,183,195,184,197,
    187,20,239,116,188,223,235,216,161,237,171,43,22,161,172,111,
    194,237,124,247,201,136,234,147,52,249,114,106,39,125,91,65,
    177,134,135,187,217,222,110,246,1,6,3,123,159,195,139,14,
    7,154,240,169,156,164,72,236,6,191,104,178,186,76,92,55,
    223,62,208,224,180,147,179,159,216,204,28,155,50,149,82,72,
    154,163,141,155,165,141,105,201,31,208,148,77,54,176,9,155,
    248,52,5,175,203,77,56,50,114,54,193,95,241,249,13,153,
    154,180,149,64,249,158,211,213,171,102,133,72,53,231,135,23,
    208,50,23,117,156,119,80,254,227,130,106,117,40,177,65,143,
    73,11,38,244,255,13,56,219,18,240,87,32,28,160,187,115,
    190,48,51,233,33,119,174,83,247,207,129,131,206,53,219,155,
    161,121,103,228,97,9,105,153,189,207,93,245,110,247,91,248,
    123,37,98,157,155,32,104,103,50,243,124,170,186,51,89,37,
    83,25,64,223,104,247,177,46,82,154,92,52,244,50,234,166,
    201,107,150,228,157,5,191,50,15,194,136,52,31,108,45,234,
    201,92,90,215,211,25,178,40,236,111,137,117,163,130,151,31,
    83,241,110,9,21,81,180,253,223,151,184,115,57,78,87,118,
    42,87,199,198,143,104,29,22,175,124,165,174,54,241,127,30,
    237,126,248,236,227,103,7,221,138,188,146,29,181,130,29,247,
    75,118,72,142,221,175,57,245,166,210,32,32,156,27,2,207,
    61,152,171,208,145,195,2,89,131,94,157,120,196,153,165,200,
    105,38,138,168,70,209,240,194,198,192,102,58,208,6,44,177,
    160,221,76,197,151,115,140,34,228,233,135,145,55,62,10,188,
    253,67,154,144,102,245,11,226,25,133,10,171,85,21,136,52,
    226,77,90,240,235,79,10,85,94,206,49,130,188,135,242,75,
    21,152,47,65,226,115,216,248,100,40,237,177,28,31,225,212,
    195,112,98,247,35,111,192,94,50,115,21,159,21,42,42,118,
    243,229,205,56,163,216,116,144,216,126,18,99,152,63,241,85,
    146,218,129,196,51,136,12,236,119,109,222,35,236,48,179,189,
    35,252,234,249,74,147,224,34,155,57,215,243,210,65,198,105,
    221,241,43,170,206,217,203,46,158,50,67,204,101,95,20,38,
    210,167,159,50,224,115,250,170,25,133,123,38,158,45,212,84,
    199,182,159,83,241,35,42,118,97,254,251,66,7,229,255,145,
    38,34,195,213,49,252,52,132,162,101,205,122,61,167,81,217,
    85,14,255,238,155,112,88,223,90,228,76,174,23,215,29,11,
    32,23,233,72,219,107,210,61,1,181,44,17,189,23,190,45,
    189,153,24,115,166,196,231,255,83,86,59,247,191,67,13,156,
    159,66,158,8,188,137,209,162,170,94,75,51,122,36,138,92,
    187,170,27,159,227,55,175,1,146,235,167,210,83,82,251,235,
    222,92,181,229,224,160,167,255,162,244,90,161,82,121,230,120,
    191,84,235,156,179,160,233,70,37,19,102,39,138,67,76,89,
    48,91,62,101,205,93,67,39,204,51,100,90,165,1,54,176,
    136,229,43,247,178,17,116,70,76,203,241,38,19,25,7,179,
    108,151,191,204,17,0,20,125,60,152,165,32,152,218,110,224,
    115,149,134,164,84,69,71,118,95,173,36,222,124,29,201,176,
    237,23,46,108,211,161,99,22,104,29,114,160,14,173,101,84,
    117,126,5,69,164,45,129,25,200,72,42,121,197,53,28,253,
    242,99,96,32,113,203,73,166,120,66,225,92,31,223,35,215,
    157,119,132,254,5,202,255,51,228,103,43,138,208,117,140,209,
    13,171,33,120,251,187,116,173,169,215,69,105,173,206,104,167,
    153,195,204,94,41,85,231,219,183,98,3,98,172,211,89,236,
    192,27,235,43,21,190,40,112,190,79,197,219,133,9,25,168,
    250,160,195,231,8,125,122,67,92,243,222,204,91,177,179,71,
    237,148,83,143,31,236,21,234,236,21,234,100,138,181,73,249,
    6,112,252,64,109,93,219,175,27,142,245,61,19,95,96,86,
    191,7,169,135,245,91,151,90,209,228,161,23,133,95,233,139,
    165,162,153,253,119,101,226,107,178,211,226,27,111,129,234,7,
    87,59,20,78,96,44,164,114,16,102,56,67,190,57,22,131,
    115,58,147,143,212,91,215,69,187,234,216,57,35,71,39,159,
    250,84,189,79,247,172,217,62,22,116,179,212,88,105,136,186,
    65,55,152,166,104,138,150,176,196,114,171,97,54,234,141,154,
    137,232,162,150,117,209,52,27,205,101,161,255,237,32,218,154,
    198,78,179,33,254,11,129,136,134,98,
};

EmbeddedPython embedded_m5_internal_param_IntelTrace(
    "m5/internal/param_IntelTrace.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_IntelTrace.py",
    "m5.internal.param_IntelTrace",
    data_m5_internal_param_IntelTrace,
    2106,
    6370);

} // anonymous namespace
