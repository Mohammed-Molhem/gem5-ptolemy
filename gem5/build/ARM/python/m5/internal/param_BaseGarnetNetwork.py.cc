#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseGarnetNetwork[] = {
    120,156,197,89,235,115,219,198,17,223,3,72,74,164,68,61,
    172,151,31,178,133,52,81,76,187,141,216,184,117,211,78,60,
    158,38,150,211,186,211,40,41,212,142,29,182,83,4,2,142,
    18,72,16,224,0,39,201,204,72,95,42,79,219,111,253,218,
    239,157,124,232,255,209,255,171,221,221,3,32,232,229,168,211,
    142,100,145,55,203,123,236,222,238,254,118,111,239,236,65,246,
    175,138,223,159,91,0,233,148,1,224,227,71,64,8,48,16,
    208,17,32,164,0,127,14,250,85,72,126,12,126,21,222,0,
    116,12,144,6,28,33,97,194,239,13,136,38,121,77,13,66,
    147,123,4,140,26,32,43,208,169,194,203,104,22,42,178,6,
    253,6,36,95,131,16,34,18,240,202,31,3,127,28,222,32,
    119,36,234,204,112,28,252,6,19,117,240,39,152,104,192,104,
    6,228,4,116,144,249,24,116,154,200,234,33,178,154,98,86,
    255,34,86,62,142,204,131,223,164,233,184,151,175,104,102,133,
    102,178,140,41,230,50,157,239,108,6,58,179,57,125,163,68,
    207,149,232,249,18,189,80,162,23,75,244,82,137,190,89,162,
    111,149,232,219,37,250,78,137,94,46,209,119,75,244,189,18,
    189,82,162,173,18,253,78,137,254,30,211,211,32,103,161,247,
    46,244,222,131,222,42,116,209,73,51,133,37,222,7,105,66,
    239,62,116,238,131,196,207,251,112,132,126,244,103,75,43,90,
    188,226,70,177,226,1,175,120,8,157,135,32,241,243,64,175,
    168,193,102,107,1,177,17,252,27,255,181,4,82,106,18,155,
    61,153,164,65,28,57,65,212,141,3,131,198,107,212,16,146,
    60,106,198,50,72,61,35,72,253,19,24,79,190,145,65,234,
    16,144,177,32,93,66,3,14,153,56,52,96,212,130,3,1,
    189,10,248,38,28,160,152,42,109,96,91,192,145,1,127,48,
    105,194,33,182,21,4,193,61,168,40,141,167,30,131,64,115,
    26,131,195,42,28,84,97,243,213,129,65,29,253,58,36,223,
    194,55,203,204,116,156,153,26,112,128,109,5,142,42,112,88,
    131,151,56,9,187,122,117,82,95,188,58,64,77,177,103,179,
    85,193,221,110,148,212,37,85,252,32,137,220,129,84,55,145,
    118,134,110,226,14,156,79,221,84,254,194,77,34,169,54,164,
    218,143,147,126,171,145,207,142,211,181,161,171,118,108,94,110,
    146,93,6,67,197,108,99,156,62,129,68,55,136,124,103,16,
    251,187,161,84,227,196,211,233,6,161,116,28,30,124,49,24,
    198,137,122,158,36,113,98,147,105,185,51,140,221,98,5,25,
    214,11,227,84,182,72,26,139,177,137,189,162,217,221,33,115,
    164,13,240,150,105,177,47,83,47,9,134,10,61,166,57,210,
    108,226,214,34,95,113,147,126,141,77,251,119,41,250,181,189,
    19,247,229,110,212,15,6,237,117,185,39,195,120,56,144,145,
    106,63,127,254,232,195,159,173,183,183,229,224,113,123,107,55,
    8,253,246,39,246,231,237,225,72,237,196,81,27,251,130,72,
    73,180,82,216,190,192,62,107,56,245,6,73,218,15,182,157,
    128,117,116,118,100,56,148,73,147,122,111,211,46,196,140,152,
    20,53,97,138,150,104,34,85,197,175,41,150,141,9,177,17,
    144,150,30,105,78,64,51,115,104,253,3,216,137,136,129,190,
    1,201,50,1,167,135,31,65,158,70,248,108,210,152,193,99,
    191,33,243,232,222,158,73,112,208,157,7,12,54,68,29,206,
    124,66,254,143,128,17,83,133,94,13,52,146,16,128,26,90,
    201,136,90,156,78,108,12,100,94,129,244,111,39,57,68,51,
    128,230,199,36,132,93,139,40,234,79,12,206,205,22,109,124,
    131,193,161,118,130,52,222,143,216,5,68,115,56,109,162,77,
    190,28,125,177,213,147,158,74,87,176,227,171,120,215,242,220,
    40,138,149,229,250,190,229,42,149,4,91,187,74,166,150,138,
    173,213,180,85,39,159,207,230,248,42,248,141,134,57,158,200,
    247,136,39,253,195,15,60,133,63,230,248,7,219,63,149,10,
    177,177,19,251,41,246,19,139,109,169,108,218,164,154,194,230,
    147,92,28,131,176,85,203,33,147,202,176,171,26,140,62,55,
    77,29,22,71,253,12,52,90,189,231,134,187,82,209,252,84,
    185,10,165,18,169,5,93,53,212,56,84,115,93,201,126,78,
    20,71,254,8,183,26,120,171,180,139,155,12,184,73,32,200,
    45,32,220,198,176,173,65,19,225,55,99,120,164,85,37,3,
    27,3,109,145,108,0,236,124,145,101,18,4,221,17,230,155,
    150,193,9,131,213,227,80,180,136,162,197,54,97,218,190,67,
    205,50,53,119,115,11,92,161,25,154,167,205,240,136,68,27,
    172,187,103,102,90,22,225,180,113,34,156,110,29,135,19,166,
    200,77,10,11,131,130,231,56,44,76,178,67,242,52,139,1,
    10,56,132,1,14,151,144,207,214,177,103,72,235,90,14,90,
    155,144,88,134,227,118,9,142,54,57,134,177,104,223,186,200,
    146,43,215,106,201,109,109,201,199,36,122,50,67,81,147,209,
    211,16,30,65,192,200,236,202,54,93,71,98,180,68,54,45,
    91,115,9,207,189,151,81,147,15,48,62,4,185,100,209,169,
    68,27,89,19,21,194,91,215,132,197,236,96,74,41,242,135,
    73,252,122,100,197,93,75,65,190,135,39,171,233,218,106,250,
    49,230,6,235,41,103,27,157,29,116,252,39,114,152,96,156,
    215,249,135,142,93,135,227,216,201,142,20,180,58,29,242,236,
    44,182,53,167,170,84,37,148,161,174,218,208,141,194,208,180,
    239,143,73,110,131,173,108,194,18,126,27,130,55,231,196,156,
    45,185,218,224,81,252,126,74,246,38,149,37,80,221,106,111,
    234,173,179,86,164,159,125,255,4,110,174,78,39,251,33,10,
    89,207,35,175,6,5,74,232,107,210,174,41,24,254,2,92,
    146,9,248,51,16,34,208,241,89,248,112,160,210,151,28,59,
    71,211,255,8,156,136,206,57,247,12,29,134,70,150,170,48,
    74,211,143,120,170,62,6,127,5,127,45,101,177,35,19,4,
    29,89,102,86,116,149,143,172,74,17,184,12,165,75,29,75,
    149,147,17,78,126,218,113,83,154,166,99,217,44,98,249,56,
    33,22,85,18,38,168,43,68,217,184,150,232,208,230,94,28,
    99,140,206,131,59,98,206,40,33,231,7,212,124,80,128,70,
    228,125,87,179,207,21,184,248,28,115,116,210,252,37,109,166,
    194,219,159,174,41,50,255,25,78,69,152,84,243,48,121,84,
    132,137,228,116,254,134,107,116,106,13,2,195,145,33,240,34,
    135,133,12,221,161,42,32,171,208,169,81,64,113,237,41,178,
    120,19,121,142,163,220,120,226,172,96,43,109,104,251,21,120,
    208,174,166,230,245,85,231,20,242,246,147,208,29,108,249,238,
    83,73,82,73,180,151,71,160,145,235,49,83,214,131,162,71,
    92,164,10,255,252,97,174,207,222,85,231,147,15,181,247,180,
    30,28,61,126,236,113,18,249,237,142,180,6,114,176,133,242,
    119,130,161,213,13,221,109,246,151,153,233,249,69,174,167,98,
    135,159,62,169,83,202,84,27,177,229,197,17,166,255,93,79,
    197,137,229,75,188,175,72,223,250,192,226,179,195,10,82,203,
    221,194,81,215,83,58,26,78,198,54,151,132,110,178,157,114,
    245,215,223,39,242,58,252,237,224,237,52,192,186,183,155,219,
    73,95,151,138,131,128,75,93,29,90,120,160,226,61,68,141,
    116,186,251,9,53,15,168,89,133,107,58,47,218,192,175,48,
    144,146,9,107,152,145,234,66,45,157,23,216,95,18,143,244,
    108,120,255,253,50,225,173,95,104,112,130,172,65,111,140,219,
    113,58,49,58,245,188,179,193,237,4,119,78,230,157,77,110,
    167,184,115,58,239,156,225,118,150,59,111,228,137,99,142,59,
    231,161,179,144,191,27,45,82,18,169,253,175,73,132,35,239,
    58,98,46,252,191,230,14,251,209,117,171,97,255,8,178,226,
    227,162,188,97,64,233,126,240,145,206,27,218,63,88,162,140,
    230,75,5,43,171,44,94,98,61,129,69,237,1,151,187,142,
    161,235,218,99,103,114,133,192,111,16,84,205,71,114,255,236,
    38,53,164,117,253,74,72,113,135,67,25,249,199,181,41,143,
    92,181,213,40,39,36,112,92,38,96,33,58,143,223,179,40,
    174,232,200,205,245,101,180,86,11,220,222,190,38,135,239,23,
    57,112,233,68,14,180,201,163,58,235,21,9,79,187,103,237,
    226,108,227,200,200,221,194,75,67,215,221,13,21,221,32,100,
    72,119,162,255,118,9,214,51,252,32,116,118,72,221,127,11,
    167,211,82,47,59,151,196,241,219,91,73,78,235,45,107,247,
    188,212,193,67,193,217,195,17,22,116,233,201,36,137,31,73,
    75,157,111,93,29,5,78,55,196,163,42,13,190,145,223,41,
    234,196,228,92,84,185,147,177,170,238,17,14,101,40,149,188,
    40,194,20,185,61,187,128,251,18,207,243,120,132,215,66,190,
    91,57,100,48,231,90,78,190,159,162,144,62,73,35,104,208,
    201,87,195,155,181,254,171,87,234,130,203,140,83,47,206,122,
    139,223,135,252,30,49,74,109,206,109,211,5,152,249,69,52,
    63,227,57,137,209,93,120,195,29,232,23,46,126,178,177,223,
    161,230,221,60,20,56,245,232,59,38,223,222,244,237,25,19,
    22,215,64,92,242,216,4,120,69,55,153,193,227,181,92,183,
    53,173,219,103,132,178,207,25,100,6,79,224,7,169,242,188,
    207,194,216,85,206,158,164,18,75,45,158,26,124,17,21,67,
    119,206,229,191,25,12,244,115,33,215,251,229,113,63,113,145,
    94,56,213,139,94,11,220,16,209,161,238,158,203,207,222,221,
    26,101,94,224,43,71,121,6,250,41,240,112,71,191,14,162,
    126,190,171,123,231,114,41,207,188,64,16,79,177,99,188,52,
    38,103,4,233,25,207,194,216,235,75,63,83,239,124,46,60,
    103,61,30,144,170,231,27,136,229,240,62,78,111,181,180,131,
    92,155,115,53,126,254,250,178,26,103,51,149,117,161,105,159,
    197,17,198,87,24,162,210,231,227,133,38,109,142,82,37,7,
    12,214,124,148,189,123,214,67,20,164,25,205,165,34,111,238,
    76,56,113,104,39,114,59,72,201,216,92,127,28,243,200,78,
    89,10,55,245,222,91,210,77,153,199,117,36,4,125,117,211,
    207,84,79,41,127,167,29,108,232,209,182,62,93,23,53,131,
    254,135,192,20,13,209,20,21,49,217,172,155,245,90,189,106,
    98,210,160,158,57,209,48,235,141,73,241,221,127,43,152,90,
    26,198,74,179,46,254,3,232,112,238,3,
};

EmbeddedPython embedded_m5_internal_param_BaseGarnetNetwork(
    "m5/internal/param_BaseGarnetNetwork.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_BaseGarnetNetwork.py",
    "m5.internal.param_BaseGarnetNetwork",
    data_m5_internal_param_BaseGarnetNetwork,
    2347,
    7442);

} // anonymous namespace
