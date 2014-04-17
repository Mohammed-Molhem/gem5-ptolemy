#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCPU[] = {
    120,156,205,90,237,123,19,199,17,159,59,189,216,146,45,108,
    99,155,87,131,149,16,131,32,196,78,72,200,43,165,1,76,
    18,82,48,68,34,33,113,251,244,122,214,173,173,147,79,119,
    202,221,10,162,62,230,75,157,167,237,135,62,79,251,165,127,
    65,159,126,232,255,209,255,171,157,153,189,61,157,44,9,220,
    16,68,193,154,103,111,118,118,118,103,231,183,179,179,123,87,
    135,248,95,14,127,159,150,1,162,243,38,128,131,127,6,120,
    0,45,3,54,13,48,132,1,206,60,236,230,32,124,15,156,
    28,252,8,176,105,130,48,97,31,11,25,248,181,9,254,52,
    183,201,131,151,97,142,1,221,34,136,44,108,230,224,145,63,
    7,89,145,135,221,34,132,191,3,195,48,124,3,190,117,38,
    192,153,132,31,81,59,22,10,172,112,18,156,34,23,10,224,
    76,113,161,8,221,89,16,83,176,137,202,39,96,179,132,170,
    46,161,170,35,172,234,223,164,202,193,154,5,112,74,36,142,
    99,249,142,36,179,36,201,125,28,97,45,51,122,100,179,176,
    57,167,203,71,83,229,249,84,121,33,85,94,76,149,143,165,
    202,199,83,229,19,169,242,201,84,249,84,170,124,58,85,94,
    74,149,207,164,202,103,83,229,229,84,185,156,42,191,150,42,
    191,158,42,159,75,149,223,224,242,12,136,57,104,174,64,243,
    60,52,47,192,54,58,111,54,153,161,10,136,12,52,47,194,
    230,69,16,248,87,129,125,244,175,51,151,106,113,137,91,28,
    77,90,188,201,45,46,195,230,101,16,248,247,166,106,145,135,
    90,101,17,49,227,254,7,255,85,12,44,201,105,36,143,69,
    24,185,129,111,185,254,118,224,154,84,159,39,66,8,171,19,
    153,136,161,118,139,160,246,47,96,156,57,102,12,181,167,128,
    138,13,178,197,51,225,41,23,158,154,208,173,192,158,1,205,
    44,56,25,216,195,110,114,52,128,29,3,246,77,248,77,134,
    4,158,34,205,34,56,206,66,86,42,156,53,25,28,74,211,
    4,60,205,193,94,14,106,223,238,153,196,216,45,64,248,79,
    248,253,18,43,157,100,165,38,236,33,205,194,126,22,158,230,
    225,17,10,33,171,89,32,243,141,111,247,208,82,228,212,42,
    89,28,237,70,202,92,50,197,113,67,223,110,9,121,4,203,
    86,219,14,237,150,117,211,142,196,173,7,95,87,138,90,38,
    136,86,219,182,108,84,185,81,134,102,163,213,150,172,44,240,
    133,156,194,194,182,235,59,86,43,112,58,158,144,147,164,201,
    218,118,61,97,89,92,121,167,213,14,66,121,59,12,131,176,
    74,19,202,76,47,176,147,22,52,157,117,47,136,68,133,122,
    227,110,170,164,94,146,244,118,155,53,210,0,120,160,212,216,
    17,81,61,116,219,18,253,164,52,146,52,105,171,144,135,152,
    68,223,32,89,251,58,66,111,174,53,130,93,209,241,119,221,
    214,218,186,120,44,188,160,221,18,190,92,187,125,251,202,59,
    31,173,175,237,136,214,213,181,173,142,235,57,107,55,170,247,
    214,218,93,217,8,252,53,228,185,190,20,56,55,222,90,223,
    172,172,162,192,81,210,255,196,221,177,92,182,204,106,8,175,
    45,194,18,113,79,81,223,198,172,49,109,228,141,140,81,49,
    74,88,202,225,47,99,44,153,83,198,134,75,182,213,201,94,
    2,85,70,195,232,31,192,14,67,127,239,154,16,46,17,72,
    154,248,103,144,87,17,42,53,170,51,185,238,43,154,20,197,
    109,102,200,245,138,185,199,192,66,132,161,228,53,242,181,15,
    140,142,28,52,243,160,80,131,96,83,48,10,187,68,81,156,
    212,152,168,60,11,209,95,251,53,248,179,128,147,142,129,8,
    89,199,176,171,63,48,16,107,21,26,248,6,67,66,54,220,
    40,120,226,243,196,83,153,151,78,13,231,228,65,247,254,86,
    83,212,101,180,140,140,239,130,78,185,110,251,126,32,203,182,
    227,148,109,41,67,119,171,35,69,84,150,65,121,37,170,20,
    200,211,115,26,85,137,190,110,91,163,136,60,142,40,82,15,
    142,91,151,248,48,207,15,60,255,145,144,136,136,70,224,68,
    200,39,21,59,66,86,105,144,12,231,27,186,59,134,94,37,
    175,129,18,9,111,91,22,25,115,118,20,89,220,29,241,25,
    94,212,250,177,237,117,132,36,249,72,218,18,123,165,162,234,
    104,60,0,59,65,38,106,11,105,214,44,63,240,157,46,14,
    208,173,175,80,223,39,24,102,211,64,64,91,68,144,77,32,
    205,67,9,65,55,107,214,201,150,108,12,49,134,215,49,178,
    28,216,229,70,28,43,16,106,251,24,81,42,38,135,4,54,
    138,151,93,153,74,212,184,74,72,174,158,38,178,68,228,140,
    182,251,165,27,95,58,104,252,21,234,208,100,139,235,153,216,
    182,100,233,108,244,45,157,147,189,165,131,161,175,70,75,192,
    164,133,210,91,2,25,178,62,188,30,227,157,22,23,186,28,
    171,83,40,231,57,169,206,146,173,121,13,208,42,161,46,13,
    189,157,20,244,170,228,14,198,93,245,228,168,249,91,126,5,
    243,183,163,230,239,42,117,56,29,35,166,196,72,41,26,117,
    114,183,25,207,38,207,228,58,22,186,199,105,38,211,115,120,
    28,119,177,71,126,137,183,35,222,210,56,49,81,193,66,77,
    173,42,100,9,91,219,25,56,22,111,51,17,173,237,118,24,
    252,208,45,7,219,101,9,122,12,215,86,162,213,149,232,19,
    92,253,229,235,28,79,212,250,87,43,60,20,237,16,87,114,
    129,31,212,234,180,120,165,90,241,86,129,115,77,91,54,187,
    136,103,152,131,81,36,67,138,65,227,153,222,98,50,189,52,
    218,79,168,183,34,207,109,6,142,227,175,104,240,144,172,128,
    163,32,103,12,92,139,191,155,52,203,100,168,0,202,73,171,
    53,53,96,182,133,172,170,94,232,195,200,203,182,164,122,9,
    85,175,235,181,149,135,4,17,244,203,208,88,9,238,127,2,
    78,166,12,248,35,144,247,209,201,241,2,225,165,72,63,114,
    226,60,137,255,22,56,192,12,217,197,76,181,208,204,56,4,
    225,58,140,62,96,81,181,169,125,9,127,78,69,167,253,12,
    24,180,1,101,226,116,41,189,1,101,147,165,201,176,57,212,
    38,147,237,95,195,228,157,134,29,145,152,90,173,153,100,181,
    246,2,93,146,233,96,8,122,233,136,154,84,253,88,52,164,
    59,61,60,81,116,63,109,204,155,41,148,92,38,242,86,2,
    16,67,243,94,230,232,150,15,134,227,212,94,100,169,16,248,
    5,13,33,203,131,158,201,243,4,199,237,19,248,231,52,252,
    191,79,224,47,56,36,255,200,249,51,81,147,220,189,111,26,
    120,248,194,196,131,206,61,89,16,57,216,204,235,243,218,4,
    157,15,226,115,214,132,62,103,77,198,231,172,248,8,54,165,
    143,96,211,250,8,86,162,117,70,129,135,225,173,127,28,240,
    40,80,246,109,23,60,161,27,106,170,19,192,40,44,16,249,
    97,60,1,134,224,112,205,179,91,91,142,125,125,135,250,162,
    14,235,122,97,154,122,244,179,233,209,211,162,50,70,25,192,
    143,111,107,43,30,143,39,184,188,131,170,147,209,243,82,114,
    130,58,71,148,135,13,81,110,137,214,22,246,218,112,219,229,
    109,207,222,97,223,100,98,235,238,107,235,36,99,227,224,198,
    28,81,216,218,8,202,245,192,199,184,223,169,203,32,44,59,
    2,15,32,194,41,191,85,230,77,163,236,70,101,123,11,107,
    237,186,84,139,164,127,161,115,182,103,135,59,17,39,118,187,
    79,168,56,62,223,90,120,180,116,49,145,109,36,190,213,168,
    76,124,91,82,214,55,13,157,163,164,29,203,7,158,185,222,
    34,163,197,41,235,141,251,157,216,214,83,48,174,76,131,246,
    233,164,243,102,159,57,102,236,208,207,83,206,84,230,32,84,
    255,50,204,162,133,148,69,210,222,21,247,241,32,254,89,24,
    180,122,123,125,245,189,177,89,70,1,35,61,136,221,23,241,
    213,252,128,175,132,243,10,188,53,149,120,139,187,247,126,46,
    248,109,123,157,168,241,240,238,205,232,85,192,47,233,188,245,
    34,230,28,77,99,47,144,182,119,7,99,203,216,237,225,251,
    150,164,119,255,5,215,211,137,52,234,200,231,152,62,147,226,
    154,12,218,175,100,77,209,168,15,14,36,120,9,70,222,13,
    108,231,255,194,72,61,144,182,54,178,66,183,18,189,84,95,
    221,185,113,106,133,7,165,182,8,101,87,165,182,239,19,185,
    72,132,14,251,213,15,137,124,76,228,26,145,235,68,62,37,
    114,147,200,58,140,245,208,176,70,139,142,250,160,120,157,199,
    4,181,96,228,241,215,251,207,231,207,184,193,3,106,29,13,
    102,129,95,153,135,200,2,213,229,59,10,136,60,52,39,152,
    78,210,209,1,211,190,152,89,100,58,197,204,105,205,44,49,
    61,194,204,25,205,156,101,58,199,204,163,154,57,207,116,129,
    153,139,154,121,140,233,113,102,158,208,204,147,76,79,49,243,
    180,102,46,49,61,195,204,179,154,185,204,180,204,204,215,52,
    243,117,166,231,152,249,134,102,174,48,61,207,204,11,154,89,
    97,122,145,153,151,52,243,77,166,151,153,249,150,102,174,50,
    93,99,230,219,154,249,14,211,43,204,124,87,51,223,99,122,
    149,153,239,107,230,7,76,63,100,230,71,154,249,49,211,79,
    152,121,77,51,127,193,244,58,51,127,169,153,159,50,189,193,
    204,155,154,121,139,233,58,51,111,107,230,103,76,63,103,230,
    23,154,121,135,233,151,204,252,149,102,222,101,122,143,153,27,
    154,121,159,233,3,102,126,165,15,6,85,102,214,96,243,161,
    62,27,124,77,89,126,30,94,48,203,231,36,121,124,233,113,
    39,9,126,63,71,114,95,189,242,106,6,95,125,23,226,171,
    130,81,137,189,14,235,108,217,7,73,88,223,231,11,133,238,
    66,234,42,137,13,53,30,225,233,223,48,140,61,142,252,150,
    169,110,156,122,142,203,66,58,11,241,197,19,171,47,218,168,
    251,36,194,130,221,110,11,223,73,109,3,115,99,155,33,138,
    224,127,131,222,81,222,200,192,2,254,6,209,73,198,164,108,
    99,20,230,18,60,142,45,247,96,151,254,61,217,167,190,233,
    219,167,170,183,137,204,246,111,74,236,128,149,131,161,222,114,
    2,139,239,204,35,233,214,35,60,232,96,34,67,215,144,135,
    148,140,80,146,144,52,164,78,46,13,104,240,59,173,135,141,
    80,216,142,234,226,153,2,164,153,124,209,99,201,197,1,121,
    87,110,177,166,225,53,164,130,95,126,201,45,89,30,144,216,
    238,248,117,122,31,101,209,169,83,176,154,231,10,145,70,202,
    1,250,217,195,231,10,115,138,250,110,59,64,15,62,111,86,
    7,36,83,179,122,176,78,94,24,208,208,178,127,176,232,229,
    92,100,217,158,103,201,212,4,31,86,54,138,167,112,104,109,
    58,101,139,181,68,221,72,138,22,119,49,178,146,116,242,11,
    25,126,148,231,159,59,181,210,14,37,171,60,164,40,117,176,
    48,224,11,85,57,100,88,245,118,199,114,157,17,99,142,43,
    245,152,213,163,60,57,40,71,222,16,33,107,25,93,75,106,
    232,78,45,126,30,130,115,116,236,247,29,87,68,49,238,158,
    41,160,23,66,143,53,164,107,76,71,249,253,237,240,129,233,
    90,61,176,248,121,72,191,28,111,194,78,91,142,90,161,41,
    1,61,176,30,107,4,224,20,168,15,7,206,65,217,52,56,
    7,106,135,128,37,5,98,191,27,203,141,192,213,80,81,141,
    171,97,149,242,236,32,220,227,3,186,21,116,20,124,159,35,
    66,234,233,178,34,205,148,167,6,218,60,9,194,93,126,227,
    78,42,159,81,77,234,232,142,74,51,134,132,66,103,100,144,
    116,82,65,18,203,67,102,40,162,23,230,20,124,212,154,235,
    5,178,67,138,234,201,28,86,57,194,33,177,143,15,227,187,
    1,209,180,239,14,86,202,115,195,214,197,78,40,162,24,213,
    143,109,143,251,58,140,28,117,52,167,86,82,127,205,176,173,
    40,178,71,109,82,88,147,108,82,145,61,36,48,113,76,11,
    71,68,173,184,82,71,45,245,40,223,29,28,62,125,242,224,
    214,109,132,155,42,215,3,223,23,42,104,214,131,142,175,112,
    251,83,218,81,215,175,209,52,60,79,114,148,118,231,39,142,
    234,153,237,250,70,245,44,73,206,250,24,48,142,192,112,40,
    250,243,82,190,26,136,95,30,59,34,146,97,208,181,44,245,
    174,16,159,61,203,26,227,33,254,51,224,36,28,34,186,80,
    160,67,124,222,88,252,159,255,23,178,5,131,239,212,15,124,
    37,165,76,160,183,84,234,13,90,55,170,18,167,58,147,164,
    141,147,10,234,234,198,131,146,75,190,202,219,176,91,234,75,
    13,254,8,161,74,83,94,61,167,147,78,134,164,122,167,202,
    239,45,213,59,98,76,254,249,194,159,239,247,171,171,16,223,
    8,181,174,174,106,219,87,149,237,55,194,214,195,187,55,249,
    123,162,214,85,78,204,134,203,216,91,158,120,100,123,180,205,
    14,87,84,83,249,199,233,3,149,2,243,74,235,158,104,5,
    97,247,94,224,8,198,75,186,254,70,252,54,66,137,88,143,
    5,189,182,24,53,142,62,217,129,174,148,16,86,170,239,108,
    248,253,220,96,253,45,47,192,100,193,137,101,206,140,150,89,
    15,90,54,242,135,247,82,115,117,47,115,7,234,157,144,90,
    45,30,224,34,88,93,219,115,127,175,114,129,190,9,112,156,
    176,106,251,59,66,219,62,124,216,232,131,59,189,253,255,212,
    1,153,7,97,80,167,232,24,171,56,57,84,69,44,52,208,
    248,22,45,81,140,111,35,26,83,207,181,27,186,118,36,138,
    80,102,192,54,85,73,87,154,15,85,204,156,212,105,12,214,
    74,130,253,65,159,17,120,147,39,190,82,235,123,253,65,49,
    34,20,59,120,252,65,101,51,105,217,248,136,203,235,119,112,
    27,79,183,27,95,52,81,47,44,213,247,25,215,249,37,3,
    125,8,64,95,38,21,102,10,70,222,164,143,223,50,70,209,
    40,25,89,99,186,84,200,20,242,133,92,6,35,14,113,230,
    141,98,166,80,156,54,14,247,127,121,170,96,20,205,229,215,
    11,198,127,1,216,199,230,120,
};

EmbeddedPython embedded_m5_internal_param_BaseCPU(
    "m5/internal/param_BaseCPU.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_BaseCPU.py",
    "m5.internal.param_BaseCPU",
    data_m5_internal_param_BaseCPU,
    3144,
    11253);

} // anonymous namespace
