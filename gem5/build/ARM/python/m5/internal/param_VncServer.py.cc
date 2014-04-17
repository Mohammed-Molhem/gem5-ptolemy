#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VncServer[] = {
    120,156,197,88,109,111,227,198,17,158,37,41,217,146,165,179,
    124,62,251,94,236,214,12,2,163,106,208,88,205,181,215,180,
    205,193,104,218,59,32,87,160,78,66,165,181,163,182,97,104,
    114,37,81,150,72,129,92,157,163,192,254,82,31,218,126,235,
    143,40,250,161,255,163,255,171,157,153,37,105,90,119,23,4,
    104,162,216,226,98,185,220,157,221,153,121,158,217,217,245,33,
    251,171,224,243,43,27,32,237,11,128,0,127,2,198,0,19,
    1,61,1,66,10,8,54,225,172,2,201,79,33,168,192,11,
    128,158,1,210,128,43,172,152,240,71,3,162,6,143,169,194,
    216,228,22,1,243,58,72,11,122,21,56,142,54,192,146,85,
    56,171,67,242,57,8,33,34,1,39,193,10,4,171,240,2,
    165,99,165,198,2,87,33,168,115,165,6,193,26,87,234,48,
    111,129,92,131,30,10,95,129,94,19,69,189,133,162,110,177,
    168,255,144,168,0,191,220,129,160,73,221,113,45,159,82,79,
    139,122,242,28,183,88,202,122,190,178,22,244,54,242,250,237,
    82,125,179,84,191,195,245,117,144,27,48,218,130,209,54,140,
    238,2,26,36,104,21,51,220,3,105,194,232,62,244,238,131,
    196,223,61,184,66,251,4,27,165,17,15,120,196,237,98,196,
    14,143,216,133,222,46,72,252,237,232,17,85,232,182,183,208,
    230,225,127,241,175,141,54,7,213,192,226,185,76,210,48,142,
    220,48,234,199,161,65,223,171,84,144,135,124,42,86,50,87,
    253,134,92,245,111,96,63,5,70,230,170,75,64,193,130,116,
    25,27,112,201,149,75,3,230,109,184,16,48,178,32,48,225,
    2,167,169,208,2,6,2,174,12,248,147,73,29,46,177,180,
    208,184,223,7,75,105,63,141,216,184,90,210,10,92,86,224,
    162,2,221,147,11,131,26,206,106,144,252,11,190,220,101,161,
    171,44,212,128,11,44,45,184,178,224,178,10,199,216,9,155,
    70,53,82,95,156,92,160,166,216,210,109,91,184,218,163,146,
    186,164,74,16,38,145,55,145,170,133,117,119,234,37,222,196,
    253,67,228,119,101,130,118,104,215,243,94,113,122,48,245,212,
    208,225,97,38,217,99,50,85,44,46,142,164,90,195,74,63,
    140,2,119,18,7,179,177,84,171,36,203,237,135,99,233,186,
    252,241,217,100,26,39,234,105,146,196,137,67,38,229,198,113,
    236,21,35,200,160,254,56,78,101,155,102,227,105,28,18,175,
    168,119,127,202,18,105,1,188,84,26,28,200,212,79,194,169,
    66,79,105,137,212,155,164,181,201,71,92,164,39,88,116,126,
    159,162,63,59,195,248,76,206,162,179,112,210,121,34,159,203,
    113,60,157,200,72,117,158,62,125,248,206,47,158,116,6,114,
    242,168,115,58,11,199,65,231,125,231,119,157,233,92,13,227,
    168,131,109,97,164,36,90,103,220,89,176,203,1,118,185,77,
    51,156,135,3,55,100,221,220,161,28,79,101,210,164,214,7,
    52,187,104,137,134,168,10,83,180,69,19,107,21,124,76,177,
    107,172,137,163,144,180,243,73,99,2,150,153,67,233,159,192,
    78,67,159,159,25,144,236,18,80,70,248,19,228,89,132,75,
    151,190,25,252,237,99,50,139,110,29,153,228,126,221,120,193,
    224,66,148,97,207,199,228,239,8,24,33,21,24,85,65,35,
    7,1,167,161,148,204,169,196,238,36,198,64,225,22,164,255,
    184,41,33,106,1,154,29,201,140,77,219,56,213,95,24,140,
    221,54,45,252,136,65,161,134,97,26,159,71,108,122,170,51,
    125,186,104,147,143,230,31,158,142,164,175,210,61,108,248,52,
    158,217,190,23,69,177,178,189,32,176,61,165,146,240,116,166,
    100,106,171,216,222,79,219,53,242,245,70,142,171,66,222,124,
    154,227,136,124,142,56,210,47,65,232,43,124,217,228,23,182,
    127,42,21,98,98,24,7,41,182,147,136,129,84,14,45,82,
    221,194,226,253,124,58,6,95,187,154,67,37,149,227,190,170,
    51,234,188,52,117,121,58,106,103,128,209,232,231,222,120,38,
    21,245,79,149,167,112,86,170,234,137,150,5,177,123,164,100,
    174,35,217,205,141,226,40,152,227,18,67,127,159,102,191,199,
    64,107,0,65,109,11,97,182,130,101,21,154,8,187,150,225,
    147,54,86,6,50,6,216,54,233,14,236,116,145,69,12,4,
    219,21,198,149,182,193,129,129,213,98,234,217,84,163,193,14,
    97,217,217,161,98,151,138,239,229,154,47,65,253,230,162,250,
    15,105,74,131,117,246,205,76,187,130,62,71,55,232,115,255,
    154,62,24,2,187,68,3,131,200,114,77,3,147,244,79,14,
    51,204,19,193,208,237,248,185,132,116,182,138,67,129,145,113,
    195,32,117,8,121,101,248,13,74,240,115,200,33,140,61,231,
    254,235,44,184,247,157,88,112,160,45,248,136,166,108,100,168,
    105,50,90,234,194,39,151,27,153,61,217,150,79,176,50,191,
    75,182,44,91,241,46,238,103,199,81,147,55,38,222,220,120,
    139,215,33,67,27,87,87,44,194,87,223,132,237,108,195,73,
    137,225,211,36,254,98,110,199,125,91,65,190,134,199,251,233,
    193,126,250,30,198,0,251,144,163,138,142,2,154,231,137,156,
    38,200,231,26,191,104,142,186,204,87,55,219,50,208,218,180,
    121,179,147,216,198,28,146,82,149,80,36,90,150,129,235,133,
    129,105,189,239,209,124,117,182,174,9,119,241,169,11,94,148,
    27,115,52,228,236,129,191,226,243,107,178,51,169,42,129,242,
    59,167,171,151,204,218,144,94,206,15,110,224,228,219,215,197,
    121,11,133,63,201,25,86,133,2,21,244,152,180,90,2,253,
    223,128,83,43,1,127,5,66,0,58,58,163,9,19,146,30,
    114,228,38,117,255,12,56,208,188,98,63,51,52,221,140,44,
    20,33,27,211,119,185,171,222,222,126,11,127,47,69,169,43,
    19,4,109,69,102,150,60,149,183,34,171,32,40,67,231,107,
    109,55,214,77,38,147,127,134,94,74,221,52,103,205,130,179,
    215,1,175,200,122,48,16,45,1,85,171,122,38,151,22,245,
    236,26,83,20,231,119,196,166,81,66,202,143,168,120,187,0,
    137,200,219,190,221,245,237,45,6,230,210,190,228,234,96,248,
    1,45,194,226,101,175,87,153,197,133,132,130,6,149,156,6,
    15,11,26,72,14,207,47,56,167,166,210,32,167,95,25,2,
    15,52,152,136,208,89,194,2,89,129,94,149,8,195,57,163,
    200,248,36,242,216,69,49,239,70,236,103,171,28,105,123,21,
    126,215,46,165,226,139,101,197,10,242,234,227,177,55,57,13,
    188,195,99,154,141,166,244,115,134,25,249,250,91,229,245,19,
    59,196,235,84,224,215,31,231,122,60,95,86,156,120,7,133,
    23,235,103,86,4,177,207,193,225,147,161,180,39,114,114,138,
    243,14,195,169,221,31,123,3,246,143,153,233,247,97,174,159,
    98,7,47,238,180,41,69,160,163,216,246,227,8,195,248,204,
    87,113,98,7,18,207,21,50,176,223,182,121,15,176,195,212,
    246,78,241,171,231,43,141,246,155,156,229,20,206,75,6,41,
    103,107,103,231,84,93,166,127,93,60,53,134,152,159,158,228,
    246,209,199,153,34,160,115,74,170,169,131,27,34,158,23,212,
    92,135,175,159,81,241,67,42,246,97,201,113,191,67,228,164,
    89,200,100,85,140,48,53,161,214,203,132,253,136,198,164,47,
    211,246,252,235,208,86,223,64,100,228,173,82,79,185,66,135,
    86,42,107,20,250,123,245,188,113,141,203,6,55,54,243,75,
    142,91,220,184,14,189,22,221,14,80,203,6,113,127,229,255,
    229,62,19,103,153,148,249,236,27,165,188,243,240,187,90,190,
    243,19,200,114,129,215,209,93,148,117,107,106,186,143,68,158,
    101,151,21,227,131,251,246,203,88,115,253,68,122,74,106,71,
    61,88,158,166,28,53,244,220,159,23,238,202,213,41,78,26,
    239,22,42,93,113,18,52,191,83,74,129,217,123,226,24,51,
    22,76,147,47,88,107,215,208,153,242,53,30,173,66,121,178,
    99,36,207,221,5,3,232,76,152,86,227,77,167,50,10,174,
    179,92,254,178,44,199,83,84,34,222,231,9,8,166,180,119,
    240,121,153,120,164,80,73,63,246,91,165,160,218,18,61,200,
    88,29,230,190,107,211,37,205,117,244,117,200,115,58,222,22,
    161,214,249,101,225,139,7,175,0,98,52,35,124,211,241,233,
    171,62,99,26,196,206,210,175,124,110,95,236,201,119,68,36,
    230,181,31,73,8,217,145,94,216,242,204,140,64,142,165,146,
    139,248,208,183,117,122,35,9,36,238,135,241,28,143,71,124,
    214,192,247,177,235,46,117,7,249,57,10,255,51,100,129,140,
    118,144,42,238,33,91,248,95,179,106,130,55,231,133,123,84,
    189,48,74,173,117,86,61,79,29,14,45,235,133,47,248,190,
    47,223,33,153,112,148,67,30,121,19,125,143,195,23,20,206,
    27,84,188,153,187,147,61,160,79,90,124,150,209,103,71,36,
    23,103,14,156,40,56,7,185,159,39,143,14,114,141,14,10,
    141,158,69,211,153,226,27,199,201,35,181,243,202,94,221,112,
    162,175,182,212,198,194,247,32,241,176,190,181,208,138,22,15,
    189,113,248,165,190,203,202,155,57,13,88,152,118,85,227,130,
    95,120,79,190,25,24,217,215,137,28,132,41,138,224,241,121,
    231,44,98,144,19,212,238,43,192,85,30,184,76,88,232,132,
    87,31,214,15,233,202,54,61,196,130,174,170,106,235,53,81,
    53,232,62,212,20,117,209,20,150,104,52,107,102,173,90,171,
    152,8,29,106,217,20,117,179,86,111,8,253,191,135,48,170,
    27,123,141,154,248,31,228,138,154,25,
};

EmbeddedPython embedded_m5_internal_param_VncServer(
    "m5/internal/param_VncServer.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_VncServer.py",
    "m5.internal.param_VncServer",
    data_m5_internal_param_VncServer,
    2138,
    6444);

} // anonymous namespace
