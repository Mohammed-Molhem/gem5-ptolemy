#include "sim/init.hh"

namespace {

const uint8_t data_m5_simulate[] = {
    120,156,181,89,75,115,28,87,21,62,221,243,144,102,164,145,
    70,15,43,86,28,236,182,227,135,12,182,228,132,216,129,148,
    9,142,45,219,49,196,178,171,229,68,206,84,204,208,154,190,
    210,244,168,31,163,238,30,75,162,164,74,85,156,130,80,84,
    101,193,10,118,64,177,97,67,21,75,86,20,197,34,21,170,
    216,177,98,193,31,224,7,176,96,17,206,119,110,247,104,228,
    196,176,145,37,205,213,125,158,247,235,222,105,81,246,83,224,
    207,53,139,40,89,53,136,92,254,51,200,39,106,244,251,6,
    53,140,188,111,82,195,204,251,5,106,20,242,126,145,26,197,
    188,95,162,70,41,239,151,169,81,206,251,67,212,24,202,251,
    195,212,24,150,190,73,126,133,130,42,53,170,100,96,92,32,
    127,132,130,81,106,212,244,184,72,254,24,5,227,212,24,215,
    227,146,140,235,212,168,243,248,40,53,38,200,43,144,26,166,
    206,36,117,166,200,173,208,149,108,48,77,110,181,63,56,66,
    238,8,93,105,204,0,183,59,74,31,51,75,71,105,157,200,
    153,37,245,34,57,199,200,173,209,199,204,243,75,228,142,73,
    231,107,228,142,75,231,56,185,117,233,156,32,119,66,58,22,
    185,147,210,57,73,238,148,116,78,145,59,45,157,151,1,141,
    255,220,35,244,49,75,234,180,112,56,67,254,25,10,206,82,
    227,44,83,108,208,242,220,44,203,219,251,130,127,150,230,88,
    224,148,150,185,113,163,166,27,165,122,60,202,77,175,235,58,
    169,186,249,88,133,105,162,103,75,220,172,57,169,227,235,225,
    48,55,78,154,198,174,215,74,61,19,16,175,161,233,3,116,
    210,40,224,37,116,83,47,240,194,245,116,162,63,219,12,163,
    176,229,180,218,60,219,194,129,10,127,0,254,6,140,224,215,
    166,104,8,138,33,10,12,218,51,200,72,77,234,20,168,83,
    164,39,68,123,38,237,154,148,188,10,138,88,91,79,120,57,
    20,156,157,33,44,27,219,199,177,222,25,198,96,241,81,157,
    246,10,180,203,103,43,178,184,121,135,86,158,177,161,170,55,
    116,104,101,215,160,206,8,197,255,130,36,210,26,117,198,168,
    51,78,152,172,147,94,122,98,194,46,184,221,43,210,246,37,
    98,206,250,0,217,62,220,50,116,241,196,48,22,31,77,229,
    192,39,105,183,40,164,110,126,198,240,139,48,21,96,99,194,
    1,113,154,226,13,99,231,135,194,54,145,127,132,246,74,207,
    192,61,61,128,187,44,88,103,68,38,67,180,91,162,206,11,
    180,203,29,182,119,54,115,166,198,52,12,30,100,168,86,54,
    55,140,98,122,148,54,170,20,175,27,252,195,227,135,16,220,
    44,192,236,99,120,145,158,20,88,224,199,168,243,210,255,18,
    231,215,180,180,126,97,60,75,156,199,245,134,63,62,115,195,
    9,189,225,31,207,220,96,233,13,255,49,86,64,205,73,25,
    237,18,197,61,51,61,69,157,151,169,115,154,118,33,103,218,
    27,166,108,230,12,237,14,139,152,183,79,14,130,236,171,225,
    108,190,190,185,100,174,164,231,168,51,135,109,98,66,39,233,
    25,100,156,215,100,124,196,7,190,46,93,86,209,242,28,76,
    118,73,156,72,187,195,16,55,81,55,245,162,48,73,94,199,
    154,82,174,149,70,150,23,38,169,19,166,30,59,147,101,71,
    236,97,231,173,85,181,22,197,202,106,57,190,207,14,48,184,
    99,238,124,10,96,91,41,34,226,134,218,17,231,200,63,203,
    112,142,42,119,152,233,14,129,146,101,65,157,57,113,145,155,
    174,147,182,245,8,77,52,135,224,42,77,114,157,155,133,119,
    19,21,39,11,237,104,67,245,194,13,47,88,88,84,143,149,
    31,117,3,246,241,133,155,55,95,125,229,219,139,11,235,42,
    184,188,144,196,173,133,238,78,218,142,194,5,140,188,160,231,
    51,113,243,60,5,167,191,234,59,193,170,235,188,249,1,224,
    82,238,238,94,232,50,24,15,84,204,125,3,147,8,9,193,
    101,123,168,47,156,213,142,106,165,137,208,9,65,164,35,220,
    89,87,233,29,97,191,165,108,51,15,50,169,215,218,72,210,
    73,132,27,111,251,182,31,173,58,254,173,88,109,246,84,216,
    218,145,83,174,74,90,42,116,89,104,137,14,42,46,75,254,
    94,220,109,59,225,125,39,118,130,132,29,135,35,88,216,141,
    163,237,157,108,70,206,245,130,110,179,21,133,107,222,186,144,
    177,230,249,74,232,140,18,187,154,203,176,19,121,161,112,20,
    245,82,215,139,165,155,68,113,170,220,20,58,239,198,188,220,
    244,66,79,72,109,249,81,162,4,118,39,137,194,65,216,24,
    11,15,204,98,54,223,116,146,38,162,165,172,131,22,57,120,
    39,232,50,244,155,113,28,197,182,72,179,42,209,56,63,36,
    104,88,66,204,234,168,136,217,75,151,189,96,89,38,198,64,
    65,172,88,55,55,110,220,19,241,202,30,62,24,114,255,62,
    131,213,226,198,33,81,93,172,214,245,73,48,165,66,103,149,
    249,31,150,13,169,138,67,199,151,221,45,54,78,17,32,83,
    126,163,173,90,27,93,72,68,120,233,133,108,65,158,227,123,
    63,82,90,47,137,200,196,143,28,23,112,181,36,66,182,252,
    102,172,146,94,160,116,34,232,118,89,89,178,81,168,151,141,
    245,126,138,193,56,75,51,149,60,175,48,206,148,69,21,107,
    235,1,81,49,44,166,160,205,40,35,217,107,66,127,182,133,
    45,149,92,3,162,82,24,191,171,121,97,64,135,239,5,35,
    130,191,239,181,183,1,250,61,32,48,234,230,184,89,54,106,
    133,106,113,138,198,10,252,49,43,198,105,243,148,49,97,212,
    184,87,48,70,141,211,252,153,49,198,140,154,49,100,206,20,
    170,216,99,100,123,229,83,45,148,141,73,163,206,115,19,12,
    141,103,138,45,64,46,102,101,210,61,4,129,95,129,101,150,
    137,15,63,239,72,106,212,121,49,139,96,197,167,34,88,73,
    71,176,83,180,194,10,113,196,31,57,202,177,208,144,243,144,
    93,245,120,132,58,163,212,169,233,169,10,82,79,150,162,182,
    143,82,58,174,1,154,196,170,203,66,230,102,66,43,40,97,
    198,229,232,132,36,57,201,103,159,238,135,166,169,188,158,16,
    171,96,145,197,105,175,107,143,35,6,192,4,108,184,175,61,
    157,199,136,108,93,108,254,22,91,87,102,64,169,218,222,55,
    96,47,97,91,181,207,224,220,41,52,23,208,92,4,132,154,
    56,206,77,222,123,195,87,78,152,193,97,75,84,169,253,74,
    30,167,50,195,196,138,130,213,9,216,92,185,115,197,220,222,
    156,120,93,123,201,198,22,186,246,21,96,121,61,55,164,195,
    180,38,251,22,131,249,25,224,29,5,84,86,255,56,12,194,
    40,23,235,133,169,66,205,172,177,177,148,77,49,2,49,49,
    202,202,164,154,54,130,142,88,192,64,50,40,28,20,10,196,
    218,234,197,15,56,166,238,147,126,168,244,223,97,48,191,5,
    60,83,232,147,156,5,34,48,44,128,210,87,185,243,19,142,
    182,6,234,155,31,19,10,58,54,146,204,98,167,164,152,187,
    184,63,179,121,140,86,36,195,226,252,146,240,109,102,16,167,
    0,45,213,124,239,209,1,227,255,169,232,109,16,203,39,70,
    102,248,139,108,171,79,140,12,43,87,149,27,69,138,27,244,
    9,139,174,44,88,181,3,136,169,151,17,126,246,33,87,176,
    11,235,187,160,167,32,244,24,3,244,124,19,244,28,39,201,
    200,143,166,51,12,156,154,245,169,247,140,77,185,157,28,200,
    210,176,59,55,118,188,80,216,147,228,51,127,73,27,150,145,
    79,184,193,97,234,39,65,108,188,186,174,66,181,221,141,223,
    252,67,174,168,50,121,98,9,200,54,246,119,251,54,243,61,
    16,129,80,175,243,202,34,72,189,235,132,206,186,138,37,252,
    178,243,104,119,21,183,225,4,17,245,194,84,76,88,220,230,
    65,220,83,41,124,190,165,61,112,240,188,230,24,177,147,11,
    159,166,8,129,115,170,220,53,66,70,230,238,52,57,182,235,
    187,134,184,155,238,189,115,136,113,27,254,172,17,255,30,80,
    39,197,94,225,111,167,204,81,14,200,85,14,221,117,67,59,
    72,33,167,194,126,128,198,238,123,78,159,188,195,114,31,72,
    252,119,128,7,137,82,105,188,86,49,42,70,223,204,204,220,
    221,17,240,16,222,243,218,79,162,177,54,56,67,135,247,90,
    230,55,218,218,112,80,107,10,18,14,84,176,18,123,169,90,
    117,56,12,152,125,222,158,79,64,123,151,193,252,9,240,138,
    34,224,169,67,229,166,166,185,185,19,62,230,50,4,245,195,
    115,103,7,153,253,47,207,139,157,145,60,30,216,146,151,158,
    59,51,139,12,230,179,1,102,232,64,64,19,102,92,58,152,
    88,152,17,118,125,230,69,79,62,145,112,205,222,206,97,246,
    35,147,66,9,106,121,28,237,71,84,142,179,183,223,214,117,
    5,135,81,125,77,51,184,180,205,151,251,1,53,193,101,97,
    191,204,180,130,94,146,242,13,73,110,71,124,131,138,66,203,
    177,80,252,89,250,254,48,47,94,11,91,198,213,169,213,63,
    55,7,65,62,85,87,72,37,237,37,94,118,193,144,34,241,
    193,78,87,233,90,27,126,39,166,58,144,44,71,37,168,101,
    21,238,91,190,47,226,210,113,11,196,162,34,189,242,60,212,
    34,148,238,51,243,87,64,174,139,130,198,185,24,28,53,170,
    252,91,226,216,212,202,173,174,255,88,210,211,202,218,205,115,
    22,218,2,173,153,162,166,107,153,154,160,32,209,192,129,61,
    5,154,209,250,219,149,84,248,68,74,183,141,130,148,149,67,
    185,202,176,54,156,107,45,44,145,232,117,64,123,11,220,202,
    13,75,113,85,102,69,107,86,202,2,182,206,157,73,206,205,
    91,214,221,76,151,50,119,38,177,162,152,219,249,228,50,159,
    89,222,225,50,46,176,28,95,34,63,223,129,45,46,253,248,
    194,97,5,145,171,230,173,187,42,136,226,29,25,88,189,176,
    197,23,187,117,229,206,203,5,193,126,120,64,211,18,212,53,
    52,251,125,202,210,16,16,230,87,24,13,234,46,67,210,201,
    173,38,58,30,152,214,250,149,107,158,128,17,8,192,124,248,
    106,134,85,54,53,55,251,248,255,14,4,99,162,237,99,156,
    141,78,176,198,171,92,250,183,64,6,12,178,156,235,250,111,
    76,40,151,243,241,24,116,122,251,237,80,107,94,180,10,109,
    159,71,245,192,250,209,74,221,190,138,165,197,71,175,225,141,
    10,251,138,176,97,222,55,154,60,132,144,244,115,148,91,16,
    141,95,146,163,69,28,221,188,132,63,212,245,114,124,146,62,
    48,241,26,133,199,166,18,253,128,215,35,60,54,125,213,114,
    89,150,63,149,215,152,18,30,162,80,116,85,240,224,226,150,
    104,86,91,216,94,149,182,79,24,114,244,5,163,127,20,228,
    149,178,91,9,56,249,55,238,38,174,96,204,76,20,59,202,
    3,59,102,141,108,71,185,111,196,60,168,208,70,153,226,111,
    225,181,208,149,7,49,46,6,247,151,245,3,95,178,34,203,
    195,152,57,184,60,34,203,143,101,185,242,229,211,218,67,170,
    34,175,223,200,166,170,32,213,236,177,199,229,123,75,25,166,
    248,207,178,107,228,41,76,165,28,211,231,34,244,209,1,76,
    155,159,227,111,101,103,12,145,136,81,205,238,141,208,74,120,
    156,138,108,180,120,182,155,52,13,67,96,214,176,42,0,13,
    122,200,245,115,124,214,76,199,114,151,13,117,46,130,140,103,
    14,104,175,51,174,115,209,69,115,5,110,93,23,134,70,132,
    161,159,155,220,129,120,229,22,183,193,16,63,50,185,142,203,
    227,246,244,0,236,244,136,220,242,228,17,84,112,157,212,184,
    102,15,152,66,103,6,24,229,150,248,75,70,199,0,63,55,
    211,23,6,192,184,99,28,67,224,197,201,135,108,214,203,91,
    94,218,106,91,55,238,191,155,32,22,56,150,118,197,249,106,
    213,226,159,235,59,150,171,214,156,158,159,94,176,210,182,151,
    88,28,109,218,145,107,73,226,76,44,39,116,45,125,173,75,
    120,89,229,103,173,7,188,85,206,175,170,182,243,216,227,232,
    211,114,66,196,35,215,75,240,244,225,90,171,59,22,135,2,
    73,37,56,184,161,118,182,162,216,181,56,18,245,224,213,114,
    248,28,94,198,129,232,28,158,243,214,112,43,189,96,109,181,
    61,38,55,240,214,219,18,224,92,149,120,49,64,90,222,26,
    103,48,63,245,186,190,146,211,81,87,197,142,188,10,90,120,
    194,242,98,224,114,172,172,250,205,72,101,132,202,90,143,132,
    140,8,240,248,208,90,20,7,188,193,11,5,76,162,159,191,
    84,38,144,165,40,85,111,8,127,185,40,2,135,89,209,66,
    4,39,193,64,252,68,80,238,75,5,4,166,109,71,179,230,
    229,68,105,81,96,23,52,48,111,221,73,5,32,243,202,28,
    251,189,164,205,93,223,194,139,189,18,253,240,78,77,214,160,
    150,222,202,164,150,188,33,195,124,213,186,120,209,90,206,98,
    160,219,63,161,119,180,186,189,119,248,62,143,45,115,145,239,
    54,121,124,193,10,213,22,58,231,173,180,199,82,76,52,240,
    239,103,170,249,18,146,92,59,128,113,95,139,45,151,239,130,
    54,138,167,4,176,213,86,97,38,42,22,184,166,68,194,111,
    127,14,100,37,201,73,158,146,4,214,117,18,182,49,203,7,
    161,172,30,49,192,53,78,74,208,170,124,241,145,32,71,8,
    31,82,188,176,173,169,140,118,160,6,99,44,213,11,204,22,
    255,59,47,183,174,4,223,192,112,66,100,72,33,74,155,44,
    109,94,119,18,5,5,0,222,146,218,130,50,172,185,51,201,
    121,236,211,82,215,84,240,126,6,170,117,149,156,248,138,205,
    121,90,117,152,200,199,106,94,106,172,3,123,220,72,105,212,
    73,175,139,231,71,89,225,188,228,70,143,85,60,207,169,68,
    200,131,99,157,233,219,8,187,205,218,154,138,21,138,180,125,
    243,98,10,192,204,61,77,207,0,185,131,184,15,172,254,31,
    220,120,5,201,170,251,3,102,140,179,75,115,71,243,10,64,
    178,52,164,33,69,155,205,183,80,47,208,149,157,126,67,134,
    252,165,104,243,153,224,130,206,249,82,109,107,152,77,192,148,
    42,66,94,72,50,201,235,10,98,164,111,12,202,189,215,75,
    37,107,103,180,54,83,103,67,53,65,168,212,17,205,1,96,
    137,92,137,217,78,247,203,75,169,56,53,36,134,99,55,243,
    58,163,43,79,210,118,185,95,129,226,138,97,183,242,10,20,
    56,238,49,138,91,113,20,232,10,84,88,116,114,98,51,175,
    17,124,185,249,203,2,159,89,197,123,180,188,249,162,146,145,
    119,119,237,87,210,207,92,75,78,102,243,154,236,108,65,63,
    147,103,43,77,72,172,126,80,98,205,144,43,61,219,123,110,
    53,176,22,214,13,166,228,159,24,181,1,255,72,217,24,54,
    199,13,220,208,79,113,93,116,130,43,164,81,60,144,202,51,
    41,62,163,70,225,169,118,146,219,178,49,49,48,55,109,22,
    228,209,117,66,158,103,167,140,177,226,100,17,117,86,205,172,
    155,83,50,171,223,95,166,164,204,151,244,192,245,63,196,172,
    66,102,204,135,77,229,63,117,146,225,23,31,234,223,113,154,
    59,7,253,92,67,51,155,223,21,56,218,236,95,44,228,185,
    82,172,129,35,161,126,169,183,39,243,50,86,158,91,130,203,
    243,189,212,243,231,241,240,191,133,155,122,246,101,192,132,94,
    203,31,232,231,229,155,0,91,30,33,94,203,189,0,7,229,
    219,19,187,144,155,200,93,103,27,47,126,118,23,179,242,141,
    11,40,214,22,23,228,231,150,162,80,217,87,49,133,215,81,
    251,62,154,239,160,193,115,142,60,235,13,92,146,196,68,97,
    140,246,7,185,177,218,187,148,213,211,125,242,240,221,129,189,
    119,192,60,14,255,251,39,54,196,158,175,222,68,96,73,64,
    254,40,107,120,180,32,109,246,91,103,59,225,79,161,204,90,
    175,241,111,189,52,122,189,204,22,81,153,173,148,42,51,149,
    34,255,22,42,213,74,117,252,253,255,2,220,90,55,9,
};

EmbeddedPython embedded_m5_simulate(
    "m5/simulate.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/python/m5/simulate.py",
    "m5.simulate",
    data_m5_simulate,
    3567,
    8324);

} // anonymous namespace
