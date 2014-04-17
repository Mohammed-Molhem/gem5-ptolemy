#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TsunamiPChip[] = {
    120,156,197,88,235,115,219,198,17,223,3,72,74,164,68,75,
    178,228,183,108,193,73,84,179,153,70,108,220,186,105,27,143,
    167,142,229,153,184,147,40,42,148,214,14,251,64,33,224,72,
    129,194,131,3,156,228,48,35,125,169,60,109,191,245,143,232,
    244,67,255,143,254,77,253,218,238,238,1,16,168,71,155,153,
    118,104,137,188,89,222,99,239,118,247,183,143,59,15,242,191,
    58,126,127,102,1,100,255,20,0,62,126,4,132,0,145,128,
    158,0,33,5,248,203,176,95,135,244,135,224,215,225,13,64,
    207,0,105,192,9,18,38,252,218,128,120,158,215,52,32,52,
    185,71,192,184,5,178,6,189,58,188,140,151,160,38,27,176,
    223,130,244,247,32,132,136,5,188,242,103,192,159,133,55,200,
    29,137,38,51,156,5,191,197,68,19,252,57,38,90,48,94,
    4,57,7,61,100,62,3,189,54,178,122,31,89,93,97,86,
    255,32,86,62,142,172,128,223,166,233,120,150,175,104,102,141,
    102,242,30,87,152,203,66,113,178,69,232,45,21,244,213,10,
    189,92,161,87,42,244,181,10,125,189,66,223,168,208,55,43,
    244,173,10,125,187,66,223,169,208,171,21,250,110,133,190,87,
    161,215,42,180,197,244,2,200,37,24,222,135,225,59,48,124,
    23,250,104,140,197,82,226,247,64,154,48,92,135,222,58,72,
    252,188,7,39,104,47,127,169,178,226,59,188,226,106,185,226,
    1,175,232,64,175,3,18,63,15,244,138,6,236,116,174,33,
    6,130,127,225,95,7,49,0,106,30,155,67,153,102,65,18,
    59,65,220,79,2,131,198,27,212,16,98,60,106,102,114,232,
    60,35,232,252,29,24,55,190,145,67,231,24,144,177,32,89,
    66,3,142,153,56,54,96,220,129,35,1,195,26,248,38,28,
    225,54,117,58,192,64,192,137,1,191,49,105,194,49,182,53,
    52,246,61,168,41,141,155,33,27,91,115,154,129,227,58,28,
    213,97,231,213,145,65,29,251,77,72,255,6,223,172,50,211,
    89,102,106,192,17,182,53,56,169,193,113,3,94,226,36,236,
    26,54,73,124,241,234,8,37,197,158,157,78,13,79,187,85,
    17,151,68,241,131,52,118,35,169,150,145,118,70,110,234,70,
    206,151,217,1,118,5,219,207,246,130,81,167,85,76,76,178,
    141,145,171,246,108,94,105,146,74,162,145,98,142,73,44,213,
    28,18,253,32,246,157,40,241,15,66,169,102,137,157,211,15,
    66,233,56,60,248,34,26,37,169,122,158,166,73,106,147,86,
    185,51,76,220,114,5,233,212,11,147,76,118,104,55,222,198,
    38,246,138,102,247,71,204,145,14,192,167,165,197,190,204,188,
    52,24,41,52,150,230,72,179,137,91,135,204,196,77,246,91,
    108,186,191,204,208,164,221,189,100,95,30,196,251,65,212,221,
    148,135,50,76,70,145,140,85,247,249,243,135,31,254,100,179,
    59,144,209,163,238,238,65,16,250,221,167,159,109,127,250,180,
    59,26,171,189,36,238,98,111,16,43,137,42,10,187,231,149,
    179,129,179,174,210,54,175,131,129,19,176,128,206,158,12,71,
    50,109,83,239,109,58,130,88,20,243,162,33,76,209,17,109,
    164,234,248,53,197,170,49,39,182,2,18,209,35,177,9,96,
    102,1,169,191,2,27,15,109,191,111,64,186,74,128,25,226,
    71,144,133,17,54,59,52,102,240,216,47,72,55,186,119,104,
    18,12,116,231,17,131,12,209,134,51,31,147,221,99,96,164,
    212,97,216,0,141,32,4,158,134,84,58,166,22,167,19,27,
    3,153,215,32,251,203,36,135,120,17,80,247,24,100,176,235,
    58,110,245,7,6,229,78,135,14,190,197,200,80,123,65,150,
    188,142,89,255,68,179,27,237,160,78,182,199,95,236,14,165,
    167,178,53,236,248,42,57,176,60,55,142,19,101,185,190,111,
    185,74,165,193,238,129,146,153,165,18,107,61,235,52,201,224,
    75,5,184,74,126,227,81,1,38,50,60,130,73,255,240,3,
    79,225,15,70,173,195,250,207,164,66,96,236,37,126,134,253,
    196,98,32,149,77,135,84,87,176,121,90,108,199,8,236,52,
    10,188,100,50,236,171,22,67,207,205,50,135,183,163,126,70,
    25,173,62,116,195,3,169,104,126,166,92,133,187,18,169,55,
    154,42,206,110,146,164,133,160,164,60,39,78,98,127,76,115,
    188,117,58,194,77,70,219,60,16,222,174,33,214,102,176,109,
    64,27,177,183,104,120,36,82,45,71,26,163,236,58,41,0,
    216,242,34,15,31,136,184,19,12,50,29,131,163,4,203,198,
    78,104,17,69,139,109,2,180,125,135,154,85,106,238,22,226,
    79,75,7,237,179,58,120,72,251,26,44,184,103,230,34,150,
    142,180,53,225,72,183,78,29,9,131,226,14,57,132,65,110,
    115,234,16,38,41,33,125,146,163,159,92,13,1,128,195,21,
    204,179,106,236,69,18,185,81,192,213,38,12,86,129,56,168,
    0,209,38,171,48,10,237,91,151,169,113,237,237,169,113,160,
    213,248,136,246,157,207,241,211,102,220,180,132,71,198,55,114,
    165,178,66,55,145,24,223,32,133,86,85,121,3,211,220,203,
    184,205,249,138,115,30,87,34,58,130,104,13,107,162,70,72,
    235,155,112,61,207,67,25,57,252,40,77,190,30,91,73,223,
    82,80,156,225,241,122,182,177,158,125,140,33,193,122,194,65,
    70,7,5,237,246,169,28,165,232,222,77,254,161,93,214,97,
    247,117,242,52,130,42,167,156,206,150,98,69,115,132,202,84,
    74,129,105,170,90,110,149,90,166,67,127,76,155,182,88,197,
    38,220,192,111,75,240,201,156,132,35,36,87,22,60,138,223,
    79,72,217,36,175,4,170,69,237,29,125,110,22,137,132,179,
    31,76,32,102,74,2,217,239,227,14,155,133,195,53,160,196,
    7,125,77,58,50,249,192,159,128,107,47,1,127,4,194,2,
    154,60,247,26,246,79,250,146,73,151,105,250,239,128,131,207,
    5,137,206,208,222,103,228,225,9,157,51,251,136,167,234,188,
    247,115,248,115,37,114,157,152,32,40,71,153,121,117,85,205,
    81,181,210,95,25,68,223,42,15,213,38,29,155,140,180,231,
    102,52,77,187,176,89,186,240,105,16,44,107,34,140,75,211,
    194,215,172,222,206,161,147,189,56,69,23,37,128,59,98,217,
    168,96,230,123,212,124,80,194,69,20,125,83,56,228,218,217,
    136,93,201,90,142,142,146,159,210,73,106,124,246,133,6,151,
    14,85,38,165,99,212,11,199,120,88,58,134,228,208,253,134,
    43,112,106,13,66,192,137,33,240,58,134,229,10,221,132,106,
    32,235,208,107,144,11,113,121,41,114,15,19,69,72,163,80,
    56,145,23,88,59,91,90,111,37,8,180,125,169,249,122,170,
    33,132,76,252,56,116,163,93,223,125,66,138,200,104,95,175,
    240,57,163,16,98,177,42,4,249,139,184,76,14,254,249,253,
    66,152,195,169,134,143,15,65,95,160,88,8,118,22,63,241,
    56,102,124,185,39,173,72,70,187,184,57,206,181,250,161,59,
    96,75,153,185,144,95,20,66,42,54,245,217,124,156,81,96,
    218,74,44,47,137,49,206,31,120,42,73,45,95,226,101,68,
    250,214,7,22,39,9,43,200,44,119,23,71,93,79,105,252,
    79,186,50,151,124,110,58,200,184,186,219,127,77,228,212,45,
    237,224,149,51,192,162,214,47,148,164,47,66,101,196,231,58,
    86,59,19,166,77,188,100,168,177,14,109,63,162,230,187,212,
    172,195,219,72,12,93,220,97,151,182,34,229,53,48,250,52,
    5,95,139,170,243,182,105,101,118,222,155,119,191,141,55,235,
    103,149,220,167,27,52,83,206,208,205,151,218,38,165,135,94,
    171,120,164,153,227,206,121,122,17,193,11,62,245,92,33,239,
    159,249,95,189,159,189,102,234,254,50,252,191,58,189,253,240,
    173,202,96,255,0,242,34,225,50,135,23,85,1,219,218,225,
    135,162,168,198,171,210,241,125,255,214,133,24,115,188,84,186,
    74,106,171,221,158,178,196,28,63,244,1,194,210,118,133,88,
    229,205,228,163,82,180,19,174,146,198,43,149,106,153,77,41,
    94,98,73,131,21,245,17,75,239,24,186,168,62,69,104,173,
    84,2,93,228,98,249,218,57,175,8,93,55,211,129,220,209,
    72,198,254,105,77,204,35,83,5,2,133,168,24,78,139,20,
    44,128,87,240,123,222,37,73,176,138,156,108,196,122,233,132,
    211,54,39,3,56,43,12,217,89,128,106,60,182,201,140,58,
    2,151,193,215,254,105,105,152,123,23,163,83,233,46,186,122,
    253,183,41,88,50,233,247,21,253,155,149,200,160,247,101,40,
    149,188,192,228,138,78,147,95,67,125,137,249,46,25,227,253,
    136,239,25,248,59,116,156,233,39,135,31,131,126,60,205,40,
    123,81,114,104,96,122,184,38,154,181,166,224,252,123,230,137,
    85,159,141,244,169,235,233,113,102,115,236,88,40,245,202,239,
    128,69,254,99,79,162,219,224,150,27,233,167,29,126,174,176,
    239,83,243,110,97,26,118,2,125,209,226,91,140,190,63,162,
    215,112,113,192,181,128,189,81,40,55,122,180,81,136,180,49,
    33,18,63,68,70,143,248,37,230,252,164,157,113,166,100,164,
    238,156,25,148,241,65,228,124,46,163,36,29,127,158,248,82,
    221,63,51,254,52,175,74,244,20,231,80,82,249,162,172,11,
    183,152,156,123,110,43,61,9,7,245,163,27,215,222,231,199,
    159,133,137,183,47,253,124,206,221,203,231,108,38,145,139,253,
    23,239,178,19,20,187,44,157,25,247,83,90,117,237,76,47,
    34,44,112,195,224,27,169,86,207,42,192,247,83,219,141,7,
    178,144,253,246,133,27,110,135,174,234,39,105,116,201,137,95,
    196,42,125,150,96,147,132,151,40,239,19,55,11,188,237,32,
    65,112,7,158,188,68,172,211,113,66,89,49,168,86,8,114,
    23,113,33,76,79,118,113,49,116,46,51,177,71,166,114,16,
    32,70,82,102,55,185,42,15,216,228,43,108,182,11,130,66,
    149,195,212,189,88,223,68,244,11,203,19,122,123,207,126,133,
    13,189,52,54,23,154,162,97,208,155,182,41,90,162,45,106,
    98,190,221,52,155,141,102,221,68,79,167,158,101,209,50,155,
    173,121,241,159,255,215,48,30,180,140,181,185,166,248,55,178,
    25,84,152,
};

EmbeddedPython embedded_m5_internal_param_TsunamiPChip(
    "m5/internal/param_TsunamiPChip.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_TsunamiPChip.py",
    "m5.internal.param_TsunamiPChip",
    data_m5_internal_param_TsunamiPChip,
    2275,
    7072);

} // anonymous namespace
