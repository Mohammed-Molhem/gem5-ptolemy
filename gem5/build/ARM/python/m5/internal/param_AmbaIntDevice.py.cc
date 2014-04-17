#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AmbaIntDevice[] = {
    120,156,197,88,95,115,219,198,17,223,3,72,74,164,68,75,
    178,100,203,127,228,8,105,170,132,206,52,98,227,214,77,59,
    241,120,234,88,158,214,157,177,226,130,237,216,97,51,69,33,
    224,72,129,2,1,14,112,146,195,140,244,82,121,218,190,245,
    67,116,250,208,239,209,239,213,236,238,1,16,40,81,113,102,
    146,210,18,113,179,184,219,219,187,221,253,237,222,30,60,200,
    254,170,248,252,218,2,72,13,3,192,199,159,128,16,96,40,
    160,43,64,72,1,254,42,28,84,33,249,57,248,85,120,13,
    208,53,64,26,112,138,132,9,127,50,32,90,228,57,53,8,
    77,238,17,48,110,128,172,64,183,10,47,162,21,168,200,26,
    28,52,32,249,11,8,33,34,1,47,253,57,240,231,225,53,
    74,71,162,206,2,231,193,111,48,81,7,127,129,137,6,140,
    151,65,46,64,23,133,207,65,183,137,162,62,68,81,87,88,
    212,127,73,148,143,35,107,224,55,137,29,247,242,5,113,86,
    136,147,215,184,194,82,150,242,157,45,67,119,37,167,175,150,
    232,213,18,189,86,162,175,149,232,235,37,122,189,68,223,40,
    209,55,75,244,173,18,125,187,68,111,148,232,59,37,250,157,
    18,189,89,162,173,18,253,46,211,75,32,87,96,240,35,24,
    188,7,131,31,67,15,29,179,92,104,191,5,210,132,193,251,
    208,125,31,36,254,182,224,20,125,231,175,148,102,124,192,51,
    174,22,51,90,60,227,46,116,239,130,196,95,75,207,168,65,
    167,117,13,241,16,252,15,255,90,2,41,181,136,205,145,76,
    210,32,142,156,32,234,197,129,65,227,53,106,8,61,30,53,
    115,25,140,30,19,140,254,3,140,33,223,200,96,116,2,40,
    88,144,46,161,1,39,76,156,24,48,110,193,177,128,65,5,
    124,19,142,113,153,42,109,160,47,224,212,128,47,77,98,56,
    193,182,130,142,127,7,42,74,99,104,192,142,215,146,230,224,
    164,10,199,85,232,188,60,54,168,227,160,14,201,191,225,235,
    13,22,58,207,66,13,56,198,182,2,167,21,56,169,193,11,
    100,194,174,65,157,212,23,47,143,81,83,236,233,180,42,184,
    219,221,146,186,164,138,31,36,145,59,148,106,13,105,103,228,
    38,238,208,121,52,220,115,159,70,106,71,30,5,158,108,53,
    114,206,56,221,30,185,106,223,230,169,38,217,100,56,82,44,
    50,142,164,90,64,162,23,68,190,51,140,253,195,80,170,121,
    146,231,244,130,80,58,14,15,62,29,142,226,68,61,73,146,
    56,177,201,172,220,25,198,110,49,131,140,234,133,113,42,91,
    180,26,47,99,147,120,69,220,189,17,75,164,13,240,118,105,
    178,47,83,47,9,70,10,189,165,37,18,55,73,107,145,159,
    184,73,191,196,166,253,199,20,125,218,222,143,15,228,97,116,
    16,12,219,168,153,12,227,209,80,70,170,253,228,201,189,143,
    127,181,211,238,203,225,253,246,222,97,16,250,237,71,246,179,
    246,104,172,246,227,168,141,125,65,164,36,90,40,108,79,177,
    205,54,178,93,165,85,94,5,125,39,96,253,156,125,25,142,
    100,210,164,222,91,180,3,177,44,22,69,77,152,162,37,154,
    72,85,241,49,197,134,177,32,118,3,210,208,35,173,9,96,
    102,14,169,127,1,59,15,125,127,96,64,178,65,128,25,224,
    79,144,135,17,54,29,26,51,120,236,247,100,26,221,59,48,
    9,6,186,243,152,65,134,104,67,206,7,228,247,8,24,41,
    85,24,212,64,35,8,129,167,33,149,140,169,69,118,18,99,
    160,240,10,164,255,156,148,16,45,3,154,30,19,14,118,93,
    199,165,254,202,160,236,180,104,227,187,12,12,181,31,164,241,
    171,136,205,79,52,135,81,7,109,242,124,252,249,222,64,122,
    42,221,196,142,47,226,67,203,115,163,40,86,150,235,251,150,
    171,84,18,236,29,42,153,90,42,182,182,210,86,157,252,189,
    146,99,171,144,55,30,229,88,34,191,35,150,244,139,31,120,
    10,95,86,249,133,237,159,74,133,184,216,143,253,20,251,73,
    68,95,42,155,54,169,174,96,243,40,95,142,1,216,170,229,
    112,73,101,216,83,13,70,158,155,166,14,47,71,253,12,50,
    154,125,228,134,135,82,17,127,170,92,133,171,18,169,23,154,
    37,204,110,144,162,185,158,100,59,39,138,35,127,140,219,12,
    188,45,218,193,13,6,219,34,16,220,174,33,212,230,176,173,
    65,19,161,183,108,120,164,81,37,3,26,131,236,58,233,15,
    236,120,145,101,15,4,220,41,230,152,150,193,73,130,85,227,
    16,180,136,162,201,54,225,217,190,77,205,6,53,119,114,237,
    103,100,130,230,121,19,220,163,101,13,214,219,51,51,13,139,
    48,218,157,8,163,155,103,97,132,41,177,67,225,96,80,208,
    156,133,131,73,54,72,30,102,216,167,64,67,247,227,112,9,
    241,108,25,123,153,52,174,229,96,181,9,129,101,24,246,75,
    48,180,201,41,140,65,251,230,101,86,220,124,107,86,236,107,
    43,222,167,101,23,51,244,52,25,53,13,225,145,235,141,204,
    166,108,207,29,36,198,235,100,207,178,37,215,241,140,123,17,
    53,249,176,226,3,143,75,18,157,62,180,129,53,81,33,156,
    245,76,184,158,29,66,41,69,251,40,137,191,26,91,113,207,
    82,144,239,225,193,86,186,189,149,126,138,249,192,122,200,25,
    70,103,4,29,243,137,28,37,24,219,117,126,209,241,234,112,
    236,58,217,17,130,22,167,3,157,29,197,118,230,244,148,170,
    132,178,210,44,141,220,40,140,76,123,254,148,214,108,176,133,
    77,88,199,167,33,120,99,78,204,217,145,171,10,30,197,231,
    51,178,53,169,43,129,106,82,187,163,183,205,26,145,110,246,
    7,19,120,153,141,62,246,135,184,192,78,30,109,53,40,208,
    65,143,73,59,166,0,248,59,112,217,37,224,111,64,72,64,
    135,103,33,195,193,73,15,57,116,149,216,255,12,156,120,166,
    156,113,134,14,61,35,75,77,24,153,233,39,204,170,143,188,
    223,193,63,74,89,235,212,4,65,199,147,153,21,86,229,227,
    169,82,4,43,67,232,59,29,65,149,201,168,38,31,237,187,
    41,177,233,248,53,139,248,61,75,128,69,53,132,73,105,70,
    232,154,215,171,57,180,177,167,103,216,162,220,127,91,172,26,
    37,196,252,132,154,143,10,176,136,188,239,255,191,199,205,243,
    201,186,116,94,57,58,65,254,150,54,82,225,173,47,213,56,
    47,77,72,41,194,162,154,135,197,189,34,44,36,167,237,215,
    92,123,83,107,16,0,78,13,129,151,50,44,84,232,62,84,
    1,89,133,110,141,2,136,235,74,145,197,151,200,243,25,173,
    55,113,38,176,117,118,181,221,10,12,104,247,82,243,213,44,
    243,7,121,248,65,232,14,247,124,247,161,79,43,210,178,94,
    30,113,70,174,195,114,89,7,138,22,113,153,26,252,250,211,
    92,151,163,89,230,142,143,129,111,218,90,7,142,20,63,246,
    56,97,252,97,95,90,67,57,220,195,181,247,131,145,213,11,
    221,62,251,201,204,116,252,60,215,81,177,163,207,159,196,41,
    101,165,221,216,242,226,8,83,252,161,167,226,196,242,37,222,
    65,164,111,125,100,241,249,96,5,169,229,238,225,168,235,41,
    141,254,201,56,230,82,207,77,250,41,87,117,7,175,136,156,
    181,159,29,188,105,6,88,203,202,220,70,250,250,83,36,123,
    46,95,117,40,225,129,137,119,11,53,214,105,237,23,212,220,
    165,102,11,222,194,153,208,6,125,33,78,201,116,53,204,60,
    117,193,117,208,4,227,115,154,155,94,12,229,211,239,18,202,
    250,203,10,50,200,26,12,230,184,157,167,19,161,91,207,59,
    27,220,46,112,231,98,222,217,228,246,10,119,46,229,249,96,
    153,59,87,160,123,53,255,180,179,74,185,161,246,125,115,3,
    7,213,172,195,233,224,7,77,9,246,189,183,169,130,253,51,
    200,234,135,203,210,129,1,165,178,254,19,157,14,180,95,176,
    202,24,175,149,106,77,86,87,188,192,146,0,235,209,99,174,
    84,29,67,151,164,103,78,228,67,158,63,23,172,99,19,201,
    87,206,20,196,234,178,147,208,225,142,70,50,242,207,74,74,
    30,153,165,181,40,204,71,112,118,202,99,253,184,134,207,69,
    212,86,116,162,205,245,100,116,86,11,156,222,122,11,78,62,
    44,82,218,218,68,74,179,201,139,58,137,21,249,75,187,100,
    115,122,2,193,20,169,156,232,112,72,119,150,55,242,96,193,
    193,165,91,246,174,110,95,194,223,199,74,132,228,125,219,56,
    201,226,111,9,120,241,127,247,91,214,245,101,232,142,89,218,
    155,185,72,102,61,219,31,247,176,139,21,57,8,95,165,146,
    211,0,169,200,90,217,21,211,151,120,162,197,99,188,252,240,
    45,130,132,56,206,204,243,255,47,129,211,140,78,57,148,255,
    107,120,119,164,255,122,165,46,248,136,61,247,245,84,111,142,
    14,109,93,47,143,83,155,19,192,82,225,125,254,194,151,159,
    113,28,233,100,167,93,119,168,191,218,240,167,8,155,12,108,
    191,151,99,135,99,84,223,163,248,150,162,111,135,24,213,124,
    254,243,113,111,111,83,63,81,195,251,219,185,86,219,90,171,
    207,220,84,254,6,125,107,240,40,251,224,34,211,243,208,85,
    189,56,25,170,59,83,135,209,42,201,227,24,155,56,228,207,
    52,23,57,58,227,84,73,13,196,242,160,36,180,62,147,195,
    56,25,63,139,125,201,208,41,143,63,202,42,23,205,226,28,
    73,42,113,148,53,117,137,73,222,11,75,105,38,28,212,31,
    228,56,134,46,142,63,14,99,239,64,250,25,207,116,109,153,
    103,39,30,186,216,63,125,149,78,144,175,178,114,110,220,79,
    104,214,181,115,189,136,209,192,13,131,175,165,218,56,111,0,
    223,79,108,55,234,203,92,247,233,11,62,15,98,13,203,75,
    212,34,232,158,241,76,183,31,2,33,240,206,152,230,117,124,
    50,7,87,53,211,36,229,87,150,162,135,107,34,6,209,68,
    180,112,212,38,178,31,32,10,146,162,70,42,102,101,39,14,
    197,19,111,110,90,246,40,75,152,117,164,235,219,136,254,194,
    242,144,190,187,167,47,177,161,239,140,245,165,186,168,25,244,
    65,219,20,13,209,20,21,177,216,172,155,245,90,189,106,98,
    54,160,158,85,209,48,235,141,69,241,166,255,77,204,25,13,
    99,115,177,46,190,1,13,136,98,116,
};

EmbeddedPython embedded_m5_internal_param_AmbaIntDevice(
    "m5/internal/param_AmbaIntDevice.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_AmbaIntDevice.py",
    "m5.internal.param_AmbaIntDevice",
    data_m5_internal_param_AmbaIntDevice,
    2298,
    7083);

} // anonymous namespace
