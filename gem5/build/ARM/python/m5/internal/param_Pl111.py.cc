#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Pl111[] = {
    120,156,197,88,235,115,27,73,17,239,217,149,100,75,182,226,
    119,158,78,172,220,225,139,18,56,139,4,194,1,151,74,145,
    139,83,92,168,138,47,172,15,146,19,20,203,122,119,100,175,
    188,15,213,238,216,137,174,236,47,56,5,124,160,138,63,130,
    226,3,255,7,255,23,116,247,236,174,87,182,204,93,21,68,
    216,210,84,107,30,61,253,248,117,79,207,184,144,253,85,241,
    251,179,22,64,122,201,0,240,240,35,32,0,8,5,116,5,
    8,41,192,91,130,253,42,36,63,4,175,10,239,0,186,6,
    72,3,78,144,48,225,55,6,68,179,188,166,6,129,201,61,
    2,134,13,144,21,232,86,225,85,180,0,21,89,131,253,6,
    36,191,7,33,68,36,224,181,55,5,222,52,188,67,238,72,
    212,153,225,52,120,13,38,234,224,205,48,209,128,225,60,200,
    25,232,34,243,41,232,54,145,213,61,100,117,137,89,253,147,
    88,121,56,178,12,94,147,166,163,44,95,209,204,10,205,228,
    61,46,49,151,185,92,178,121,232,46,228,244,98,137,94,42,
    209,203,37,122,165,68,95,46,209,87,74,244,213,18,125,173,
    68,95,47,209,55,74,244,106,137,190,89,162,111,149,232,181,
    18,221,42,209,183,75,244,7,76,207,129,92,128,254,135,208,
    255,14,244,215,161,135,78,154,47,44,241,17,72,19,250,119,
    160,123,7,36,126,62,130,19,244,163,183,80,90,209,230,21,
    139,197,138,187,188,226,30,116,239,129,196,207,93,189,162,6,
    219,237,21,196,134,255,47,252,107,11,164,212,44,54,135,50,
    73,253,56,178,253,168,23,251,6,141,215,168,33,36,185,212,
    76,101,144,122,74,144,250,7,48,158,60,35,131,212,49,32,
    99,65,186,4,6,28,51,113,108,192,176,13,71,2,250,21,
    240,76,56,194,109,170,36,192,174,128,19,3,126,107,210,132,
    99,108,43,8,130,91,80,81,26,79,125,6,129,230,52,5,
    199,85,56,170,194,246,235,35,131,58,246,235,144,252,29,190,
    94,101,166,211,204,212,128,35,108,43,112,82,129,227,26,188,
    194,73,216,213,175,147,250,226,245,17,106,138,61,219,237,10,
    74,187,85,82,151,84,241,252,36,114,66,201,170,219,3,39,
    113,66,251,101,112,255,254,253,118,35,159,17,167,27,3,71,
    237,89,188,196,36,91,132,3,197,172,226,72,170,25,36,122,
    126,228,217,97,236,29,4,82,77,19,31,187,231,7,210,182,
    121,240,121,56,136,19,245,44,73,226,196,34,115,114,103,16,
    59,197,10,50,166,27,196,169,108,211,110,188,141,69,236,21,
    205,238,13,152,35,9,192,98,210,98,79,166,110,226,15,20,
    122,73,115,164,217,196,173,77,254,225,38,253,18,155,206,175,
    82,244,101,103,47,222,151,7,209,190,31,118,54,229,161,12,
    226,65,40,35,213,121,246,236,193,253,159,108,118,118,101,248,
    176,179,115,224,7,94,231,137,245,162,51,24,170,189,56,234,
    96,159,31,41,137,150,9,58,37,155,108,224,240,34,113,127,
    227,239,218,62,235,101,239,201,96,32,147,38,245,94,167,157,
    197,188,152,21,53,97,138,182,104,34,85,197,175,41,86,141,
    25,177,229,147,102,46,105,75,128,50,115,8,253,13,216,89,
    232,235,125,3,146,85,2,72,31,63,130,60,138,48,217,166,
    49,131,199,126,73,38,209,189,125,147,220,174,59,143,24,84,
    136,46,156,249,136,252,28,1,35,163,10,253,26,104,196,32,
    208,52,132,146,33,181,56,157,216,24,200,188,2,233,95,71,
    57,68,243,128,38,199,100,131,93,151,113,171,63,48,8,183,
    219,36,248,22,3,66,237,249,105,252,38,98,179,19,205,216,
    217,70,155,188,28,126,177,211,151,174,74,215,176,227,171,248,
    160,229,58,81,20,171,150,227,121,45,71,169,196,223,57,80,
    50,109,169,184,181,158,182,235,228,231,133,28,83,5,191,225,
    32,199,16,249,27,49,164,127,120,190,171,240,199,18,255,96,
    251,167,82,33,30,246,98,47,197,126,98,177,43,149,69,66,
    170,75,216,60,201,183,99,224,181,107,57,76,82,25,244,84,
    131,17,231,164,169,205,219,81,63,131,139,86,31,58,193,129,
    84,52,63,85,142,194,93,137,212,27,77,2,94,87,73,193,
    92,63,178,153,29,197,145,55,68,241,124,119,157,118,190,202,
    32,155,5,130,217,10,66,108,10,219,26,52,17,114,243,134,
    75,154,84,50,128,49,184,46,147,222,192,14,23,89,150,64,
    160,157,96,46,105,27,156,12,88,37,14,185,22,81,180,216,
    34,28,91,55,168,89,165,230,102,174,245,123,86,189,121,86,
    245,7,180,157,193,250,186,102,166,89,17,54,91,35,97,115,
    237,52,108,48,229,109,19,252,13,10,146,83,248,155,164,123,
    242,56,195,58,5,22,186,27,135,75,8,103,139,88,243,164,
    105,45,7,167,69,136,43,195,110,183,4,59,139,156,193,152,
    179,174,93,100,189,181,137,91,111,87,91,239,33,109,55,155,
    161,165,201,40,105,8,151,92,109,100,182,100,59,110,34,49,
    188,66,118,44,91,240,10,158,93,175,162,38,31,66,124,144,
    113,217,161,211,132,54,172,38,42,132,171,158,9,151,179,195,
    37,165,168,30,36,241,219,97,43,238,181,20,228,50,60,90,
    79,55,214,211,79,49,238,91,143,57,147,232,200,215,177,157,
    200,65,130,49,92,231,31,58,46,109,142,81,59,59,34,208,
    210,116,80,179,131,216,190,156,134,82,149,80,246,153,132,113,
    27,133,113,73,214,79,105,175,6,91,214,132,43,248,109,8,
    22,200,142,57,251,113,149,192,163,248,253,140,108,76,106,74,
    160,122,211,218,214,226,178,38,164,147,117,103,4,31,239,87,
    15,235,30,50,222,204,163,170,6,5,26,232,107,146,164,4,
    244,63,1,151,79,2,254,8,228,121,116,112,22,26,28,132,
    244,37,7,46,209,244,223,1,39,150,49,103,151,161,67,204,
    200,82,15,70,96,250,9,79,213,71,217,47,224,207,165,172,
    116,98,130,160,99,199,204,10,164,242,177,83,41,130,146,33,
    243,173,142,150,202,104,244,146,111,246,156,148,166,233,56,53,
    139,56,61,77,112,69,117,131,201,231,61,163,105,90,239,98,
    147,64,207,79,177,68,57,253,134,88,50,74,8,249,30,53,
    31,23,224,16,121,223,251,147,109,237,108,18,46,157,63,182,
    78,124,159,147,0,21,22,121,174,198,103,38,175,46,96,95,
    205,97,255,160,128,189,228,52,252,142,107,101,106,13,114,244,
    137,33,240,66,133,133,6,221,101,42,32,171,208,173,81,128,
    112,61,40,178,248,17,121,158,162,252,54,146,227,217,26,91,
    218,78,133,175,181,27,169,121,59,137,188,64,158,124,20,56,
    225,142,231,60,150,180,19,109,231,230,17,101,228,178,207,151,
    101,167,104,16,23,137,207,63,191,159,235,112,56,137,156,112,
    95,123,73,203,206,17,224,197,46,39,130,47,247,100,43,148,
    225,14,238,185,231,15,90,189,192,217,101,191,152,153,110,95,
    228,186,41,118,236,217,147,52,165,108,179,21,183,220,56,194,
    84,125,224,170,56,105,121,18,239,10,210,107,125,220,226,60,
    223,242,211,150,179,131,163,142,171,52,186,71,227,147,75,51,
    39,217,77,185,10,219,127,67,228,164,252,106,227,13,208,199,
    154,179,151,219,70,95,79,138,164,205,101,166,14,21,60,240,
    240,14,160,134,58,77,253,136,154,187,212,172,195,4,115,123,
    7,248,117,3,82,50,85,13,51,73,93,240,109,137,39,188,
    164,185,233,249,16,253,203,183,9,81,253,218,145,5,106,141,
    102,202,41,186,120,82,91,167,212,222,109,228,157,51,220,206,
    114,103,51,239,188,196,237,28,119,206,231,175,44,11,220,185,
    8,221,37,186,246,83,207,50,5,255,212,127,27,252,28,61,
    147,138,155,224,127,26,243,214,131,255,135,232,214,15,32,59,
    248,47,138,119,81,214,171,169,227,189,47,242,50,186,172,20,
    223,198,23,71,65,103,187,137,116,148,212,206,185,62,25,13,
    57,93,232,125,163,194,69,185,26,197,21,226,147,66,149,19,
    174,116,134,203,165,250,150,61,38,94,97,89,130,53,240,17,
    107,107,27,186,12,62,197,95,165,80,122,14,155,72,190,177,
    75,138,235,18,151,36,113,6,3,25,121,167,229,43,143,76,
    194,209,148,138,18,56,173,48,176,86,93,198,239,249,0,171,
    232,228,145,235,197,190,170,22,33,53,33,175,49,46,223,228,
    254,226,183,185,211,116,107,145,183,116,130,45,114,171,245,211,
    194,254,183,206,128,78,70,206,14,94,28,92,103,160,14,18,
    73,119,162,111,154,130,245,14,167,244,209,110,117,227,204,170,
    129,255,86,6,120,75,137,221,125,230,250,159,198,137,37,165,
    224,82,31,95,37,203,243,15,35,151,249,140,235,167,245,132,
    86,164,217,149,28,90,158,12,164,146,101,160,41,178,74,118,
    61,245,36,158,166,241,16,47,80,124,35,193,223,129,109,79,
    236,12,250,49,50,222,167,29,72,80,58,131,106,120,10,173,
    240,127,189,82,23,124,176,159,121,83,213,98,125,23,242,234,
    123,152,90,156,149,230,10,215,242,251,95,126,194,114,204,210,
    77,113,203,9,245,219,14,63,92,88,183,169,249,48,71,7,
    71,157,190,141,241,157,71,223,45,49,62,185,234,224,34,195,
    218,160,126,66,118,248,112,35,215,103,67,235,243,235,200,125,
    30,13,14,20,191,64,134,15,217,199,231,103,109,251,161,126,
    238,82,11,103,198,189,196,65,122,229,76,47,218,219,119,2,
    255,107,201,69,246,121,126,79,194,29,103,51,116,208,15,190,
    43,213,181,177,115,62,115,82,249,115,223,189,64,238,151,129,
    163,122,113,18,170,155,99,135,159,71,42,121,26,99,19,7,
    252,206,52,70,165,97,170,100,120,78,95,25,29,132,246,11,
    25,198,201,240,69,236,73,117,251,204,248,147,172,132,211,83,
    236,67,73,181,158,106,141,215,114,100,238,5,166,197,193,204,
    180,227,77,245,148,66,73,122,217,156,241,218,242,156,205,56,
    36,87,172,158,21,216,243,18,203,137,118,101,46,235,120,49,
    94,250,113,230,141,241,227,167,222,34,140,230,131,28,202,227,
    92,74,71,231,72,15,215,108,167,231,37,71,112,34,119,125,
    116,66,194,92,70,102,103,167,10,197,24,187,175,156,45,202,
    43,39,21,237,250,246,163,95,104,30,83,154,75,187,216,208,
    187,100,125,174,46,106,6,61,124,155,162,33,154,162,34,102,
    155,117,179,94,171,87,77,204,8,212,179,36,26,102,189,49,
    43,190,249,127,13,243,70,195,88,107,214,197,191,1,238,64,
    55,103,
};

EmbeddedPython embedded_m5_internal_param_Pl111(
    "m5/internal/param_Pl111.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_Pl111.py",
    "m5.internal.param_Pl111",
    data_m5_internal_param_Pl111,
    2354,
    7121);

} // anonymous namespace
