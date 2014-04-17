#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_sorteddict[] = {
    120,156,197,89,223,83,27,215,21,62,119,87,18,72,8,196,
    15,131,193,216,68,118,74,3,249,97,28,39,113,29,215,117,
    29,23,135,100,218,161,51,139,83,8,173,71,149,181,23,188,
    32,173,196,238,226,160,6,79,103,130,223,58,147,62,244,161,
    211,135,190,246,181,143,249,243,210,243,157,187,187,146,192,137,
    51,211,89,140,208,114,116,239,114,247,124,231,59,231,220,115,
    174,26,20,255,140,242,251,126,149,40,60,82,68,46,255,42,
    106,18,181,20,109,43,106,89,180,109,145,114,45,210,54,237,
    40,114,109,122,65,116,66,244,229,118,142,116,158,220,28,237,
    91,20,68,202,205,99,98,187,64,58,71,110,129,220,33,114,
    135,201,45,146,91,34,119,132,220,50,185,163,228,142,145,91,
    33,119,28,35,39,84,216,30,34,205,247,15,209,137,226,39,
    76,208,26,139,123,195,88,124,237,179,190,137,73,124,228,25,
    89,11,35,189,57,12,243,250,83,228,94,160,19,43,253,60,
    77,238,76,255,231,139,47,249,183,17,242,44,209,169,76,183,
    220,89,114,231,232,214,153,155,24,199,175,250,20,169,64,114,
    47,209,221,129,155,70,141,118,101,163,247,209,77,76,237,141,
    10,74,134,59,79,122,140,85,81,171,143,167,233,79,108,203,
    10,109,143,147,174,48,214,113,190,251,96,75,109,250,108,240,
    203,180,177,116,133,89,240,190,231,159,37,139,165,104,132,47,
    79,188,80,55,162,90,83,239,68,81,185,247,57,240,118,159,
    70,81,137,7,54,218,65,164,221,85,175,17,53,18,50,115,
    252,126,0,50,127,193,100,106,2,135,76,41,168,177,64,44,
    4,27,28,105,97,148,141,180,157,23,202,44,225,85,129,65,
    195,49,179,195,228,66,96,30,13,185,69,88,4,66,9,252,
    66,24,1,203,16,202,224,26,194,40,88,130,48,6,150,33,
    84,96,99,8,227,176,55,132,9,152,6,194,36,252,1,194,
    20,236,5,225,2,177,35,64,96,14,39,69,152,1,191,16,
    46,130,101,8,204,214,21,252,234,75,160,250,133,77,219,243,
    32,28,83,151,65,54,4,190,97,86,132,5,185,121,142,94,
    48,180,55,192,30,6,171,32,6,194,85,210,215,228,134,203,
    184,1,240,223,36,103,99,105,129,141,216,96,251,145,138,45,
    250,27,88,116,28,188,16,29,75,132,68,124,187,205,180,129,
    172,245,104,136,175,181,80,216,48,244,97,96,87,71,245,40,
    10,162,2,203,241,28,214,139,176,96,168,155,59,75,224,75,
    46,225,231,124,89,249,34,212,65,184,242,180,189,175,15,253,
    125,175,181,178,170,159,233,102,187,211,210,126,180,242,240,225,
    205,247,63,94,93,217,213,173,143,86,194,160,177,210,233,70,
    79,219,254,10,127,58,140,188,230,138,89,222,101,71,184,206,
    51,240,157,26,63,61,214,8,104,66,104,69,170,129,63,201,
    91,64,93,100,225,88,1,84,77,160,237,41,56,178,98,159,
    217,16,109,215,5,143,99,67,241,34,214,117,117,179,182,175,
    187,161,25,7,182,8,147,207,234,205,108,241,132,41,158,42,
    158,144,19,60,69,37,52,65,149,124,130,232,33,11,221,17,
    193,194,32,54,253,15,40,199,100,237,151,40,184,79,74,41,
    140,91,208,121,47,135,123,78,132,246,231,170,207,8,138,54,
    182,250,240,99,97,9,191,248,241,130,62,26,227,129,79,152,
    93,239,201,97,164,31,6,65,59,112,242,9,185,208,59,26,
    70,60,71,58,24,180,149,51,146,216,40,11,67,65,3,81,
    111,17,107,67,103,178,108,53,162,70,213,44,76,5,45,236,
    248,45,166,186,77,20,219,233,88,112,115,58,120,110,197,94,
    112,108,209,28,15,237,219,20,124,72,145,37,211,138,190,81,
    196,9,139,231,18,235,136,99,0,171,164,41,246,58,167,146,
    140,252,86,119,197,48,114,79,207,83,88,63,81,212,243,93,
    125,148,153,41,122,42,233,131,235,88,126,88,28,102,82,77,
    169,74,134,150,144,16,145,4,205,15,23,83,56,19,64,152,
    154,192,153,196,101,42,75,47,232,211,65,31,124,248,106,236,
    55,210,188,182,167,250,176,243,182,94,197,149,147,221,236,70,
    63,108,137,13,201,123,158,74,177,225,9,175,31,111,51,186,
    211,143,183,160,134,179,194,171,94,27,94,103,154,87,187,255,
    106,152,191,252,33,152,81,226,216,39,198,169,223,17,47,230,
    216,28,68,108,188,58,55,0,86,2,184,169,253,243,39,185,
    47,197,68,159,246,131,159,86,185,108,193,247,60,123,246,181,
    208,141,178,227,119,103,16,39,213,73,186,237,93,99,161,91,
    2,184,63,19,109,250,19,233,174,119,5,187,158,175,104,235,
    244,158,142,173,200,193,38,33,131,2,39,51,16,195,177,37,
    99,16,182,42,241,166,116,182,196,186,74,82,92,113,53,202,
    153,216,212,161,105,77,178,106,182,234,153,13,161,101,93,202,
    177,94,1,188,244,245,98,248,124,89,202,156,119,171,105,81,
    0,158,66,44,60,71,178,210,227,10,182,122,87,82,252,204,
    31,212,129,141,167,153,224,14,129,127,49,184,83,93,12,214,
    141,25,164,144,195,229,250,13,217,214,121,55,111,101,101,160,
    16,73,236,238,174,246,245,81,39,184,247,37,197,21,91,65,
    25,45,240,248,189,182,231,75,174,67,85,1,93,194,236,121,
    51,97,87,11,116,39,168,213,182,40,173,187,120,27,73,194,
    109,128,187,200,196,155,41,41,45,84,200,113,189,117,170,166,
    148,248,65,223,105,106,59,20,119,64,84,171,137,163,156,14,
    175,249,44,61,243,13,94,237,143,61,100,83,189,26,57,77,
    38,11,167,144,161,181,252,73,176,184,86,238,135,101,13,192,
    202,12,81,149,164,142,77,16,141,247,226,76,37,136,230,41,
    41,119,226,122,255,7,225,152,130,182,206,157,12,50,77,163,
    169,235,129,1,147,125,206,64,70,107,244,112,140,246,106,253,
    180,123,153,161,36,205,247,23,241,39,42,133,144,54,92,81,
    183,163,251,90,22,25,207,44,106,240,192,70,187,211,221,237,
    105,95,126,9,11,195,41,11,11,253,250,202,102,115,14,177,
    13,197,208,44,236,39,217,134,122,58,166,22,238,53,189,198,
    83,250,108,155,102,166,166,23,154,243,8,100,38,110,4,15,
    245,121,164,38,44,110,30,230,255,31,0,156,183,112,185,114,
    62,22,207,27,27,181,194,131,31,211,120,116,64,227,151,216,
    27,102,62,39,39,113,198,140,50,3,218,38,201,177,81,141,
    211,254,209,165,216,143,87,205,6,107,210,228,28,111,176,37,
    218,236,75,40,61,239,30,140,196,253,204,212,199,154,95,209,
    233,92,136,167,231,18,0,112,128,163,106,10,96,186,151,71,
    128,97,199,162,159,2,195,121,55,75,18,224,158,95,15,160,
    200,197,8,210,242,175,73,162,47,107,185,95,164,96,161,175,
    242,149,196,104,90,213,120,246,17,29,115,229,251,128,76,210,
    199,62,173,80,29,31,60,146,17,187,55,226,139,195,97,48,
    31,239,232,92,46,93,188,122,162,6,27,162,66,226,152,235,
    109,95,75,189,42,61,138,131,179,37,231,157,212,88,185,148,
    115,104,29,70,245,32,146,126,66,251,174,169,107,252,70,243,
    48,244,158,233,76,171,25,206,120,65,221,223,213,127,197,242,
    99,98,207,178,154,180,202,220,69,77,90,147,86,35,169,71,
    161,89,27,150,125,27,254,241,102,114,58,32,86,248,54,246,
    116,91,188,196,22,79,159,58,235,34,239,15,162,134,84,15,
    118,67,201,92,251,95,65,204,212,109,36,37,75,134,20,192,
    127,235,57,208,156,74,97,230,18,152,232,138,143,150,207,194,
    156,22,152,41,82,19,15,175,4,235,220,196,229,131,172,35,
    35,169,135,91,130,240,239,103,16,38,5,234,239,147,76,117,
    170,64,253,86,189,178,146,3,154,195,14,87,64,250,116,109,
    154,66,204,44,238,111,241,106,255,232,129,154,234,85,221,105,
    220,227,108,171,91,78,178,213,198,166,63,207,141,31,73,227,
    183,44,199,157,86,60,119,247,84,11,40,164,189,164,153,53,
    37,255,78,221,107,182,159,236,101,234,154,92,244,187,122,167,
    126,216,140,254,73,125,157,97,25,149,158,213,135,115,13,56,
    215,128,115,225,71,202,240,77,255,26,35,183,5,249,131,24,
    121,120,135,190,161,36,247,193,60,91,125,103,57,148,58,172,
    240,140,167,117,218,29,211,169,190,172,201,191,153,37,211,31,
    243,106,255,238,101,36,155,115,252,24,219,161,192,175,179,39,
    220,95,192,22,243,113,168,2,151,217,114,227,82,126,211,191,
    194,134,176,196,16,119,96,8,134,230,90,201,145,229,69,218,
    98,211,113,46,66,74,79,204,200,65,189,33,150,177,83,203,
    72,211,195,246,144,166,119,249,78,21,138,122,109,191,30,116,
    171,94,88,213,173,78,212,149,188,111,78,70,96,52,225,244,
    115,28,234,154,227,240,137,196,180,2,238,156,154,31,249,226,
    37,86,251,63,148,28,130,179,61,71,197,158,227,86,35,241,
    170,180,111,133,22,199,242,157,38,39,186,163,89,152,100,245,
    241,56,61,207,193,107,144,248,114,116,247,96,156,54,143,237,
    52,118,68,249,124,226,53,141,102,40,127,67,125,32,59,155,
    164,92,169,107,220,108,177,194,234,59,65,187,133,34,254,191,
    105,8,89,69,1,187,190,244,179,52,154,107,126,189,165,107,
    53,97,168,86,107,181,221,195,38,127,116,96,43,167,148,220,
    213,9,218,29,29,68,93,249,30,195,208,122,1,23,244,88,
    102,43,151,77,29,39,41,102,143,151,72,129,155,72,15,45,
    109,167,244,108,14,190,125,112,126,142,203,50,46,216,64,165,
    142,148,106,76,138,25,231,61,138,203,128,79,235,205,80,203,
    230,225,224,168,218,249,8,23,228,61,231,118,226,58,142,28,
    230,141,136,165,235,97,216,210,108,18,215,185,63,96,217,44,
    98,18,30,11,101,195,123,132,147,152,162,85,180,43,86,165,
    88,44,12,188,236,98,46,126,217,241,139,229,201,178,25,43,
    23,138,252,99,171,152,134,86,221,243,107,181,179,21,255,99,
    227,130,107,159,153,144,150,111,146,35,69,105,114,227,216,53,
    115,246,192,92,110,96,46,63,48,87,72,231,250,114,254,80,
    74,204,91,41,39,203,41,49,111,39,236,152,189,225,215,89,
    135,169,235,133,157,102,189,251,93,47,237,229,213,136,154,136,
    223,18,64,71,30,206,92,69,212,94,62,17,247,188,92,34,
    62,241,172,68,252,139,119,41,81,91,60,38,204,155,84,80,
    221,147,233,186,212,170,34,238,122,67,137,88,243,134,19,241,
    169,92,187,206,13,49,21,178,151,236,253,230,75,119,115,10,
    44,118,145,148,38,217,236,19,92,214,6,30,106,28,246,118,
    234,196,139,137,79,75,245,247,40,56,212,82,15,201,163,158,
    101,234,190,226,114,119,77,172,223,195,121,143,84,120,51,214,
    204,191,202,170,88,124,79,149,172,10,191,243,156,43,74,214,
    56,111,55,248,59,207,239,33,85,194,203,42,88,35,214,162,
    250,31,87,157,173,158,
};

EmbeddedPython embedded_m5_util_sorteddict(
    "m5/util/sorteddict.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/python/m5/util/sorteddict.py",
    "m5.util.sorteddict",
    data_m5_util_sorteddict,
    2454,
    8741);

} // anonymous namespace
