#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMA_Controller[] = {
    120,156,197,89,239,110,219,200,17,159,37,37,217,146,173,216,
    142,237,252,117,98,229,114,78,212,67,207,234,165,77,175,237,
    5,65,211,56,64,175,64,124,41,117,69,114,234,31,150,38,
    215,18,101,138,84,201,149,125,58,216,95,234,160,237,183,62,
    68,209,15,125,143,123,154,190,68,59,51,75,82,180,45,31,
    2,180,80,98,113,49,220,157,157,221,153,249,205,236,44,227,
    66,250,175,140,207,207,27,0,201,191,5,128,135,63,1,1,
    192,64,64,71,128,144,2,188,85,56,40,67,252,35,240,202,
    240,22,160,99,128,52,224,20,9,19,126,107,64,184,200,115,
    42,16,152,220,35,96,92,3,89,130,78,25,94,135,43,80,
    146,21,56,168,65,252,71,16,66,132,2,222,120,115,224,205,
    195,91,148,142,68,149,5,206,131,87,99,162,10,222,2,19,
    53,24,47,131,92,128,14,10,159,131,78,29,69,125,132,162,
    174,176,168,111,73,148,135,35,107,224,213,137,29,247,242,21,
    113,150,136,147,215,184,194,82,150,178,157,45,67,103,37,163,
    175,22,232,213,2,189,86,160,215,11,244,181,2,125,189,64,
    223,40,208,55,11,244,173,2,125,187,64,111,20,232,59,5,
    250,110,129,222,100,122,9,228,10,244,27,208,191,7,253,15,
    96,31,29,176,156,107,121,31,164,9,253,15,161,243,33,72,
    252,221,135,83,244,145,183,82,152,177,197,51,174,230,51,30,
    240,140,135,208,121,8,18,127,15,244,140,10,180,155,235,232,
    119,255,63,248,175,137,126,7,181,136,205,161,140,19,63,10,
    109,63,220,143,124,131,198,43,212,16,74,92,106,230,82,184,
    60,39,184,252,11,24,43,158,145,194,229,4,80,176,32,93,
    2,3,78,152,56,49,96,220,132,99,1,253,18,120,38,28,
    227,50,101,218,64,87,192,169,1,191,51,137,225,4,219,18,
    58,248,46,148,148,198,74,159,29,172,37,205,193,73,25,142,
    203,208,126,115,108,80,199,65,21,226,127,194,55,27,44,116,
    158,133,26,112,140,109,9,78,75,112,82,129,215,200,132,93,
    253,42,169,47,222,28,163,166,216,211,110,150,112,183,187,5,
    117,73,21,207,143,67,103,32,21,89,194,30,58,177,51,176,
    119,94,62,179,159,71,161,138,163,32,144,113,179,150,177,70,
    201,246,208,81,61,139,231,154,100,148,193,80,177,204,40,148,
    106,1,137,125,63,244,236,65,228,141,2,169,230,73,160,189,
    239,7,210,182,121,240,243,193,48,138,213,139,56,142,98,139,
    236,202,157,65,228,228,51,200,170,110,16,37,178,73,171,241,
    50,22,137,87,196,189,63,100,137,180,1,222,47,77,246,100,
    226,198,254,80,161,187,180,68,226,38,105,77,114,20,55,201,
    239,177,105,253,38,65,167,182,122,209,129,28,133,7,254,160,
    181,35,15,101,16,13,7,50,84,173,23,47,30,125,242,211,
    157,86,87,14,30,183,246,70,126,224,181,158,89,47,91,195,
    177,234,69,97,11,251,252,80,73,52,81,208,154,102,156,109,
    228,187,74,203,28,249,93,219,103,5,237,158,12,134,50,174,
    83,239,45,218,130,88,22,139,162,34,76,209,20,117,164,202,
    248,152,98,195,88,16,187,62,169,232,146,218,4,49,51,3,
    213,63,128,221,135,222,63,48,32,222,32,200,244,241,39,200,
    199,8,156,54,141,25,60,246,107,178,141,238,237,155,4,4,
    221,121,204,48,67,188,33,231,19,242,124,8,140,149,50,244,
    43,160,49,132,208,211,160,138,199,212,34,59,137,49,80,120,
    9,146,191,159,149,16,46,3,218,30,83,11,118,93,195,165,
    254,204,176,108,55,105,227,187,140,12,213,243,147,232,40,100,
    251,19,205,129,212,70,155,188,26,127,177,215,151,174,74,54,
    177,227,171,104,212,112,157,48,140,84,195,241,188,134,163,84,
    236,239,141,148,76,26,42,106,108,37,205,42,57,124,37,3,
    87,46,111,60,204,192,68,142,71,48,233,23,207,119,21,190,
    172,242,11,219,63,145,10,129,209,139,188,4,251,73,68,87,
    42,139,54,169,174,96,243,44,91,142,17,216,172,100,120,73,
    100,176,175,106,12,61,39,73,108,94,142,250,25,101,52,251,
    208,9,70,82,17,127,162,28,133,171,18,169,23,154,41,206,
    110,144,166,153,162,100,60,59,140,66,111,140,251,244,221,45,
    218,194,13,70,219,34,16,222,214,17,107,115,216,86,160,142,
    216,91,54,92,82,169,148,34,141,81,118,141,12,0,236,121,
    145,38,16,68,220,41,166,153,166,193,121,130,117,227,32,108,
    16,69,147,45,2,180,117,155,154,13,106,238,100,234,207,202,
    6,245,243,54,120,68,235,26,172,184,107,166,42,230,129,180,
    123,38,144,110,78,2,9,211,98,155,2,194,160,176,153,4,
    132,73,70,136,159,166,232,167,80,67,0,224,112,1,243,108,
    26,107,153,84,174,100,112,181,8,131,69,32,118,11,64,180,
    200,43,140,66,235,230,101,102,220,124,127,102,236,106,51,62,
    166,117,23,83,252,212,25,55,53,225,146,243,141,212,168,108,
    208,29,36,198,215,201,160,69,83,94,199,131,238,117,88,231,
    19,139,79,61,174,63,116,6,209,22,214,68,137,144,182,111,
    194,181,244,36,74,40,224,135,113,244,245,184,17,237,55,20,
    100,123,120,178,149,108,111,37,159,97,74,104,60,229,36,163,
    147,130,14,251,88,14,99,12,239,42,191,232,144,181,57,124,
    237,244,24,65,147,211,89,198,158,98,67,115,134,74,84,76,
    137,105,166,86,174,229,86,166,77,127,70,139,214,216,196,38,
    92,199,167,38,120,103,118,196,25,146,107,11,30,197,231,23,
    100,108,210,87,2,85,160,86,91,239,155,85,34,229,172,135,
    103,16,51,35,133,172,143,112,133,157,44,224,42,144,227,131,
    30,147,182,76,49,240,87,224,234,75,192,95,128,176,128,46,
    79,163,134,227,147,30,114,233,42,177,255,1,56,249,76,57,
    232,12,29,125,70,154,158,48,56,147,79,153,85,159,123,191,
    130,191,21,50,215,169,9,130,206,40,51,173,175,138,103,84,
    41,143,87,6,209,59,157,67,165,179,129,77,78,234,57,9,
    177,233,16,54,243,16,158,36,193,188,38,194,188,52,43,124,
    205,235,229,108,218,217,231,19,116,209,1,112,91,172,26,5,
    204,124,159,154,143,115,184,136,172,111,6,155,220,60,159,177,
    11,167,150,173,179,228,47,105,39,37,222,251,82,133,207,234,
    179,98,242,208,40,103,161,241,40,15,13,201,201,251,45,87,
    225,212,26,132,129,83,67,224,53,12,11,22,186,1,149,64,
    150,161,83,161,32,226,2,83,164,49,38,178,164,70,201,240,
    204,201,192,246,217,213,150,203,97,160,61,76,205,215,51,77,
    34,228,228,39,129,51,216,243,156,167,123,180,36,173,235,102,
    81,103,100,74,44,23,149,160,136,17,151,233,193,175,63,200,
    148,57,156,105,2,249,4,87,200,149,224,112,241,34,151,179,
    198,151,61,217,24,200,193,30,46,222,243,135,141,253,192,233,
    178,167,204,84,201,47,50,37,21,187,250,252,137,156,80,106,
    218,141,26,110,20,98,166,31,185,42,138,27,158,196,235,136,
    244,26,31,55,248,152,104,248,73,195,217,195,81,199,85,58,
    2,206,6,51,23,125,78,220,77,184,190,59,56,34,114,230,
    158,182,241,218,233,99,89,235,102,70,210,87,161,60,231,115,
    116,232,112,194,131,19,175,25,106,172,147,219,143,169,249,30,
    53,91,240,62,142,134,22,25,143,150,34,227,85,48,255,84,
    133,90,187,16,201,175,104,118,114,49,158,143,222,37,158,245,
    7,149,52,170,43,196,41,231,232,254,75,109,149,142,136,78,
    45,235,92,224,118,145,59,235,217,55,155,43,220,185,4,157,
    101,250,208,64,61,43,148,20,230,254,215,164,192,193,52,243,
    48,242,255,175,185,192,122,244,94,117,176,126,8,105,245,112,
    89,30,16,69,5,235,58,15,244,69,86,166,23,181,227,15,
    1,183,47,129,158,237,198,210,81,82,251,237,214,140,117,230,
    196,162,55,112,144,123,47,83,44,191,180,124,154,43,119,202,
    5,212,120,173,80,72,179,51,197,107,172,118,176,216,62,102,
    253,109,67,215,219,19,140,150,114,51,208,221,35,148,71,246,
    52,83,232,162,154,182,228,12,135,50,244,38,5,51,143,204,
    20,12,148,189,66,152,84,48,88,29,175,225,115,49,44,73,
    181,130,166,236,198,114,30,136,179,118,40,131,56,201,92,217,
    164,15,65,147,84,109,145,35,117,114,206,243,178,245,179,220,
    53,15,46,67,168,55,112,176,84,250,211,72,134,174,140,233,
    126,246,174,172,88,95,241,197,238,76,47,23,163,83,39,199,
    196,146,40,59,64,56,134,238,152,87,122,103,102,90,107,9,
    153,207,245,179,35,57,248,60,25,72,37,167,2,79,145,77,
    210,155,178,135,147,227,104,140,87,56,190,10,225,123,96,219,
    179,63,189,126,130,43,244,32,77,157,116,122,85,240,252,90,
    199,191,106,169,42,184,68,56,247,37,88,239,142,90,93,244,
    143,19,139,243,216,82,238,95,254,88,153,29,209,28,211,116,
    101,221,117,6,250,251,19,127,83,177,238,81,115,63,131,8,
    7,163,190,13,242,85,75,95,114,49,126,185,126,225,114,197,
    218,166,254,187,216,12,30,111,103,106,109,231,106,181,115,183,
    27,204,162,110,77,229,180,70,123,227,87,81,172,56,63,92,
    28,110,143,19,37,7,236,198,226,160,12,71,3,251,165,28,
    68,241,248,101,228,73,117,239,220,248,179,180,184,210,44,246,
    161,164,42,76,53,166,46,113,150,247,194,82,154,9,7,245,
    215,67,190,68,92,28,127,30,68,238,129,244,82,158,59,151,
    243,236,68,3,7,251,167,175,210,246,179,85,86,206,141,123,
    49,205,90,63,215,139,56,244,157,192,255,70,170,141,243,6,
    240,188,216,114,194,174,204,116,63,207,48,177,126,106,226,233,
    198,33,134,9,62,25,73,25,7,215,84,83,185,40,249,100,
    86,157,116,115,93,54,229,52,228,232,139,101,215,199,109,196,
    44,244,172,184,244,136,160,184,96,63,79,77,10,69,25,51,
    143,89,125,49,210,159,124,158,210,127,6,36,95,98,67,159,
    62,171,75,85,81,49,232,35,187,41,106,162,46,74,98,177,
    94,53,171,149,106,217,196,184,166,158,85,81,51,171,181,69,
    241,93,127,155,24,249,53,99,115,177,42,254,11,220,116,135,
    83,
};

EmbeddedPython embedded_m5_internal_param_DMA_Controller(
    "m5/internal/param_DMA_Controller.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_DMA_Controller.py",
    "m5.internal.param_DMA_Controller",
    data_m5_internal_param_DMA_Controller,
    2305,
    7205);

} // anonymous namespace
