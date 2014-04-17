#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMA_Controller[] = {
    120,156,197,89,239,110,219,200,17,159,37,37,217,146,173,216,
    142,237,252,117,98,165,57,39,234,161,103,245,210,166,215,246,
    130,160,110,28,224,174,104,124,41,117,69,114,106,81,150,38,
    215,22,101,138,84,201,149,125,58,216,95,234,160,237,183,62,
    68,209,15,125,143,62,77,95,162,157,153,37,41,218,150,15,
    1,174,144,99,113,49,220,157,157,221,153,249,205,236,44,227,
    66,250,175,140,207,47,26,0,201,127,4,128,135,63,1,1,
    64,95,64,71,128,144,2,188,101,56,40,67,252,99,240,202,
    240,14,160,99,128,52,224,20,9,19,126,103,64,56,207,115,
    42,16,152,220,35,96,84,3,89,130,78,25,222,132,75,80,
    146,21,56,168,65,252,71,16,66,132,2,222,122,51,224,205,
    194,59,148,142,68,149,5,206,130,87,99,162,10,222,28,19,
    53,24,45,130,156,131,14,10,159,129,78,29,69,125,136,162,
    174,177,168,127,147,40,15,71,86,192,171,19,59,238,229,43,
    226,44,17,39,175,113,141,165,44,100,59,91,132,206,82,70,
    95,47,208,203,5,122,165,64,175,22,232,27,5,250,102,129,
    190,85,160,111,23,232,59,5,250,110,129,94,43,208,247,10,
    244,253,2,189,206,244,2,200,37,232,53,160,247,0,122,223,
    131,61,116,192,98,174,229,67,144,38,244,62,128,206,7,32,
    241,247,16,78,209,71,222,82,97,198,6,207,184,158,207,120,
    196,51,30,67,231,49,72,252,61,210,51,42,208,110,174,162,
    223,253,255,226,191,38,250,29,212,60,54,135,50,78,252,40,
    180,253,112,47,242,13,26,175,80,67,40,113,169,153,73,225,
    242,130,224,242,47,96,172,120,70,10,151,19,64,193,130,116,
    9,12,56,97,226,196,128,81,19,142,5,244,74,224,153,112,
    140,203,148,105,3,251,2,78,13,248,189,73,12,39,216,150,
    208,193,247,161,164,52,86,122,236,96,45,105,6,78,202,112,
    92,134,246,219,99,131,58,14,170,16,255,19,190,89,99,161,
    179,44,212,128,99,108,75,112,90,130,147,10,188,65,38,236,
    234,85,73,125,241,246,24,53,197,158,118,179,132,187,221,41,
    168,75,170,120,126,28,58,125,169,200,18,246,192,137,157,190,
    189,253,106,203,126,17,133,42,142,130,64,198,205,90,198,26,
    37,155,3,71,117,45,158,107,146,81,250,3,197,50,163,80,
    170,57,36,246,252,208,179,251,145,55,12,164,154,37,129,246,
    158,31,72,219,230,193,207,251,131,40,86,47,227,56,138,45,
    178,43,119,6,145,147,207,32,171,186,65,148,200,38,173,198,
    203,88,36,94,17,247,222,128,37,210,6,120,191,52,217,147,
    137,27,251,3,133,238,210,18,137,155,164,53,201,81,220,36,
    54,54,173,223,38,232,212,86,55,58,144,195,240,192,239,183,
    182,229,161,12,162,65,95,134,170,245,242,229,147,143,127,182,
    221,218,151,253,167,173,221,161,31,120,173,173,95,191,254,108,
    171,53,24,169,110,20,182,176,215,15,149,68,35,5,173,73,
    230,217,68,190,235,180,208,145,191,111,251,172,162,221,149,193,
    64,198,117,234,189,67,155,16,139,98,94,84,132,41,154,162,
    142,84,25,31,83,172,25,115,98,199,39,37,93,82,156,64,
    102,102,176,250,7,176,3,209,255,7,6,196,107,4,154,30,
    254,4,121,25,161,211,166,49,131,199,126,67,214,209,189,61,
    147,160,160,59,143,25,104,136,56,228,124,70,190,15,129,209,
    82,134,94,5,52,138,16,124,26,86,241,136,90,100,39,49,
    6,10,47,65,242,247,179,18,194,69,64,235,99,114,193,174,
    27,184,212,159,25,152,237,38,109,124,135,177,161,186,126,18,
    29,133,236,1,162,57,148,218,104,147,215,163,47,118,123,210,
    85,201,58,118,124,21,13,27,174,19,134,145,106,56,158,215,
    112,148,138,253,221,161,146,73,67,69,141,141,164,89,37,151,
    47,101,240,202,229,141,6,25,156,200,245,8,39,253,226,249,
    174,194,151,101,126,97,251,39,82,33,52,186,145,151,96,63,
    137,216,151,202,162,77,170,107,216,108,101,203,49,6,155,149,
    12,49,137,12,246,84,141,193,231,36,137,205,203,81,63,227,
    140,102,31,58,193,80,42,226,79,148,163,112,85,34,245,66,
    83,70,218,45,210,53,83,149,204,103,135,81,232,141,112,167,
    190,187,65,155,184,197,120,155,7,66,220,42,162,109,6,219,
    10,212,17,125,139,134,75,74,149,82,172,49,206,110,144,9,
    128,125,47,210,36,130,152,59,197,84,211,52,56,87,176,118,
    28,136,13,162,104,178,69,144,182,238,82,179,70,205,189,204,
    0,211,179,66,253,188,21,158,208,202,6,171,238,154,169,146,
    121,48,237,156,9,166,219,227,96,194,228,216,166,160,48,40,
    116,198,65,97,146,25,226,231,105,4,80,184,33,8,112,184,
    128,123,54,142,181,72,74,87,50,200,90,132,195,34,24,247,
    11,96,180,200,47,140,68,235,246,101,134,92,191,74,67,238,
    107,67,62,165,149,231,83,12,213,25,59,53,225,18,0,140,
    212,172,108,210,109,36,70,55,201,164,69,99,222,196,3,239,
    77,88,231,147,139,79,63,174,67,116,30,209,54,214,68,137,
    208,182,103,194,141,244,68,74,40,236,7,113,244,245,168,17,
    237,53,20,100,123,120,182,145,108,110,36,159,98,98,104,60,
    231,84,163,83,131,14,254,88,14,98,12,242,42,191,232,192,
    181,57,136,237,244,56,65,163,211,153,198,190,98,83,115,158,
    74,84,76,233,105,202,118,174,229,118,166,109,127,74,203,214,
    216,200,38,220,196,167,38,120,111,118,196,153,146,171,12,30,
    197,231,151,100,110,210,88,2,213,162,86,91,239,156,149,34,
    245,172,199,103,80,51,53,149,172,15,113,141,237,44,236,42,
    144,99,132,30,147,54,77,145,240,87,224,74,76,192,95,128,
    240,128,110,79,99,135,163,148,30,114,235,50,177,255,1,56,
    9,77,56,242,12,29,131,70,154,166,48,68,147,79,152,85,
    159,128,191,130,191,21,50,216,169,9,130,78,43,51,173,181,
    138,167,85,41,143,90,6,210,123,157,72,165,179,225,77,110,
    234,58,9,177,233,64,54,243,64,30,39,195,188,62,194,236,
    52,61,140,205,234,5,109,218,219,231,99,132,209,81,112,87,
    44,27,5,220,252,128,154,143,114,200,136,172,111,42,219,92,
    63,159,187,11,39,152,173,243,229,103,180,151,18,239,126,161,
    194,39,247,89,49,121,128,148,179,0,121,146,7,136,228,52,
    254,142,171,114,106,13,194,193,169,33,240,90,134,229,11,221,
    136,74,32,203,208,169,80,40,113,193,41,210,72,19,89,114,
    163,164,120,230,140,96,11,237,104,219,229,80,208,94,166,230,
    235,41,39,19,114,244,179,192,233,239,122,206,243,93,90,148,
    86,118,179,216,51,50,53,22,139,106,80,220,136,203,52,225,
    215,31,102,234,28,78,57,145,124,140,107,228,106,112,216,120,
    145,203,217,227,203,174,108,244,101,127,23,151,239,250,131,198,
    94,224,236,179,183,204,84,205,47,50,53,21,187,251,252,249,
    156,80,138,218,137,26,110,20,98,214,31,186,42,138,27,158,
    196,43,138,244,26,31,53,248,200,104,248,73,195,217,197,81,
    199,85,58,14,206,6,53,151,129,78,188,159,112,197,119,112,
    68,228,21,120,219,198,203,168,143,165,174,155,153,73,95,144,
    242,252,207,49,162,131,10,143,81,188,122,168,145,78,115,63,
    161,230,251,212,108,192,213,28,19,45,50,32,45,70,6,172,
    96,38,170,10,181,114,33,162,95,211,236,228,98,92,31,189,
    79,92,235,15,45,105,116,87,136,83,206,208,189,152,218,42,
    29,23,157,90,214,57,199,237,60,119,214,179,111,57,215,184,
    115,1,58,139,244,1,130,122,150,40,57,204,124,215,228,192,
    33,117,5,193,228,255,95,115,130,245,228,138,181,176,126,4,
    105,53,113,89,62,16,69,21,235,58,31,244,68,86,188,23,
    245,227,143,4,119,47,129,159,237,198,210,81,82,251,238,206,
    212,181,230,20,163,183,112,144,123,48,83,45,191,204,124,146,
    171,119,202,37,213,104,165,80,94,179,67,197,27,172,127,176,
    4,63,102,11,216,134,174,194,199,72,45,229,134,160,59,73,
    40,143,236,73,198,208,165,54,109,201,25,12,100,232,141,203,
    104,30,153,50,32,40,143,133,48,174,105,176,102,94,193,231,
    98,120,146,114,5,93,217,149,229,60,32,167,239,84,134,114,
    146,185,179,73,31,138,198,105,219,34,103,234,68,157,231,104,
    235,231,185,123,30,93,134,83,175,239,96,241,244,167,161,12,
    93,25,211,205,237,125,89,177,226,226,43,223,153,94,46,81,
    39,78,142,137,37,81,118,128,144,12,221,17,175,244,222,204,
    180,214,2,50,159,235,103,87,114,8,122,50,144,74,78,4,
    159,34,155,164,183,104,15,39,199,209,8,47,119,124,69,194,
    247,192,182,175,226,36,251,41,174,209,133,52,137,210,73,86,
    193,179,108,21,255,170,165,170,224,146,225,220,215,98,189,63,
    106,245,101,96,148,88,156,207,22,114,15,243,7,205,236,192,
    230,200,166,235,236,142,211,215,95,168,248,155,139,245,128,154,
    135,25,72,56,36,245,61,145,175,96,250,2,140,81,204,245,
    12,151,47,214,38,245,223,199,166,255,116,51,83,107,51,87,
    171,157,59,222,96,22,117,103,34,167,53,220,29,189,142,98,
    197,89,226,226,112,123,148,40,217,103,71,22,7,101,56,236,
    219,175,100,63,138,71,175,34,79,170,7,231,198,183,210,98,
    75,179,216,135,146,170,50,213,152,184,196,89,222,11,75,105,
    38,28,212,223,23,249,98,113,113,252,69,16,185,7,210,75,
    121,238,93,206,179,29,245,29,236,159,188,74,219,207,86,89,
    58,55,238,197,52,107,245,92,47,34,209,119,2,255,27,169,
    214,206,27,192,243,98,203,9,247,101,166,251,121,134,177,245,
    83,19,79,54,14,49,140,241,201,72,202,56,184,190,154,200,
    69,233,39,179,234,184,155,107,180,9,167,34,199,95,44,247,
    125,220,70,204,66,207,138,75,15,10,138,11,246,243,196,180,
    80,148,113,5,81,171,47,75,250,131,208,115,250,47,131,228,
    75,108,232,227,104,117,161,42,42,6,125,136,55,69,77,212,
    69,73,204,215,171,102,181,82,45,155,24,217,212,179,44,106,
    102,181,54,47,190,237,111,29,99,191,102,172,207,87,197,255,
    0,140,120,145,107,
};

EmbeddedPython embedded_m5_internal_param_DMA_Controller(
    "m5/internal/param_DMA_Controller.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_DMA_Controller.py",
    "m5.internal.param_DMA_Controller",
    data_m5_internal_param_DMA_Controller,
    2309,
    7243);

} // anonymous namespace
