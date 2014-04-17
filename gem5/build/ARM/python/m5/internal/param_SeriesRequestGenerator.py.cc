#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SeriesRequestGenerator[] = {
    120,156,205,89,109,115,219,198,17,222,3,72,74,164,68,75,
    178,36,203,47,114,4,199,209,148,73,27,177,113,227,166,109,
    60,158,186,145,167,77,102,172,164,96,59,118,216,78,17,8,
    56,138,160,64,128,1,78,82,152,145,190,84,158,182,31,58,
    211,31,209,233,135,254,143,78,255,86,187,187,7,64,208,155,
    149,180,29,179,146,120,115,188,151,221,219,221,103,95,238,228,
    65,246,83,197,207,79,45,128,244,159,2,192,199,63,1,33,
    192,80,64,87,128,144,2,252,69,216,173,66,242,62,248,85,
    120,9,208,53,64,26,112,140,29,19,126,99,64,52,203,123,
    106,16,154,60,34,96,220,0,89,129,110,21,158,71,11,80,
    145,53,216,109,64,242,5,8,33,34,1,47,252,41,240,167,
    225,37,82,199,78,157,9,78,131,223,224,78,29,252,25,238,
    52,96,60,15,114,6,186,72,124,10,186,77,36,245,14,146,
    186,198,164,254,65,164,124,156,89,2,191,73,203,241,44,159,
    211,202,10,173,100,30,215,152,202,92,126,178,121,232,46,228,
    253,235,165,254,98,169,191,84,234,47,151,250,55,74,253,149,
    82,255,102,169,127,171,212,191,93,234,223,41,245,87,185,63,
    7,114,1,6,119,97,240,6,12,214,160,135,202,157,47,36,
    176,64,154,48,184,7,221,123,32,241,207,130,99,212,191,191,
    80,218,241,38,239,184,94,236,184,207,59,222,130,238,91,32,
    241,239,190,222,81,131,78,107,25,109,26,252,11,127,90,104,
    83,80,179,216,236,203,36,13,226,200,9,162,94,28,24,52,
    95,163,134,16,224,81,51,149,65,225,35,130,194,223,129,113,
    224,27,25,20,142,0,9,11,146,37,52,224,136,59,71,6,
    140,91,112,40,96,80,1,223,132,67,100,83,165,3,236,8,
    56,54,224,183,38,45,56,194,182,130,198,123,3,42,74,227,
    96,192,198,211,148,166,224,168,10,135,85,232,188,56,52,104,
    96,183,14,201,223,224,235,85,38,58,205,68,13,56,196,182,
    2,199,21,56,170,193,115,92,132,67,131,58,137,47,94,28,
    162,164,56,210,105,85,240,180,91,37,113,73,20,63,72,34,
    119,40,213,93,236,59,35,55,113,135,78,71,38,129,76,109,
    249,229,158,76,213,207,101,36,19,87,197,73,171,145,111,137,
    211,141,145,171,250,54,211,48,73,57,195,145,98,218,113,36,
    213,12,118,122,65,228,59,195,216,223,11,165,154,38,194,78,
    47,8,165,227,240,228,199,195,81,156,168,167,73,18,39,54,
    233,151,7,195,216,45,118,144,118,189,48,78,101,139,184,49,
    27,155,200,43,90,221,27,49,69,58,0,159,155,54,251,50,
    245,146,96,164,208,108,154,34,173,38,106,45,50,24,55,169,
    196,166,253,235,20,141,219,238,199,187,114,47,218,13,134,237,
    77,185,47,195,120,52,148,145,106,63,125,250,224,189,31,111,
    182,119,228,240,97,123,123,47,8,253,246,19,251,89,123,52,
    86,253,56,106,227,88,16,41,137,170,10,219,175,82,210,6,
    174,191,78,236,14,130,29,39,96,65,157,190,12,71,50,105,
    210,232,109,58,138,152,23,179,162,38,76,209,18,77,236,85,
    241,99,138,85,99,70,108,5,36,170,71,226,19,228,204,28,
    100,127,5,54,39,162,97,215,128,100,149,32,52,192,63,65,
    54,71,32,117,104,206,224,185,95,146,142,244,232,192,36,96,
    232,193,67,134,29,226,15,87,62,34,36,68,192,216,169,194,
    160,6,26,83,8,69,13,178,100,76,45,46,39,50,6,18,
    175,64,250,151,211,20,162,121,64,27,96,24,193,161,27,200,
    234,247,12,211,78,139,14,190,197,8,81,253,32,141,15,34,
    182,3,245,217,177,58,168,147,207,198,159,110,15,164,167,210,
    53,28,248,60,222,179,60,55,138,98,101,185,190,111,185,74,
    37,193,246,158,146,169,165,98,107,61,109,213,201,240,11,57,
    200,10,122,227,81,14,42,2,0,130,74,127,241,3,79,225,
    151,69,254,194,250,79,165,66,128,244,99,63,197,113,34,177,
    35,149,77,135,84,215,176,121,146,179,99,36,182,106,57,110,
    82,25,246,84,131,33,232,166,169,195,236,104,156,209,70,187,
    247,221,112,79,42,90,159,42,87,33,87,234,106,70,19,193,
    219,77,146,56,23,152,148,232,68,113,228,143,241,188,129,183,
    78,71,185,201,168,155,5,194,221,50,98,110,10,219,26,52,
    17,131,243,134,71,162,85,50,196,49,218,110,144,34,128,17,
    32,178,192,130,200,59,198,240,211,50,56,126,176,140,236,148,
    22,245,104,179,77,192,182,239,80,179,74,205,221,92,13,175,
    91,23,205,179,186,120,64,252,13,86,128,103,102,162,22,142,
    181,117,202,177,110,157,56,22,134,205,14,57,136,65,110,116,
    226,32,38,41,35,121,156,121,3,185,30,2,2,167,75,62,
    192,42,178,231,73,244,90,14,95,155,48,89,6,230,78,9,
    152,54,89,135,81,105,223,186,76,157,107,147,87,231,142,86,
    231,67,226,63,155,225,169,201,56,106,8,143,192,96,100,202,
    101,197,110,98,103,188,66,138,45,171,116,5,19,226,243,168,
    201,153,141,179,35,215,32,58,178,104,77,235,78,133,144,215,
    51,225,70,150,177,82,10,4,163,36,254,106,108,197,61,75,
    65,126,134,71,235,233,198,122,250,33,134,10,235,49,7,31,
    29,44,116,56,72,228,40,65,183,175,243,23,237,202,14,187,
    181,147,165,25,84,61,101,127,182,24,43,156,35,87,170,18,
    10,88,19,209,118,163,208,54,29,254,67,98,222,96,85,155,
    176,130,159,134,224,19,58,49,71,80,174,69,120,22,63,63,
    35,165,147,220,120,88,172,70,237,142,62,63,139,70,66,218,
    223,57,133,160,215,44,152,253,14,114,218,204,29,177,6,5,
    94,232,99,210,209,201,55,254,8,92,181,9,248,3,16,54,
    16,2,153,55,177,223,210,135,76,188,72,203,127,7,28,156,
    46,72,136,134,246,74,35,11,95,232,180,233,7,188,84,231,
    199,79,224,79,165,200,118,108,130,160,92,102,102,117,89,57,
    151,85,10,63,102,80,125,163,124,85,57,237,240,100,172,190,
    155,210,50,237,218,102,225,218,39,65,178,168,161,48,94,189,
    110,188,77,107,182,14,157,240,227,19,180,81,162,184,35,22,
    141,18,134,190,71,205,187,5,124,68,62,246,26,15,187,118,
    54,178,151,178,156,163,163,233,47,232,68,21,150,97,174,166,
    40,143,93,76,174,112,157,106,238,58,15,10,215,145,28,236,
    95,114,85,79,173,65,216,56,54,4,94,217,176,224,161,219,
    82,5,100,21,186,53,114,50,46,84,69,230,131,34,15,126,
    20,52,79,101,18,214,215,150,214,100,1,15,109,121,106,190,
    154,72,176,33,227,63,10,221,225,182,239,62,118,136,53,241,
    247,114,175,52,114,97,230,203,194,144,71,137,203,228,225,175,
    223,207,133,218,159,72,160,121,143,64,146,11,195,110,229,199,
    30,71,151,95,245,165,53,148,195,109,60,68,63,24,89,189,
    208,221,97,203,153,153,176,159,230,194,42,54,253,217,140,158,
    82,8,219,138,45,47,142,48,67,236,121,200,207,242,37,94,
    115,164,111,189,107,113,122,177,130,212,114,183,113,214,245,148,
    246,144,211,78,207,69,164,155,236,164,92,47,238,30,80,119,
    98,150,119,240,122,27,96,185,252,69,174,44,125,213,42,114,
    5,87,200,218,221,48,241,226,245,69,141,117,48,252,33,53,
    111,83,179,14,147,76,41,109,228,68,105,32,37,101,214,48,
    94,213,133,90,189,212,227,63,35,106,233,121,191,255,243,55,
    241,123,253,72,147,121,127,141,86,202,41,186,119,83,91,167,
    20,211,109,228,131,51,220,206,242,96,51,31,188,198,237,28,
    15,206,231,143,67,11,60,120,29,186,139,244,234,65,35,75,
    20,81,166,254,219,136,194,30,56,49,223,235,253,79,3,137,
    253,224,255,66,22,251,7,144,149,40,151,5,17,81,22,180,
    169,131,200,64,228,119,132,178,148,252,58,113,255,10,156,58,
    94,34,93,37,181,61,111,79,72,7,28,165,244,65,250,133,
    85,115,65,139,27,212,7,133,176,199,92,181,141,151,74,213,
    60,27,89,60,199,18,11,43,254,67,214,135,99,232,162,255,
    4,195,149,66,45,72,15,34,121,112,201,145,180,106,116,133,
    79,71,115,71,35,25,249,39,213,59,207,76,4,44,20,18,
    67,56,41,159,176,84,95,194,207,121,55,38,81,75,146,179,
    121,171,133,227,78,202,208,12,246,47,115,19,243,139,232,73,
    30,176,201,192,58,242,23,65,223,254,73,97,178,246,85,72,
    198,204,225,225,97,157,131,36,192,58,153,110,145,223,122,15,
    150,123,156,141,78,15,171,239,94,69,38,218,27,226,94,90,
    192,108,191,205,122,98,73,198,60,25,82,239,95,181,29,111,
    4,9,38,85,244,24,178,142,147,6,95,75,230,251,31,109,
    164,3,80,192,185,96,142,225,198,33,196,151,161,84,242,149,
    238,162,200,114,217,163,131,143,211,73,60,198,91,48,223,34,
    241,123,232,56,147,75,224,63,2,78,189,144,210,115,41,37,
    240,26,166,240,101,254,173,87,234,130,235,166,51,207,239,250,
    156,4,65,125,99,26,167,54,199,231,185,2,143,252,50,156,
    215,43,28,155,232,254,191,229,14,245,35,31,63,88,217,247,
    168,185,159,67,154,131,137,190,82,243,61,85,191,24,96,28,
    226,162,142,107,56,123,35,87,249,240,225,70,46,224,134,22,
    112,51,72,112,167,244,11,217,248,145,122,248,144,95,229,206,
    47,239,140,83,37,135,234,206,153,73,73,72,123,38,135,113,
    50,126,22,251,82,221,59,51,255,36,171,43,245,18,103,95,
    82,1,202,1,243,60,139,211,107,207,177,210,139,112,82,63,
    196,242,189,234,252,252,71,97,236,237,74,63,91,115,247,242,
    53,155,241,208,197,241,139,185,116,130,156,203,194,153,121,63,
    161,93,203,103,70,201,215,220,16,65,206,165,220,41,5,160,
    35,216,110,180,35,115,217,201,210,249,172,90,33,179,95,98,
    14,226,124,110,148,203,199,87,228,97,246,152,68,238,4,104,
    173,132,201,159,35,145,229,35,130,177,122,251,42,31,47,147,
    155,152,203,233,43,159,126,252,122,76,255,54,225,247,79,122,
    20,174,207,213,69,205,160,127,67,152,162,33,154,162,34,102,
    155,117,179,94,171,87,77,116,75,26,89,20,13,179,222,152,
    21,23,255,174,161,195,54,140,181,102,93,252,27,174,144,6,
    237,
};

EmbeddedPython embedded_m5_internal_param_SeriesRequestGenerator(
    "m5/internal/param_SeriesRequestGenerator.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_SeriesRequestGenerator.py",
    "m5.internal.param_SeriesRequestGenerator",
    data_m5_internal_param_SeriesRequestGenerator,
    2321,
    7469);

} // anonymous namespace
