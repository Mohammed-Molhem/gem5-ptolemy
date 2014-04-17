#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherTap[] = {
    120,156,197,88,109,111,27,199,17,158,189,59,82,34,37,90,
    148,37,89,126,145,35,22,133,16,54,104,196,196,137,147,180,
    49,140,184,149,129,36,40,20,231,152,66,54,91,244,114,226,
    45,201,163,200,59,226,110,105,135,134,244,165,50,218,126,40,
    208,31,81,244,67,255,71,255,87,59,51,123,123,58,74,17,
    16,160,45,35,241,22,123,187,123,179,59,51,207,51,59,187,
    93,200,254,74,248,124,214,0,72,19,1,16,224,79,192,8,
    96,44,160,35,64,72,1,193,6,156,148,32,249,16,130,18,
    188,1,232,88,32,45,56,199,138,13,191,179,32,90,229,111,
    202,48,178,185,69,192,172,10,210,129,78,9,142,162,117,112,
    100,25,78,170,144,124,11,66,136,72,192,243,96,9,130,101,
    120,131,210,177,82,97,129,203,16,84,185,82,129,96,133,43,
    85,152,213,65,174,64,7,133,47,65,167,134,162,222,65,81,
    55,88,212,191,72,84,128,61,155,16,212,104,56,174,229,5,
    141,116,104,36,207,113,131,165,172,153,149,213,161,179,110,234,
    55,11,245,141,66,125,179,80,223,226,250,26,200,117,24,222,
    130,225,54,12,111,67,15,13,81,207,103,187,3,210,134,225,
    93,232,220,5,137,191,59,112,142,182,10,214,11,95,220,227,
    47,110,230,95,236,240,23,247,161,115,31,36,254,118,244,23,
    101,104,55,183,208,254,225,191,241,175,137,246,7,181,138,197,
    75,153,164,97,28,121,97,212,139,67,139,250,203,84,144,183,
    186,84,44,101,110,251,53,185,237,159,192,62,11,172,204,109,
    103,128,130,5,233,50,178,224,140,43,103,22,204,154,112,42,
    96,232,64,96,195,41,78,83,162,5,244,5,156,91,240,123,
    155,6,156,97,233,160,161,223,2,71,105,159,13,217,208,90,
    210,18,156,149,224,180,4,237,231,167,22,53,156,84,32,249,
    7,188,222,97,161,203,44,212,130,83,44,29,56,119,224,172,
    12,71,56,8,155,134,21,82,95,60,63,69,77,177,165,221,
    116,112,181,135,5,117,73,149,32,76,34,127,44,213,26,214,
    189,137,159,248,99,239,169,26,200,228,27,127,210,172,154,65,
    113,186,63,241,213,192,229,175,108,50,199,120,162,88,90,28,
    73,181,130,149,94,24,5,222,56,14,166,35,169,150,73,148,
    215,11,71,210,243,184,243,139,241,36,78,212,211,36,137,19,
    151,44,202,141,163,216,207,191,32,123,118,71,113,42,155,52,
    27,79,227,146,120,69,163,123,19,150,72,11,224,149,210,199,
    129,76,187,73,56,81,232,40,45,145,70,147,180,38,185,136,
    139,244,5,22,173,223,166,232,206,214,32,62,145,211,232,36,
    28,183,14,228,75,57,138,39,99,25,169,214,211,167,15,222,
    255,197,65,171,47,199,15,91,199,211,112,20,180,158,252,230,
    217,231,79,90,147,153,26,196,81,11,91,195,72,73,52,207,
    168,53,111,152,125,28,113,147,166,120,21,246,189,144,149,243,
    6,114,52,145,73,141,90,239,210,244,162,46,86,69,89,216,
    162,41,106,88,43,225,99,139,29,107,69,28,134,164,94,151,
    84,38,96,217,6,74,127,7,118,26,250,252,196,130,100,135,
    128,50,196,159,32,207,34,92,218,212,103,113,223,215,100,23,
    221,58,180,201,253,186,241,148,193,133,40,195,145,143,200,223,
    17,48,66,74,48,44,131,70,14,2,78,67,41,153,81,137,
    195,73,140,133,194,29,72,255,54,47,33,170,3,218,29,137,
    141,77,183,112,170,63,50,24,219,77,90,248,33,163,66,13,
    194,52,126,21,177,237,169,206,244,105,163,77,158,205,190,58,
    30,202,174,74,119,177,225,69,60,109,116,253,40,138,85,195,
    15,130,134,175,84,18,30,79,149,76,27,42,110,236,165,205,
    10,57,123,221,0,43,151,55,155,24,32,145,211,17,72,250,
    37,8,187,10,95,54,248,133,237,159,74,133,160,24,196,65,
    138,237,36,162,47,149,75,139,84,55,176,120,98,166,99,244,
    53,203,6,43,169,28,245,84,149,97,231,167,169,199,211,81,
    59,35,140,190,126,233,143,166,82,209,248,84,249,10,103,165,
    170,158,104,97,24,187,77,90,26,37,201,112,94,20,71,193,
    12,215,24,118,247,104,250,219,140,180,85,32,172,109,33,206,
    150,176,44,67,13,113,87,183,186,164,142,147,161,140,17,118,
    139,148,7,246,186,200,66,6,162,237,28,3,75,211,226,200,
    192,122,49,249,26,84,163,143,93,2,179,123,143,138,29,42,
    238,27,213,23,161,127,237,178,254,15,104,78,139,149,238,218,
    153,122,57,129,14,231,8,116,231,130,64,24,4,219,68,4,
    139,232,114,65,4,155,12,144,60,206,80,79,20,67,199,99,
    119,1,235,108,22,183,78,234,150,13,76,93,194,94,17,128,
    253,2,0,93,242,8,163,207,189,115,157,9,119,127,28,19,
    246,181,9,31,210,156,171,25,110,106,140,151,170,232,146,211,
    173,204,160,108,204,3,172,204,182,201,152,69,51,110,227,150,
    118,20,213,120,111,226,253,141,119,124,29,53,180,117,117,197,
    33,132,245,108,184,149,237,57,41,145,124,146,196,223,205,26,
    113,175,161,192,172,225,209,94,186,191,151,126,138,97,160,241,
    152,3,139,14,4,154,234,137,156,36,72,233,10,191,104,154,
    122,76,89,47,219,54,208,220,180,127,179,151,216,200,28,149,
    82,149,80,48,90,152,133,171,185,133,105,193,159,210,132,85,
    54,175,13,219,248,84,5,175,202,139,57,34,114,6,193,189,
    248,252,138,12,77,186,74,160,124,207,109,235,53,179,58,164,
    152,251,246,28,82,22,160,140,251,14,74,63,48,36,43,67,
    142,11,122,108,90,46,225,254,207,192,249,149,128,63,1,97,
    0,93,157,49,133,57,73,15,185,114,131,134,255,1,56,216,
    124,207,166,102,105,198,89,89,56,66,66,166,31,243,80,189,
    199,125,9,127,41,68,170,115,27,4,237,71,118,150,65,21,
    247,35,39,231,40,131,231,7,237,57,206,60,153,201,65,3,
    63,165,97,154,182,118,78,219,139,160,151,231,62,24,139,22,
    129,171,101,61,149,71,171,250,226,2,85,20,236,239,137,13,
    171,128,149,159,83,241,110,14,19,97,218,254,207,11,220,189,
    28,157,11,187,147,167,35,226,231,180,10,135,215,189,86,102,
    141,140,128,156,8,37,67,132,7,57,17,36,135,232,55,156,
    89,83,105,145,215,207,45,129,71,28,76,71,232,116,225,128,
    44,65,167,76,148,225,212,81,100,140,18,38,124,81,216,155,
    139,255,108,149,67,109,175,220,241,218,167,84,124,183,176,112,
    65,70,120,52,242,199,199,129,255,248,57,77,71,115,118,13,
    199,44,163,64,189,168,0,241,67,92,167,3,191,190,103,20,
    121,185,176,80,241,62,74,207,21,96,98,4,113,151,227,195,
    55,3,217,24,203,241,49,78,60,8,39,141,222,200,239,179,
    135,236,76,193,175,140,130,138,93,124,121,191,77,41,8,29,
    198,141,110,28,97,44,159,118,85,156,52,2,137,7,12,25,
    52,222,109,240,70,208,8,211,134,127,140,189,126,87,105,188,
    207,211,150,83,57,63,233,167,156,181,157,188,162,234,66,61,
    236,225,241,49,196,68,245,133,49,144,62,216,228,81,157,115,
    83,77,30,220,22,241,224,160,102,58,132,125,68,197,207,168,
    216,131,69,7,255,22,74,63,162,105,200,104,101,140,50,21,
    193,235,52,99,158,209,23,233,85,230,254,245,135,48,87,95,
    75,100,252,45,211,72,185,68,167,87,42,43,20,254,59,85,
    211,184,194,229,42,55,214,76,227,13,46,215,184,177,110,174,
    67,214,185,241,38,116,54,232,238,128,90,54,41,38,44,253,
    183,49,129,249,180,80,38,121,255,211,80,224,62,248,209,214,
    239,126,0,89,154,112,93,24,16,69,229,106,58,12,12,133,
    201,193,139,154,241,201,126,235,10,2,189,110,34,125,37,181,
    167,238,46,80,83,142,38,122,114,63,247,151,81,39,63,135,
    124,156,171,116,206,249,209,108,179,144,31,179,251,196,17,38,
    51,152,67,159,178,214,158,165,211,232,11,68,58,185,242,116,
    203,16,201,87,222,188,1,116,150,76,139,241,39,19,25,5,
    23,25,48,247,44,204,241,31,105,226,231,169,9,166,187,155,
    248,92,165,30,41,84,208,143,29,87,202,201,182,72,23,50,
    88,135,198,121,124,255,119,17,149,93,114,157,142,195,121,8,
    118,127,153,59,227,246,85,36,30,79,123,233,107,58,90,93,
    223,137,201,17,95,40,240,155,218,190,58,44,152,142,39,44,
    226,186,62,146,192,22,196,151,239,27,196,247,79,215,8,224,
    62,35,128,94,216,105,76,170,64,142,164,146,151,160,165,72,
    251,236,96,27,72,220,97,227,25,158,186,248,4,131,239,35,
    207,91,236,150,244,9,74,167,51,68,74,68,160,45,169,140,
    155,210,22,255,87,156,138,224,29,255,210,37,173,94,219,91,
    96,178,245,89,234,114,92,90,203,253,200,183,137,102,215,101,
    182,210,25,243,208,31,235,75,34,190,252,112,127,66,197,79,
    13,20,152,108,250,8,199,103,36,125,42,69,102,114,58,194,
    217,135,187,79,237,116,204,31,63,220,55,42,237,23,84,58,
    32,247,89,220,127,205,176,118,56,214,23,103,106,253,82,127,
    144,248,88,223,186,212,138,86,15,253,81,248,90,170,251,215,
    79,155,73,36,165,77,55,139,191,58,100,197,192,71,191,115,
    62,48,23,126,25,22,137,236,135,41,202,97,33,133,225,89,
    104,250,196,88,225,18,16,139,159,46,20,67,58,227,214,55,
    6,143,73,197,244,51,44,232,198,172,178,86,17,101,139,238,
    101,109,81,21,53,225,136,213,90,197,174,148,43,37,27,113,
    70,45,27,162,106,87,170,171,194,252,239,34,230,170,214,110,
    173,34,254,3,79,185,189,175,
};

EmbeddedPython embedded_m5_internal_param_EtherTap(
    "m5/internal/param_EtherTap.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_EtherTap.py",
    "m5.internal.param_EtherTap",
    data_m5_internal_param_EtherTap,
    2168,
    6594);

} // anonymous namespace
