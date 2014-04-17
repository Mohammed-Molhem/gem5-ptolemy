#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleDRAM[] = {
    120,156,197,90,91,119,219,198,17,30,128,23,153,180,100,75,
    150,109,249,46,58,169,18,198,73,196,196,137,115,117,221,200,
    146,211,56,141,21,7,116,42,91,185,32,16,176,36,33,129,
    0,15,176,178,194,28,249,165,202,105,243,214,231,62,247,244,
    161,47,253,21,253,95,237,204,44,22,130,40,82,145,123,97,
    108,113,206,242,219,193,236,206,117,47,160,11,233,191,18,126,
    62,170,1,36,255,48,0,60,252,51,32,0,232,26,176,110,
    128,33,12,240,102,97,171,4,241,219,224,149,224,71,128,117,
    19,132,9,123,216,40,192,87,38,132,147,252,76,25,130,2,
    35,6,244,171,32,138,176,94,130,181,112,6,138,162,12,91,
    85,136,191,3,195,48,66,3,30,123,19,224,157,128,31,81,
    58,54,42,44,240,4,120,85,110,84,192,59,201,141,42,244,
    167,65,156,132,117,20,62,1,235,83,40,234,6,138,58,197,
    162,254,73,162,60,236,57,11,222,20,177,227,92,158,16,103,
    145,56,121,140,83,44,229,180,158,217,52,172,207,232,246,153,
    92,123,54,215,62,155,107,159,203,181,207,231,218,115,185,246,
    133,92,251,98,174,125,137,219,167,65,204,192,230,101,216,188,
    2,155,87,161,133,70,156,206,102,122,13,68,1,54,231,97,
    125,30,4,254,93,131,61,180,179,55,147,123,162,198,79,156,
    201,158,184,206,79,188,0,235,47,128,192,191,235,234,137,50,
    52,235,231,208,119,254,191,240,95,29,125,7,114,18,201,83,
    17,39,126,20,218,126,216,138,124,147,250,203,68,200,211,46,
    145,137,212,229,203,228,242,191,3,251,219,51,83,151,63,3,
    20,108,144,46,129,9,207,184,241,204,132,126,29,118,13,216,
    44,130,87,128,93,28,166,68,19,104,27,176,103,194,215,5,
    98,120,134,180,136,78,186,6,69,169,252,189,201,78,82,146,
    38,224,89,9,118,75,208,124,188,107,18,176,85,129,248,111,
    240,195,21,22,122,130,133,154,176,139,180,8,123,69,120,86,
    134,53,100,66,104,179,66,234,27,143,119,81,83,68,154,245,
    34,206,118,53,167,46,169,226,249,113,232,116,133,156,193,182,
    221,115,98,167,107,55,253,110,47,16,43,214,210,131,122,85,
    179,69,201,98,207,145,29,139,159,43,144,65,186,61,201,242,
    162,80,200,147,216,104,249,161,103,119,35,111,59,16,242,4,
    9,179,91,126,32,108,155,59,239,119,123,81,44,239,197,113,
    20,91,100,83,6,131,200,201,158,32,139,186,65,148,136,58,
    141,198,195,88,36,94,18,119,171,199,18,105,2,60,87,122,
    216,19,137,27,251,61,137,174,82,18,137,155,164,213,201,73,
    76,146,39,72,26,95,38,232,208,70,39,218,18,219,225,150,
    223,109,172,136,167,34,136,122,93,17,202,198,189,123,55,223,
    124,127,165,209,22,221,91,141,141,109,63,240,26,75,214,131,
    70,175,47,59,81,216,64,204,15,165,64,243,4,141,65,195,
    44,34,207,25,26,98,199,111,219,62,43,103,119,68,208,19,
    241,20,161,151,104,120,99,218,152,52,202,70,193,168,27,83,
    216,42,225,167,96,92,49,79,26,171,62,169,231,146,202,20,
    90,5,29,76,127,5,118,27,122,125,203,132,248,10,133,202,
    38,254,25,228,91,12,152,38,245,153,220,247,5,217,69,161,
    155,5,10,0,5,238,114,120,97,156,33,231,109,242,120,8,
    28,35,37,216,44,131,138,29,12,57,21,76,113,159,40,178,
    147,24,19,133,23,33,249,243,65,9,225,52,160,221,177,44,
    32,116,30,135,250,3,135,99,179,78,19,95,229,168,144,29,
    63,137,118,66,182,61,181,57,129,154,104,147,135,253,207,55,
    54,133,43,147,121,4,158,68,219,53,215,9,195,72,214,28,
    207,171,57,82,198,254,198,182,20,73,77,70,181,133,164,94,
    33,103,207,232,192,202,228,245,123,58,144,200,233,24,72,234,
    139,231,187,18,191,204,242,23,182,127,34,36,6,69,39,242,
    18,196,73,68,91,72,139,38,41,79,33,89,210,195,113,244,
    213,203,58,86,18,17,180,100,149,195,206,73,18,155,135,35,
    156,35,140,158,126,234,4,219,66,18,127,34,29,137,163,82,
    83,13,52,182,24,187,64,90,106,37,201,112,118,24,133,94,
    31,231,232,187,11,52,252,5,142,180,73,160,88,59,135,113,
    54,129,180,12,83,24,119,211,166,75,234,20,211,40,227,8,
    59,79,202,3,123,221,72,139,6,70,219,30,150,150,186,201,
    181,129,245,226,228,171,81,139,30,182,40,152,173,203,68,174,
    16,185,170,85,31,135,254,83,131,250,223,164,49,77,86,218,
    45,164,234,101,9,180,122,32,129,46,238,39,16,150,193,38,
    37,130,73,233,178,159,8,5,50,64,124,39,141,122,74,49,
    116,60,118,231,98,157,205,98,77,147,186,101,29,166,22,197,
    94,62,0,219,185,0,180,200,35,28,125,214,197,81,38,156,
    255,101,76,216,86,38,188,69,99,78,166,113,51,197,241,82,
    53,92,114,186,153,26,148,141,185,130,141,254,28,25,51,111,
    198,57,92,212,214,194,41,94,157,120,133,227,253,130,170,26,
    202,186,170,81,164,8,107,21,224,124,186,234,36,148,228,189,
    56,250,190,95,139,90,53,9,122,14,183,23,146,197,133,228,
    67,44,3,181,59,92,88,84,33,80,169,30,139,94,140,41,
    93,225,47,42,77,109,78,89,59,93,54,208,220,180,130,179,
    151,216,200,92,149,18,25,83,49,26,155,133,171,153,133,105,
    194,31,210,128,85,54,111,1,230,240,83,53,120,86,118,196,
    21,145,247,16,220,139,159,187,100,104,210,85,0,237,22,173,
    166,154,51,171,67,138,89,47,31,136,148,49,40,99,221,64,
    233,43,58,201,202,144,197,5,125,10,52,93,138,251,63,1,
    239,176,12,248,35,80,12,160,171,211,76,225,156,164,15,185,
    114,150,216,191,5,46,54,67,22,53,83,101,156,153,150,35,
    76,200,228,93,102,85,107,220,167,240,83,174,82,237,21,192,
    160,245,168,144,238,161,242,235,81,49,203,81,14,158,99,173,
    57,197,131,201,76,14,234,56,9,177,169,180,45,100,105,187,
    95,244,178,189,15,214,162,113,196,213,9,53,148,77,179,186,
    191,31,85,84,236,47,27,179,102,46,86,94,35,242,122,22,
    38,134,198,254,207,19,156,31,172,206,185,213,201,86,21,241,
    19,154,69,145,231,125,186,204,153,178,47,34,75,133,146,78,
    133,155,89,42,8,46,210,63,242,238,154,168,73,126,223,51,
    13,60,34,225,134,132,78,39,69,16,37,88,47,83,210,240,
    230,209,72,115,202,208,5,140,10,223,129,21,128,237,178,170,
    44,150,185,94,121,149,200,247,99,43,24,228,216,219,129,211,
    221,240,156,59,223,208,112,52,166,171,179,204,212,10,76,231,
    21,160,12,49,70,233,192,95,223,208,138,60,29,91,177,120,
    19,165,103,10,112,106,120,145,203,21,226,81,71,212,186,162,
    187,129,3,119,252,94,173,21,56,109,246,80,33,85,240,115,
    173,160,100,23,15,174,184,9,149,161,213,168,230,70,33,86,
    243,109,87,70,113,205,19,120,196,16,94,237,245,26,47,5,
    53,63,169,57,27,216,235,184,82,69,252,193,196,229,205,156,
    19,183,19,222,183,109,237,80,115,172,30,182,241,8,233,227,
    86,245,91,109,32,117,180,201,234,58,239,78,85,250,224,194,
    136,71,7,217,87,69,236,29,34,175,16,89,128,113,151,255,
    6,74,255,154,134,33,163,149,177,206,84,12,57,125,32,107,
    31,210,83,201,225,220,253,139,121,140,220,85,23,27,105,6,
    151,137,83,76,208,25,150,104,133,150,128,245,170,6,79,50,
    157,100,112,74,131,167,152,158,102,112,90,131,51,76,207,48,
    56,171,193,179,76,207,49,120,94,131,115,76,47,48,120,81,
    131,151,152,94,102,240,138,6,175,50,189,198,224,188,6,107,
    76,175,51,248,130,6,95,100,250,43,6,23,52,248,18,211,
    151,25,172,107,240,21,166,55,24,124,85,131,175,49,125,157,
    193,69,13,54,152,190,193,224,155,26,188,201,244,45,6,223,
    214,224,45,166,239,48,248,174,6,223,99,250,62,131,31,104,
    240,67,166,183,25,252,181,6,239,48,253,13,131,31,105,112,
    137,233,93,6,151,53,184,194,244,30,131,31,107,240,183,76,
    63,97,240,190,6,63,101,250,59,6,63,211,224,3,166,171,
    12,126,174,193,135,76,191,96,208,210,96,147,233,35,6,191,
    212,224,239,153,174,49,248,88,131,79,152,174,51,248,149,190,
    93,251,154,193,111,96,253,91,186,78,34,196,166,37,98,226,
    191,93,34,184,188,142,181,176,122,255,211,149,193,186,249,139,
    205,223,122,11,210,125,227,168,85,193,200,43,55,165,86,133,
    77,67,31,202,242,154,241,85,207,220,144,130,100,187,177,112,
    164,80,190,186,52,70,93,121,121,81,131,183,50,143,105,133,
    178,163,233,187,153,82,123,188,101,238,159,205,29,153,216,129,
    198,26,238,111,241,88,181,203,122,219,166,58,89,237,199,100,
    49,83,255,44,146,80,236,216,131,38,80,71,39,154,142,211,
    235,137,208,219,63,22,113,207,216,156,79,235,215,30,236,239,
    87,241,12,116,22,63,135,211,175,168,162,68,107,200,174,43,
    101,9,55,78,39,114,192,254,164,221,87,255,14,242,11,181,
    69,206,83,75,115,182,42,91,31,100,238,184,56,44,26,165,
    245,241,50,29,184,143,232,197,61,179,186,232,194,47,114,97,
    24,27,238,108,252,167,14,93,113,218,129,223,197,189,4,9,
    60,30,39,9,167,25,15,118,140,152,207,218,35,235,136,217,
    82,111,54,91,252,34,111,12,99,219,137,125,41,236,32,218,
    177,101,39,22,73,199,198,45,141,203,82,159,131,157,134,33,
    195,15,237,149,87,135,38,126,7,207,121,34,72,120,168,163,
    57,72,58,109,205,52,48,220,152,158,120,234,187,194,222,216,
    198,73,250,158,236,140,54,251,33,78,109,246,193,14,249,234,
    104,19,116,252,118,231,144,201,158,135,159,6,61,159,217,108,
    176,123,84,4,90,43,71,197,39,246,238,199,167,181,34,175,
    15,99,219,216,142,19,105,7,34,108,167,70,250,121,46,18,
    74,247,62,121,80,190,56,244,49,39,220,74,72,3,59,198,
    22,139,63,14,31,13,64,27,235,131,240,112,123,170,123,93,
    148,224,110,97,185,180,3,44,225,161,219,31,109,255,17,252,
    218,254,195,187,71,88,248,241,210,218,17,246,167,222,204,254,
    248,101,184,101,29,207,139,237,46,22,123,63,108,143,182,255,
    1,46,109,255,60,56,42,6,150,143,140,144,229,124,132,44,
    175,200,151,70,71,236,198,118,171,133,142,72,252,31,4,75,
    60,38,43,137,159,201,226,58,215,51,92,64,156,121,60,77,
    239,209,99,29,102,213,99,29,234,145,181,97,2,122,78,91,
    216,189,40,240,211,112,249,89,38,146,79,175,173,114,24,95,
    238,31,54,236,242,103,44,113,100,39,73,162,109,5,182,135,
    23,37,220,138,120,135,76,126,60,78,93,190,6,59,70,197,
    192,82,243,168,8,193,222,253,8,89,106,202,203,67,217,238,
    126,105,53,31,177,152,163,250,73,16,191,186,225,175,242,181,
    35,210,179,21,71,184,210,15,228,243,115,61,64,131,205,237,
    39,244,96,255,81,107,193,64,197,58,30,231,193,85,35,87,
    181,46,13,55,236,189,143,239,179,244,35,186,73,36,191,2,
    163,111,195,167,129,27,113,59,113,59,194,203,7,242,241,56,
    245,132,7,59,70,68,173,245,240,136,144,198,206,44,164,173,
    135,195,247,10,233,114,26,71,59,131,113,253,28,236,122,107,
    49,180,87,54,134,102,48,189,215,101,226,70,88,12,92,222,
    71,185,209,118,168,182,98,207,251,76,146,250,108,52,11,239,
    157,57,246,60,17,8,172,122,131,226,217,236,233,107,39,79,
    36,50,142,250,182,173,222,47,224,247,192,182,199,123,93,244,
    30,168,95,69,240,219,34,186,46,42,27,21,227,220,127,248,
    191,82,172,24,124,127,55,240,179,11,165,13,45,254,234,246,
    189,159,88,132,88,167,179,45,56,255,58,64,223,161,241,81,
    139,222,25,173,58,93,245,210,151,95,102,90,180,56,90,47,
    234,93,60,87,19,245,74,134,223,121,168,183,76,120,172,226,
    203,69,190,75,180,22,9,167,168,237,222,90,212,102,88,20,
    225,118,215,94,194,229,243,129,211,227,95,39,116,111,113,229,
    58,196,243,16,75,253,3,39,68,202,5,242,80,255,3,209,
    109,82,238,240,226,145,239,85,134,94,74,239,54,145,45,138,
    251,135,134,80,76,216,169,94,180,243,93,252,225,254,229,32,
    194,205,136,151,242,92,29,205,179,18,117,29,196,135,143,130,
    62,79,37,204,12,244,123,49,61,117,110,0,197,104,243,157,
    128,178,138,28,163,97,62,183,14,213,141,95,211,31,128,248,
    30,114,224,156,207,65,31,139,182,159,160,60,22,118,240,153,
    244,16,76,33,57,252,24,144,127,126,172,105,162,46,252,213,
    43,203,59,180,11,72,62,69,66,175,236,43,167,43,70,217,
    164,31,134,20,140,170,49,101,20,141,201,169,74,161,82,174,
    148,10,152,74,132,204,26,213,66,165,58,105,28,254,63,143,
    233,82,53,231,95,170,24,255,6,158,192,179,71,
};

EmbeddedPython embedded_m5_internal_param_SimpleDRAM(
    "m5/internal/param_SimpleDRAM.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_SimpleDRAM.py",
    "m5.internal.param_SimpleDRAM",
    data_m5_internal_param_SimpleDRAM,
    2941,
    9867);

} // anonymous namespace
