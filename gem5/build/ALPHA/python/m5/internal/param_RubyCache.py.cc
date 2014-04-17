#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,197,89,95,115,219,198,17,223,3,72,202,164,68,75,
    178,254,217,150,28,49,113,148,48,110,34,54,110,220,180,141,
    199,83,39,246,76,210,73,20,23,106,106,135,77,139,66,192,
    73,2,5,2,28,224,100,155,25,233,165,242,180,125,235,135,
    232,244,161,223,163,223,171,221,221,195,65,16,69,37,154,105,
    203,72,228,205,97,177,183,119,187,251,219,189,189,163,15,249,
    95,21,191,191,108,1,100,93,1,16,224,71,64,4,208,23,
    128,207,66,10,8,22,224,160,10,233,7,16,84,225,21,64,
    215,2,105,193,9,118,108,248,157,5,241,12,143,169,65,100,
    51,69,192,176,1,178,2,221,42,60,141,231,161,34,107,112,
    208,128,244,143,32,132,136,5,60,11,166,32,184,2,175,80,
    58,118,234,44,240,10,4,13,238,212,33,152,230,78,3,134,
    115,32,167,161,139,194,167,160,219,68,81,119,80,212,85,22,
    245,47,18,21,224,155,69,8,154,196,142,107,249,154,56,43,
    196,201,115,92,101,41,179,102,101,115,208,157,55,253,107,165,
    254,2,247,103,65,206,67,111,17,122,75,208,91,134,93,84,
    120,174,144,186,2,210,134,222,117,232,94,7,137,159,21,56,
    65,155,4,243,165,17,55,120,196,181,98,196,77,30,177,10,
    221,85,144,248,185,169,71,212,96,187,189,132,118,14,255,141,
    127,109,180,51,168,25,108,158,203,52,11,147,216,13,227,221,
    36,180,232,125,141,26,242,138,79,205,84,238,158,79,200,61,
    255,4,246,77,96,229,238,57,6,20,44,72,151,200,130,99,
    238,28,91,48,108,195,145,128,94,5,2,27,142,112,154,42,
    45,96,79,192,137,5,223,216,196,112,140,109,5,13,250,26,
    84,148,246,77,143,13,170,37,77,193,113,21,142,170,176,253,
    236,200,34,194,65,29,210,127,192,183,107,44,244,10,11,181,
    224,8,219,10,156,84,224,184,6,79,145,9,73,189,58,169,
    47,158,29,161,166,72,217,110,87,112,181,91,37,117,73,149,
    32,76,99,175,47,213,28,246,221,129,151,122,125,215,57,220,
    25,126,226,249,251,178,221,48,92,73,182,57,240,212,190,195,
    195,108,178,71,127,160,88,92,18,75,53,141,157,221,48,14,
    220,126,18,28,70,82,93,33,89,238,110,24,73,215,229,151,
    159,245,7,73,170,30,167,105,146,58,100,82,38,70,137,87,
    140,32,131,250,81,146,201,54,205,198,211,56,36,94,17,247,
    238,128,37,210,2,120,169,52,56,144,153,159,134,3,133,158,
    210,18,137,155,164,181,201,71,220,100,93,108,58,95,101,232,
    207,206,126,114,32,15,227,131,176,223,121,36,159,203,40,25,
    244,101,172,58,143,31,223,125,255,231,143,58,123,178,127,175,
    179,115,24,70,65,231,225,231,79,62,125,216,25,12,213,126,
    18,119,144,26,198,74,162,125,162,206,136,101,54,145,229,26,
    205,241,34,220,115,67,214,206,221,151,209,64,166,77,162,222,
    164,249,197,156,152,17,53,97,139,182,104,98,175,138,95,91,
    172,89,211,98,43,36,253,124,210,153,160,101,27,48,253,29,
    216,109,232,245,3,11,210,53,130,74,15,63,130,124,139,128,
    217,166,119,22,191,251,53,25,70,83,123,54,1,64,19,143,
    24,94,136,51,228,188,79,30,143,129,49,82,133,94,13,52,
    118,16,114,26,76,233,144,90,100,39,49,22,10,175,64,246,
    183,179,18,226,57,64,195,99,8,35,105,25,167,250,19,195,
    113,187,77,11,223,98,88,168,253,48,75,94,196,108,124,234,
    115,0,109,163,77,158,12,191,220,233,73,95,101,235,72,248,
    58,57,108,249,94,28,39,170,229,5,65,203,83,42,13,119,
    14,149,204,90,42,105,109,100,237,58,121,123,222,32,171,144,
    55,28,24,36,145,215,17,73,250,33,8,125,133,15,11,252,
    192,246,207,164,66,84,236,39,65,134,116,18,177,39,149,67,
    139,84,87,177,121,104,166,99,248,181,107,6,44,153,140,118,
    85,131,113,231,101,153,203,211,17,157,33,70,163,159,123,209,
    161,84,196,159,41,79,225,172,212,213,19,77,14,100,215,73,
    77,163,37,89,206,141,147,56,24,226,34,67,127,131,230,191,
    206,80,155,1,2,219,18,2,109,10,219,26,52,17,120,115,
    150,79,250,84,114,152,49,196,150,73,123,96,183,139,60,107,
    32,220,78,48,183,180,45,78,14,172,24,135,95,139,122,52,
    216,33,52,59,171,212,172,81,115,203,232,62,17,3,52,71,
    13,112,151,38,181,88,107,223,206,245,43,66,104,235,76,8,
    221,56,13,33,76,132,219,20,10,22,5,204,105,40,216,100,
    129,244,65,142,123,10,50,116,61,190,46,161,157,237,226,80,
    122,100,236,48,80,29,66,95,25,130,123,37,8,58,228,18,
    198,159,115,227,34,27,174,255,64,54,220,211,54,188,71,147,
    206,228,200,105,50,98,26,194,39,183,91,185,69,217,154,143,
    176,51,92,33,107,150,237,184,130,251,218,211,184,201,27,20,
    111,114,188,189,235,196,161,205,171,59,21,194,216,174,13,203,
    249,198,147,81,156,15,210,228,229,176,149,236,182,20,152,53,
    220,223,200,54,55,178,143,48,19,180,30,112,110,209,185,64,
    71,123,42,7,41,70,117,157,31,116,164,186,28,181,110,190,
    117,160,189,105,19,103,55,177,149,57,49,101,42,165,124,52,
    57,19,55,10,19,211,138,63,162,25,27,108,95,27,86,240,
    219,16,188,44,55,225,172,200,117,4,191,197,239,199,100,105,
    82,86,2,85,119,206,182,94,52,235,67,154,57,111,159,193,
    202,36,180,113,238,160,248,71,38,206,106,80,32,131,190,54,
    173,151,160,255,23,224,50,75,192,159,129,80,128,206,206,131,
    133,195,146,190,228,204,5,98,255,3,112,194,25,179,179,89,
    58,232,172,60,37,97,76,102,31,50,171,222,232,126,5,127,
    45,101,171,19,27,4,109,74,118,94,72,149,55,165,74,17,
    166,12,159,75,109,60,149,179,241,76,30,218,247,50,98,211,
    145,107,23,145,123,154,248,138,10,8,211,209,68,144,117,69,
    207,229,210,178,62,59,197,21,101,252,85,177,96,149,208,242,
    46,53,239,21,64,17,134,246,255,94,225,250,104,138,46,237,
    81,174,78,139,159,210,50,42,188,240,217,26,23,112,60,250,
    11,217,79,210,97,17,14,85,19,14,119,139,112,144,156,170,
    95,113,149,77,173,69,174,63,177,4,30,107,176,48,161,19,
    69,5,100,21,186,53,10,28,174,34,69,30,87,194,100,49,
    202,126,103,246,1,182,204,150,182,89,225,125,237,88,106,94,
    78,46,107,144,111,239,71,94,127,39,240,30,252,150,230,163,
    73,125,19,105,150,209,96,174,172,1,69,137,184,72,9,126,
    252,177,209,228,249,228,50,198,251,40,190,208,128,227,35,72,
    124,78,19,191,217,151,173,190,236,239,224,204,251,225,160,181,
    27,121,123,236,35,59,215,240,75,163,161,98,39,143,238,188,
    25,229,162,173,164,229,39,49,38,245,67,95,37,105,43,144,
    120,218,144,65,235,189,22,239,8,173,48,107,121,59,248,214,
    243,149,70,253,217,232,229,178,206,75,247,50,174,224,14,94,
    80,119,178,62,118,241,52,25,98,213,250,212,88,72,31,115,
    138,244,206,133,170,14,33,220,32,241,20,161,134,58,149,253,
    148,154,119,168,217,128,137,239,2,29,20,255,21,205,67,102,
    171,97,182,169,11,53,75,107,49,76,79,104,76,118,62,124,
    63,16,151,8,95,125,31,145,7,113,141,56,229,20,29,103,
    169,173,211,70,208,109,24,226,52,183,51,76,108,26,226,85,
    110,103,153,56,103,136,243,220,94,99,226,130,33,46,114,187,
    196,196,101,67,92,225,246,58,19,111,24,226,77,110,87,153,
    184,102,136,183,184,125,141,137,235,134,216,226,246,117,38,190,
    97,136,183,185,125,147,137,27,134,248,22,183,111,51,177,109,
    238,107,222,97,226,29,232,254,136,46,61,136,242,46,37,176,
    169,255,54,129,113,236,79,54,234,127,255,63,205,91,206,221,
    31,78,1,231,39,144,151,54,23,229,44,81,214,174,169,115,
    86,79,152,163,67,89,53,190,147,88,62,31,44,174,159,74,
    79,73,237,172,155,147,212,149,147,159,158,221,45,92,102,20,
    42,14,80,31,22,74,157,112,85,55,92,44,213,245,236,65,
    241,20,75,48,172,253,143,88,111,215,210,229,255,41,42,43,
    133,250,100,201,88,190,112,71,76,160,203,123,90,141,55,24,
    200,56,56,45,221,249,205,228,156,79,201,245,0,78,43,42,
    172,211,23,241,123,62,0,73,165,146,134,236,187,106,17,114,
    19,245,34,35,118,96,252,215,166,106,239,116,27,113,200,123,
    122,227,40,246,12,231,23,133,63,86,199,192,49,66,56,196,
    254,144,14,134,223,249,30,43,59,174,143,243,103,245,214,24,
    94,60,249,68,158,47,73,73,119,144,68,97,46,246,146,172,
    52,3,93,169,157,127,165,94,31,35,65,121,123,15,211,212,
    27,126,236,197,7,25,207,243,253,92,52,5,71,109,153,170,
    222,24,51,46,240,148,55,34,254,18,108,36,159,118,242,179,
    100,245,230,5,11,243,125,153,101,159,151,28,112,41,70,154,
    100,46,87,162,252,66,221,26,51,58,196,143,79,207,44,255,
    187,57,72,48,157,179,11,138,186,49,134,31,235,173,196,103,
    105,23,191,37,73,20,31,252,164,110,143,225,203,148,151,42,
    44,138,2,249,210,221,193,202,136,228,93,134,143,36,83,9,
    50,66,87,27,23,57,231,156,141,47,199,73,243,204,27,79,
    158,177,242,56,24,164,50,75,14,83,95,110,43,47,138,46,
    70,203,8,155,65,203,89,50,223,248,157,51,67,248,173,246,
    224,133,47,73,24,223,106,226,3,39,54,222,124,2,25,73,
    76,247,35,35,244,93,191,46,55,3,137,117,115,50,116,93,
    125,63,129,207,145,235,78,184,206,252,25,138,255,134,230,33,
    163,81,157,89,195,74,115,105,236,127,189,82,23,92,216,143,
    252,50,163,23,75,167,116,125,54,31,102,14,81,156,217,34,
    249,241,47,8,166,182,230,93,142,176,190,229,245,245,189,48,
    95,119,58,156,66,110,155,252,201,123,148,190,177,225,27,17,
    125,11,133,59,26,159,58,248,144,225,108,154,196,218,191,183,
    105,116,220,212,58,110,135,125,125,9,206,63,98,244,239,49,
    160,202,108,65,234,97,127,105,132,138,102,14,189,8,221,200,
    75,54,100,70,253,168,92,90,79,241,196,229,58,3,164,116,
    180,102,39,167,114,47,204,80,12,203,40,248,243,205,152,140,
    175,214,198,193,170,52,114,178,128,208,199,98,125,189,247,128,
    238,10,178,251,216,208,5,119,125,182,46,106,22,253,142,98,
    139,134,104,138,138,152,105,214,237,122,173,94,181,17,52,68,
    89,16,13,187,222,152,17,244,191,142,96,105,88,235,75,117,
    241,31,137,86,229,31,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2406,
    7512);

} // anonymous namespace
