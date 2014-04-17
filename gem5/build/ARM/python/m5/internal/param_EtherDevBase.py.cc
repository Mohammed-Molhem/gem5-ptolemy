#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDevBase[] = {
    120,156,237,90,221,115,19,201,17,239,93,125,216,18,54,182,
    241,23,24,131,197,113,6,193,129,5,220,17,146,64,113,1,
    76,93,72,21,62,34,231,10,78,151,186,205,162,29,89,107,
    75,187,170,221,49,160,43,147,135,152,74,242,144,170,60,36,
    121,73,30,83,73,85,42,47,249,35,242,127,37,221,61,59,
    171,149,44,217,174,212,69,198,85,103,75,83,163,158,222,158,
    233,175,223,244,236,110,21,162,191,12,126,127,84,0,8,255,
    110,2,56,248,49,160,1,208,52,160,98,128,33,12,112,206,
    194,86,6,130,79,192,201,192,59,128,138,9,194,132,93,236,
    164,224,43,19,188,49,190,38,11,141,20,83,12,104,231,65,
    164,161,146,129,231,222,20,164,69,22,182,242,16,252,2,12,
    195,240,12,120,225,140,128,51,10,239,80,58,118,114,44,112,
    20,156,60,119,114,224,156,224,78,30,218,147,32,78,64,5,
    133,143,64,101,28,69,93,69,81,39,89,212,191,73,148,131,
    35,139,224,140,19,59,174,229,75,226,76,19,39,207,113,146,
    165,76,128,51,65,82,106,168,195,100,204,136,130,83,176,57,
    5,149,41,16,248,153,132,93,84,211,153,210,140,167,98,198,
    83,204,56,13,149,105,16,248,57,165,24,185,71,140,51,49,
    227,12,51,206,66,101,22,4,126,102,20,227,172,102,156,139,
    25,231,152,113,30,42,243,32,240,51,167,24,149,245,78,67,
    229,140,182,228,66,162,127,54,209,95,76,244,207,37,250,231,
    19,253,165,68,191,144,232,95,72,244,63,72,244,47,38,250,
    31,38,250,203,137,254,165,68,255,114,162,95,76,244,175,112,
    31,181,58,3,155,87,97,243,35,216,188,198,218,159,142,181,
    191,206,218,175,64,101,5,4,126,174,43,237,207,36,174,40,
    241,21,11,241,21,55,248,138,155,80,185,9,2,63,55,212,
    21,89,88,47,158,195,152,117,255,131,127,69,3,123,114,12,
    155,87,34,8,93,223,179,92,175,230,187,38,141,103,169,161,
    8,175,82,51,18,133,250,35,10,245,127,0,199,185,99,70,
    161,254,22,80,176,65,186,52,76,120,203,157,183,38,180,139,
    176,99,192,102,26,156,20,236,224,52,25,90,192,134,1,187,
    38,252,60,69,12,111,177,77,99,112,158,135,180,84,113,190,
    201,193,169,36,141,192,219,12,236,100,96,253,197,142,73,132,
    173,28,4,127,131,111,22,89,232,40,11,53,97,7,219,52,
    236,166,225,109,22,158,35,19,146,54,115,164,190,241,98,7,
    53,69,202,122,49,141,171,93,75,168,75,170,56,110,224,217,
    77,33,167,177,111,181,236,192,110,90,143,101,93,4,171,226,
    213,67,59,20,197,188,102,244,195,149,150,45,235,101,190,50,
    69,38,105,182,36,75,244,61,33,79,96,167,230,122,142,213,
    244,157,237,134,144,163,36,206,170,185,13,97,89,60,248,164,
    217,242,3,249,56,8,252,160,76,86,101,98,195,183,227,43,
    200,166,213,134,143,83,210,108,60,77,153,196,75,226,174,181,
    88,34,45,128,87,75,23,59,34,172,6,110,75,162,179,148,
    68,226,38,105,69,114,19,55,225,87,216,148,190,8,209,165,
    165,186,191,37,182,189,45,183,89,66,213,68,195,111,53,133,
    39,75,143,31,223,186,249,131,213,210,134,104,222,46,189,220,
    118,27,78,233,65,249,105,169,213,150,117,223,43,33,205,245,
    164,64,3,53,74,123,77,179,130,92,167,104,146,215,238,134,
    229,178,122,86,93,52,90,34,24,39,234,2,45,192,152,52,
    198,140,172,145,50,138,198,56,246,50,248,77,25,139,230,9,
    99,205,37,5,171,164,52,133,87,74,7,212,95,129,93,135,
    158,223,50,33,88,164,112,217,196,143,65,254,197,160,89,167,
    49,147,199,126,74,150,81,212,205,20,5,129,34,238,112,136,
    97,172,33,231,61,242,186,7,28,39,25,216,204,130,138,31,
    12,59,21,80,65,155,90,100,39,49,38,10,79,67,248,251,
    110,9,222,36,160,229,17,18,145,52,135,83,253,138,67,114,
    189,72,11,95,227,184,144,117,55,244,95,123,108,125,234,115,
    18,173,163,77,158,181,63,127,185,41,170,50,92,66,194,151,
    254,118,161,106,123,158,47,11,182,227,20,108,41,3,247,229,
    182,20,97,65,250,133,229,176,152,35,119,79,233,208,138,229,
    181,91,58,148,200,237,24,74,234,135,227,86,37,254,224,152,
    181,216,254,161,144,24,22,117,223,9,145,78,34,54,132,44,
    211,34,229,73,108,30,232,233,56,254,138,89,29,45,161,104,
    212,100,158,3,207,14,67,139,167,35,58,199,24,93,253,202,
    110,108,11,73,252,161,180,37,206,74,93,53,209,16,163,236,
    52,233,169,213,36,211,89,158,239,57,109,92,165,91,93,166,
    5,156,230,88,27,3,138,182,89,140,180,17,108,179,48,142,
    145,55,105,86,73,161,116,20,103,28,99,115,164,62,176,223,
    141,8,58,48,222,118,17,96,138,38,35,4,107,198,9,88,
    160,30,93,92,166,112,46,159,165,102,145,154,115,90,249,225,
    88,96,188,215,2,183,104,86,147,213,174,166,34,5,227,36,
    90,235,74,162,51,157,36,66,56,92,167,100,48,41,101,58,
    201,144,34,19,4,247,163,200,167,52,67,231,227,112,34,222,
    217,48,229,73,82,56,171,67,181,76,241,151,12,194,141,68,
    16,150,201,39,28,129,229,51,131,140,184,116,84,70,220,80,
    70,188,77,179,142,69,177,51,206,49,147,55,170,228,120,51,
    50,41,155,115,21,59,237,121,50,103,210,144,243,184,189,61,
    247,198,121,159,226,189,142,43,38,133,29,202,190,170,147,166,
    40,171,165,96,46,218,127,66,74,245,86,224,191,105,23,252,
    90,65,130,94,195,189,229,112,101,57,188,139,96,80,184,207,
    240,162,224,64,37,124,32,90,1,38,118,142,127,168,100,181,
    56,113,173,104,251,64,131,207,146,33,77,109,102,198,166,80,
    6,4,73,67,180,113,62,182,49,45,249,46,77,153,103,3,
    167,96,30,191,121,131,215,101,249,140,140,92,79,240,40,126,
    31,146,169,73,91,1,84,49,151,215,213,170,89,33,82,173,
    124,185,43,90,134,162,78,249,42,202,95,213,169,150,133,56,
    54,232,155,162,5,83,244,255,6,184,222,50,224,215,64,113,
    128,238,142,242,133,51,147,190,228,206,105,98,255,26,24,116,
    250,108,111,166,202,59,51,130,37,76,203,240,14,179,170,221,
    238,39,240,219,4,98,237,166,192,160,157,41,21,85,84,201,
    157,41,29,103,42,7,208,161,118,159,116,119,74,147,139,234,
    118,72,108,42,121,83,113,242,118,192,47,174,131,16,145,134,
    19,91,163,106,50,139,214,245,164,19,89,4,251,103,141,105,
    51,17,47,215,168,185,30,135,138,161,105,255,247,37,46,245,
    226,116,98,167,178,20,54,254,152,214,145,230,149,79,100,217,
    212,40,228,129,227,4,113,54,100,116,54,172,198,217,32,24,
    171,223,113,177,77,173,73,142,223,53,13,60,41,170,51,34,
    86,40,116,84,203,130,24,161,154,152,142,128,153,232,8,136,
    153,68,144,205,177,171,191,140,107,132,135,93,91,3,27,106,
    77,153,48,142,6,229,104,106,222,12,17,71,200,215,247,26,
    118,243,165,99,223,95,167,9,105,214,170,78,61,83,171,48,
    153,84,129,210,198,24,164,5,255,188,161,85,121,53,68,12,
    185,137,242,99,21,56,99,28,191,202,192,241,179,186,40,52,
    69,243,37,78,93,119,91,133,90,195,222,96,47,105,216,248,
    140,84,252,33,112,181,162,244,251,157,58,79,205,36,118,25,
    6,14,227,57,194,1,238,68,59,140,31,150,169,54,163,142,
    75,57,193,227,99,135,39,94,91,81,208,169,77,134,226,195,
    110,181,132,231,116,82,157,11,65,59,216,8,153,101,200,174,
    183,240,248,233,98,137,251,69,39,205,39,112,251,152,193,239,
    222,56,166,133,38,116,229,108,207,196,121,191,48,212,213,179,
    183,43,218,219,69,178,118,103,247,226,90,92,193,3,22,0,
    120,80,146,109,5,212,87,168,161,74,182,124,39,118,20,241,
    58,2,15,134,66,251,74,78,66,92,106,225,225,79,6,126,
    27,171,0,222,79,241,119,195,178,134,189,59,150,104,177,218,
    67,89,4,225,172,145,75,231,12,46,83,158,180,104,201,34,
    12,223,103,88,99,64,24,114,112,88,223,42,154,149,111,29,
    161,6,229,143,33,42,129,142,2,201,198,35,36,139,35,77,
    217,135,138,250,68,193,242,61,109,184,33,26,137,146,216,62,
    150,200,85,27,128,92,229,239,83,51,16,171,38,59,88,213,
    241,6,185,187,124,183,75,135,225,40,114,15,229,127,61,16,
    150,214,240,144,106,135,91,223,193,82,183,231,183,142,61,44,
    197,26,188,47,176,20,69,218,123,5,75,205,99,9,75,193,
    183,0,75,218,27,71,6,75,159,2,231,208,30,88,202,51,
    44,61,119,101,253,153,31,200,239,112,169,219,245,175,143,61,
    46,197,26,28,45,46,157,140,113,73,135,218,123,5,76,237,
    99,9,76,191,252,223,128,105,42,9,76,177,59,142,12,153,
    30,162,252,87,125,144,137,110,75,39,121,247,98,211,173,195,
    96,83,132,74,105,16,25,194,166,178,122,122,118,236,144,232,
    143,199,30,137,98,13,14,135,68,180,214,207,181,122,146,61,
    219,251,68,40,164,27,228,107,126,161,234,123,161,12,182,171,
    210,15,10,142,168,185,158,112,10,215,11,252,160,162,224,134,
    5,251,37,142,218,85,169,124,215,115,75,153,16,135,239,64,
    109,189,166,219,77,67,198,157,63,197,25,60,50,40,131,239,
    116,165,241,176,147,243,49,202,255,3,77,148,141,146,19,19,
    243,84,79,98,62,163,43,251,220,105,193,104,60,108,233,128,
    12,34,11,155,35,220,142,210,243,7,172,30,34,98,158,219,
    19,76,28,211,196,113,110,79,50,113,66,19,39,185,157,98,
    226,41,77,156,230,118,134,137,179,154,56,199,237,60,19,79,
    107,226,25,110,23,152,120,86,19,23,185,61,199,196,243,154,
    184,196,109,129,137,23,52,241,3,110,47,50,241,67,77,92,
    230,246,18,19,47,107,98,145,219,43,76,188,170,137,31,113,
    123,141,137,215,53,113,133,219,18,19,111,104,40,187,201,196,
    91,80,249,88,23,88,159,28,219,2,235,47,199,30,214,98,
    13,14,134,53,19,18,143,201,239,128,46,176,118,249,193,93,
    87,117,101,116,85,87,198,65,213,21,189,83,16,221,86,239,
    201,202,68,149,21,63,156,61,138,2,235,159,208,121,98,118,
    124,10,172,127,197,240,124,123,16,60,119,10,44,246,196,229,
    190,216,104,213,237,192,193,253,69,88,182,186,61,69,239,0,
    28,154,55,68,94,154,171,119,128,159,247,245,17,16,188,161,
    27,242,118,155,39,57,136,135,132,211,51,15,77,144,23,251,
    95,32,223,88,53,183,230,91,161,251,141,96,193,135,225,35,
    225,84,198,37,137,131,212,118,154,182,245,58,112,177,40,173,
    217,180,147,239,103,162,61,188,218,68,189,3,242,210,65,2,
    58,150,58,36,43,77,53,209,53,149,178,91,97,160,161,107,
    110,3,35,141,231,56,144,137,164,231,148,59,20,69,46,15,
    94,86,32,108,39,161,192,225,56,105,134,147,209,250,59,100,
    121,161,255,197,152,36,65,98,138,131,185,72,60,229,121,135,
    180,159,97,121,1,9,127,31,146,53,233,131,4,125,80,76,
    6,135,140,221,160,95,236,38,137,251,248,79,214,121,33,251,
    59,57,98,74,56,89,81,6,93,34,15,35,87,238,145,27,
    83,6,101,191,60,4,66,200,94,132,208,4,185,48,64,191,
    8,214,246,25,38,81,180,1,98,159,119,5,73,197,120,231,
    49,99,239,222,117,100,71,210,207,80,254,159,105,34,138,71,
    117,36,157,221,231,159,142,171,124,164,232,121,99,89,173,152,
    106,18,245,170,74,59,44,115,161,48,17,111,23,252,90,173,
    126,24,75,155,10,251,111,205,110,170,119,37,249,13,192,50,
    37,93,249,162,222,108,248,176,162,222,96,226,23,132,212,107,
    89,184,251,243,121,135,143,55,229,21,106,232,249,168,156,129,
    248,13,15,126,116,27,136,13,55,68,221,249,49,5,215,13,
    241,35,147,238,241,79,59,227,209,189,203,238,113,58,181,203,
    121,72,222,60,236,98,144,244,154,78,243,246,138,182,244,74,
    183,165,221,170,224,87,139,155,183,229,217,190,140,207,170,110,
    196,182,208,127,188,97,203,154,31,52,7,204,243,4,225,231,
    145,143,141,223,224,23,56,247,114,172,183,113,153,205,61,179,
    11,111,187,105,61,21,77,63,104,63,245,29,193,136,151,28,
    127,16,29,38,21,139,245,74,48,240,20,250,78,209,205,59,
    64,81,28,84,111,234,114,34,238,29,127,212,240,171,91,194,
    137,120,250,107,203,60,171,126,211,70,122,255,89,214,93,61,
    203,84,207,184,19,208,85,179,61,84,204,45,215,110,16,228,
    45,246,26,128,222,219,176,189,13,161,117,239,63,225,106,211,
    142,252,55,192,191,174,31,141,143,170,221,130,7,121,117,123,
    35,229,68,2,82,240,55,159,74,25,59,146,137,219,29,126,
    83,221,151,68,136,66,137,61,8,240,146,151,15,25,112,212,
    11,71,234,93,202,251,164,108,216,194,134,222,39,206,77,228,
    140,172,73,239,173,167,140,188,49,110,164,141,177,241,92,42,
    151,205,101,82,8,74,68,153,54,242,169,92,126,46,151,51,
    242,230,222,118,204,56,232,127,41,77,124,75,243,57,227,191,
    103,49,35,65,
};

EmbeddedPython embedded_m5_internal_param_EtherDevBase(
    "m5/internal/param_EtherDevBase.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_EtherDevBase.py",
    "m5.internal.param_EtherDevBase",
    data_m5_internal_param_EtherDevBase,
    2996,
    13388);

} // anonymous namespace
