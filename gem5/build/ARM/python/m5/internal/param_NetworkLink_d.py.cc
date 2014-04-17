#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkLink_d[] = {
    120,156,197,88,239,110,227,198,17,159,37,41,217,146,173,179,
    125,254,119,246,249,98,21,173,17,37,104,172,230,218,107,218,
    230,112,72,26,31,208,20,173,147,210,9,124,167,6,101,105,
    114,45,81,162,72,129,92,219,81,96,127,169,15,109,191,245,
    33,138,126,232,11,244,9,250,94,205,204,44,73,83,62,187,
    53,208,86,103,139,139,229,112,119,102,103,230,55,179,179,235,
    65,246,87,193,231,163,38,64,154,8,0,31,127,2,66,128,
    161,128,142,0,33,5,248,203,48,168,64,242,35,240,43,240,
    10,160,99,128,52,224,18,59,38,252,214,128,104,158,231,84,
    33,52,153,34,96,92,7,105,65,167,2,135,209,18,88,178,
    10,131,58,36,191,7,33,68,36,224,133,63,3,254,44,188,
    66,238,216,169,49,195,89,240,235,220,169,129,63,199,157,58,
    140,23,65,206,65,7,153,207,64,167,129,172,222,69,86,247,
    152,213,63,137,149,143,95,86,192,111,208,112,92,203,75,26,
    105,209,72,150,113,143,185,44,228,43,91,132,206,82,222,191,
    95,234,47,151,250,43,165,254,42,247,23,64,46,65,127,13,
    250,235,208,127,0,199,104,136,197,66,218,6,72,19,250,155,
    208,217,4,137,191,13,184,68,91,249,75,165,25,15,121,198,
    253,98,198,22,207,120,4,157,71,32,241,183,165,103,84,225,
    160,181,138,246,15,254,133,127,45,180,63,168,121,108,78,101,
    146,6,113,228,4,209,113,28,24,244,189,74,13,121,203,163,
    102,38,115,219,39,228,182,191,3,251,204,55,50,183,93,0,
    50,22,164,75,104,192,5,119,46,12,24,183,224,92,64,223,
    2,223,132,115,20,83,161,5,116,5,92,26,240,149,73,3,
    46,176,181,208,208,111,129,165,180,207,250,108,104,205,105,6,
    46,42,112,94,129,131,23,231,6,17,6,53,72,254,6,223,
    108,49,211,89,102,106,192,57,182,22,92,90,112,81,133,67,
    28,132,164,126,141,212,23,47,206,81,83,164,28,180,44,92,
    237,126,73,93,82,197,15,146,200,29,74,181,130,125,103,228,
    38,238,208,217,151,234,44,78,6,191,10,162,129,227,183,234,
    249,200,56,221,29,185,170,103,243,84,147,108,50,28,41,102,
    25,71,82,205,97,231,56,136,124,103,24,251,39,161,84,179,
    196,207,57,14,66,233,56,252,241,211,225,40,78,212,243,36,
    137,19,155,204,202,196,48,118,139,25,100,84,47,140,83,217,
    34,105,44,198,38,246,138,70,31,143,152,35,45,128,151,75,
    147,125,153,122,73,48,82,232,45,205,145,70,19,183,22,249,
    137,155,244,43,108,218,95,166,232,211,118,47,30,200,147,104,
    16,12,219,123,242,84,134,241,104,40,35,213,126,254,252,241,
    251,63,221,107,119,229,240,73,251,232,36,8,253,246,199,246,
    175,219,163,177,234,197,81,27,105,65,164,36,90,40,108,223,
    96,155,93,28,118,159,164,156,5,93,39,96,253,156,158,12,
    71,50,105,16,117,147,86,32,22,197,188,168,10,83,180,68,
    3,123,21,124,76,177,101,204,137,253,128,52,244,72,107,2,
    152,153,67,234,175,192,206,67,223,15,12,72,182,8,48,125,
    252,9,242,48,194,230,128,190,25,252,237,55,100,26,77,237,
    155,4,3,77,60,103,144,33,218,112,228,83,242,123,4,140,
    148,10,244,171,160,17,132,192,211,144,74,198,212,226,112,98,
    99,32,115,11,210,191,76,114,136,22,1,77,143,1,142,164,
    53,20,245,7,6,229,65,139,22,190,207,192,80,189,32,141,
    207,34,54,63,245,57,140,14,208,38,159,143,63,59,234,75,
    79,165,219,72,120,25,159,52,61,55,138,98,213,116,125,191,
    233,42,149,4,71,39,74,166,77,21,55,119,210,86,141,252,
    189,148,99,171,224,55,30,229,88,34,191,35,150,244,139,31,
    120,10,95,150,249,133,237,159,74,133,184,232,197,126,138,116,
    98,209,149,202,166,69,170,123,216,124,156,139,99,0,182,170,
    57,92,82,25,30,171,58,35,207,77,83,135,197,17,157,65,
    70,179,79,221,240,68,42,26,159,42,87,161,84,234,106,65,
    211,132,217,3,82,52,215,147,108,231,68,113,228,143,113,153,
    129,183,67,43,120,192,96,155,7,130,219,42,66,109,6,219,
    42,52,16,122,139,134,71,26,89,25,208,24,100,107,164,63,
    176,227,69,150,61,16,112,151,152,99,90,6,39,9,86,141,
    67,176,73,61,154,108,19,158,237,135,212,108,81,243,40,215,
    126,74,38,104,92,55,193,99,18,107,176,222,158,153,105,88,
    132,209,254,68,24,109,92,133,17,166,196,3,10,7,131,130,
    230,42,28,76,178,65,242,44,195,62,5,26,186,31,63,151,
    16,207,150,177,23,73,227,106,14,86,155,16,88,134,97,183,
    4,67,155,156,194,24,180,55,110,179,226,246,27,179,98,87,
    91,241,9,137,157,207,208,211,96,212,212,133,71,174,55,50,
    155,178,61,247,176,51,94,39,123,150,45,185,142,123,220,97,
    212,224,205,138,55,60,46,1,116,250,208,6,214,29,139,112,
    118,108,194,90,182,9,165,20,237,163,36,254,122,220,140,143,
    155,10,242,53,60,221,73,119,119,210,15,49,31,52,159,113,
    134,209,25,65,199,124,34,71,9,198,118,141,95,116,188,58,
    28,187,78,182,133,160,197,105,67,103,71,177,157,57,61,165,
    42,161,172,52,77,35,215,11,35,211,154,63,36,153,117,182,
    176,9,235,248,212,5,47,204,137,57,59,114,85,193,95,241,
    249,57,217,154,212,149,64,53,160,125,160,151,205,26,145,110,
    246,219,19,120,153,142,62,246,187,40,96,47,143,182,42,20,
    232,160,199,164,21,83,0,252,9,184,236,18,240,71,32,36,
    160,195,179,144,225,224,164,135,28,186,76,195,127,7,156,120,
    110,216,227,12,29,122,70,150,154,48,50,211,15,120,168,222,
    242,126,9,127,46,101,173,75,19,4,109,79,102,86,88,149,
    183,39,171,8,86,134,208,157,182,32,107,50,170,201,71,61,
    55,165,97,58,126,205,34,126,175,18,96,81,13,97,82,154,
    18,186,102,181,52,135,22,246,233,21,182,40,247,63,20,203,
    70,9,49,223,167,230,189,2,44,34,167,253,255,215,184,125,
    61,89,151,246,43,71,39,200,95,208,66,44,94,250,66,149,
    243,210,4,151,34,44,42,121,88,60,46,194,66,114,218,126,
    197,181,55,181,6,1,224,210,16,120,8,194,66,133,206,31,
    22,200,10,116,170,20,64,92,87,138,44,190,68,158,207,72,
    222,196,158,192,214,217,215,118,43,48,160,221,75,205,215,211,
    204,31,228,225,167,161,59,60,242,221,103,47,72,34,137,245,
    242,136,51,114,29,22,203,58,80,180,136,219,212,224,215,31,
    228,186,156,78,51,119,188,143,2,10,29,56,82,252,216,227,
    132,241,69,79,54,135,114,120,132,178,123,193,168,121,28,186,
    93,246,147,153,233,248,89,174,163,98,71,95,223,137,83,202,
    74,251,113,211,139,35,76,241,39,158,138,147,166,47,241,12,
    34,253,230,123,77,222,31,154,65,218,116,143,240,171,235,41,
    141,254,201,56,230,82,207,77,186,41,87,117,131,51,234,78,
    219,207,14,158,52,3,172,101,95,230,54,210,199,159,34,217,
    115,249,170,67,9,55,76,60,91,168,177,78,107,63,166,230,
    29,106,118,224,13,236,9,109,20,112,72,146,200,116,85,204,
    60,53,193,117,208,196,192,207,105,110,250,122,40,255,227,46,
    161,172,111,50,178,128,174,210,72,57,67,7,94,106,107,180,
    53,116,234,57,113,142,219,121,38,54,114,226,61,110,23,152,
    184,152,19,151,184,189,207,196,229,156,184,194,237,42,19,215,
    242,187,150,117,38,62,128,206,6,93,76,16,101,147,210,201,
    204,127,155,78,56,14,167,29,129,206,255,52,139,216,143,223,
    164,10,246,15,33,43,57,110,203,32,162,172,95,67,103,144,
    190,200,11,251,178,114,124,111,176,121,51,108,29,47,145,174,
    146,218,105,155,211,213,152,19,146,150,239,22,174,203,213,42,
    14,57,31,20,170,93,114,205,53,94,41,85,222,236,73,113,
    136,5,18,86,231,231,172,189,99,232,2,253,10,159,86,97,
    132,117,108,34,121,230,220,96,8,93,132,211,138,220,209,72,
    70,254,85,129,205,95,166,9,4,74,122,93,184,170,121,176,
    154,94,193,231,245,128,36,197,74,122,178,15,43,69,8,78,
    217,155,140,223,48,247,99,139,79,127,69,130,183,201,139,58,
    165,23,217,220,254,89,225,151,239,220,2,206,211,32,81,78,
    36,85,74,7,185,59,140,194,58,140,143,78,5,133,107,180,
    155,230,132,244,18,248,204,247,63,141,33,174,148,17,179,119,
    245,189,219,214,225,165,14,238,93,206,41,74,102,198,119,26,
    72,220,249,78,182,68,84,59,183,69,107,15,75,123,25,58,
    103,184,140,30,203,184,219,72,18,66,57,98,130,122,235,250,
    88,209,16,195,50,242,198,255,86,145,137,129,185,34,101,34,
    99,153,115,143,47,67,169,228,77,145,167,8,22,217,205,130,
    47,177,144,137,199,120,230,229,195,35,190,135,142,51,245,109,
    255,39,40,128,142,111,124,133,68,219,126,21,55,254,213,226,
    191,102,213,4,215,87,215,174,206,245,18,223,130,252,176,52,
    78,109,78,229,11,5,206,249,122,55,47,112,56,177,17,90,
    247,221,161,190,178,227,123,40,155,96,110,127,55,15,21,78,
    73,250,16,205,71,84,125,53,128,73,140,139,63,174,245,236,
    93,162,19,138,135,79,118,115,221,118,181,110,159,132,177,55,
    144,190,190,163,228,91,230,225,19,245,232,246,161,123,241,208,
    69,250,195,27,71,28,4,195,140,209,210,181,239,126,66,179,
    86,175,81,209,69,129,27,6,223,232,219,205,156,204,21,212,
    77,171,35,128,78,80,184,254,122,125,231,98,168,36,178,27,
    164,200,144,185,77,204,202,242,57,57,81,53,111,1,110,153,
    195,180,225,165,79,62,250,54,231,25,221,241,167,31,97,67,
    119,154,181,133,154,168,26,116,121,110,138,186,104,8,75,204,
    55,106,102,173,90,171,152,8,65,162,44,139,186,89,171,207,
    139,252,127,27,161,88,55,182,113,222,183,209,154,96,50,
};

EmbeddedPython embedded_m5_internal_param_NetworkLink_d(
    "m5/internal/param_NetworkLink_d.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_NetworkLink_d.py",
    "m5.internal.param_NetworkLink_d",
    data_m5_internal_param_NetworkLink_d,
    2255,
    7023);

} // anonymous namespace
