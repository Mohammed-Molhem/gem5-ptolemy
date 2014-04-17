#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IdeDisk[] = {
    120,156,197,88,255,111,227,72,21,127,99,59,105,147,54,219,
    116,219,110,183,221,238,213,8,85,132,19,215,112,11,123,7,
    220,106,117,11,93,233,138,80,111,113,64,221,13,8,227,218,
    147,196,105,98,71,246,180,123,57,181,191,208,21,240,3,18,
    127,4,226,7,254,15,254,47,120,239,141,237,58,237,85,58,
    9,46,215,198,163,241,155,241,155,247,229,243,222,188,25,31,
    178,191,10,62,159,218,0,105,34,0,2,252,9,24,1,140,
    5,116,5,8,41,32,88,131,211,10,36,63,134,160,2,239,
    0,186,6,72,3,174,176,99,194,239,12,136,150,249,155,42,
    140,76,166,8,152,214,65,90,208,173,192,113,180,10,150,172,
    194,105,29,146,63,130,16,34,18,240,58,88,128,96,17,222,
    33,119,236,212,152,225,34,4,117,238,212,32,88,226,78,29,
    166,77,144,75,208,69,230,11,208,109,32,171,247,145,213,61,
    102,245,111,98,21,224,200,58,4,13,154,142,178,188,161,153,
    22,205,228,53,238,49,151,149,92,178,38,116,87,243,254,253,
    82,127,173,212,95,47,245,55,184,191,2,114,21,134,15,96,
    184,9,195,135,208,67,67,52,139,213,182,64,154,48,220,134,
    238,54,72,252,109,193,21,218,42,88,45,125,241,136,191,184,
    95,124,177,195,95,60,134,238,99,144,248,219,209,95,84,161,
    211,218,64,251,135,255,193,191,22,218,31,212,50,54,231,50,
    73,195,56,114,195,168,23,135,6,141,87,169,33,111,249,212,
    44,100,110,251,5,185,237,95,192,62,11,140,204,109,151,128,
    140,5,233,50,50,224,146,59,151,6,76,91,112,33,96,104,
    65,96,194,5,46,83,33,1,250,2,174,12,248,189,73,19,
    46,177,181,208,208,239,129,165,180,207,134,108,104,205,105,1,
    46,43,112,81,129,206,235,11,131,8,167,53,72,254,9,95,
    238,48,211,69,102,106,192,5,182,22,92,89,112,89,133,99,
    156,132,164,97,141,212,23,175,47,80,83,164,116,90,22,74,
    123,84,82,151,84,9,194,36,242,198,82,221,195,190,59,241,
    18,111,236,30,6,242,32,76,79,91,245,124,78,156,238,79,
    60,53,112,248,35,147,172,49,158,40,102,22,71,82,45,97,
    167,23,70,129,59,142,131,179,145,84,139,196,201,237,133,35,
    233,186,60,120,56,158,196,137,122,153,36,113,226,144,65,153,
    56,138,189,226,11,50,167,63,138,83,217,162,213,120,25,135,
    216,43,154,221,155,48,71,18,128,5,165,143,3,153,250,73,
    56,81,232,39,205,145,102,19,183,22,121,136,155,244,53,54,
    237,223,166,232,205,246,32,62,149,103,209,105,56,110,31,200,
    115,57,138,39,99,25,169,246,203,151,79,62,252,233,65,187,
    47,199,79,219,39,103,225,40,104,191,248,213,171,207,94,180,
    39,83,53,136,163,54,82,195,72,73,180,206,168,61,99,151,
    125,156,112,159,86,120,27,246,221,144,117,115,7,114,52,145,
    73,131,168,219,180,186,104,138,101,81,21,166,104,137,6,246,
    42,248,152,98,199,88,18,71,33,105,231,147,198,4,43,51,
    7,210,63,128,93,134,30,63,53,32,217,33,152,12,241,39,
    200,175,8,150,14,141,25,60,246,107,50,139,166,14,77,114,
    190,38,94,48,180,16,99,56,243,25,121,59,2,198,71,5,
    134,85,208,184,65,184,105,32,37,83,106,113,58,177,49,144,
    185,5,233,223,103,57,68,77,64,179,99,88,35,233,1,46,
    245,39,134,98,167,69,130,31,49,40,212,32,76,227,183,17,
    155,158,250,28,60,29,180,201,171,233,231,39,67,233,171,116,
    23,9,111,226,51,219,247,162,40,86,182,23,4,182,167,84,
    18,158,156,41,153,218,42,182,247,210,86,141,124,189,154,227,
    170,224,55,157,228,56,34,159,35,142,244,75,16,250,10,95,
    214,248,133,237,159,74,133,152,24,196,65,138,116,98,209,151,
    202,33,33,25,208,47,242,229,24,124,173,106,14,149,84,142,
    122,170,206,168,243,210,212,229,229,136,206,0,163,175,207,189,
    209,153,84,52,63,85,158,194,85,169,171,23,154,23,196,30,
    146,146,185,142,100,55,55,138,163,96,138,34,134,254,30,173,
    254,144,129,182,12,4,181,13,132,217,2,182,85,104,32,236,
    154,134,79,218,88,25,200,24,96,15,72,119,96,167,139,44,
    95,32,216,174,48,171,180,12,78,11,172,22,135,158,77,61,
    250,216,33,44,59,143,168,217,161,230,113,174,249,28,212,111,
    220,84,255,9,45,105,176,206,190,153,105,87,132,207,209,76,
    248,108,93,135,15,38,192,14,133,129,65,193,114,29,6,38,
    233,159,60,207,48,79,1,134,110,199,225,18,210,217,42,78,
    147,180,173,230,32,117,8,121,101,248,245,75,240,115,200,33,
    140,61,103,235,46,11,238,126,43,22,236,107,11,62,165,37,
    151,51,212,52,24,45,117,225,147,203,141,204,158,108,203,3,
    236,76,55,201,150,101,43,110,226,110,118,28,53,120,91,226,
    173,141,55,123,157,50,180,113,117,199,34,124,245,76,120,144,
    109,55,41,69,248,36,137,191,152,218,113,207,86,144,203,240,
    108,47,221,223,75,63,193,28,96,63,231,172,162,179,128,142,
    243,68,78,18,140,231,26,191,232,24,117,57,94,221,108,203,
    64,107,211,214,205,78,98,27,115,74,74,85,66,153,104,94,
    6,174,23,6,38,121,63,161,245,234,108,93,19,54,241,169,
    11,22,202,141,57,27,114,237,192,163,248,252,156,236,76,170,
    74,160,74,207,233,104,145,89,27,210,203,249,222,12,78,190,
    121,93,156,247,145,249,65,30,97,85,40,80,65,143,73,210,
    18,232,255,2,92,88,9,248,51,16,2,208,209,89,152,112,
    64,210,67,142,92,163,233,127,0,78,52,95,177,159,25,58,
    220,140,44,21,97,52,166,31,243,84,189,189,253,18,254,90,
    202,82,87,38,8,218,138,204,172,116,42,111,69,86,17,160,
    12,157,175,181,221,88,179,145,76,254,25,120,41,77,211,49,
    107,22,49,123,157,240,138,170,7,19,209,28,80,181,168,87,
    114,73,168,195,107,76,81,158,127,36,214,140,18,82,126,64,
    205,7,5,72,68,78,251,102,229,219,189,153,152,75,251,146,
    171,147,225,103,36,132,197,98,175,84,217,200,217,247,69,16,
    84,242,32,120,82,4,129,228,228,252,142,235,105,106,13,114,
    249,149,33,240,96,131,101,8,157,41,44,144,21,232,86,41,
    92,184,98,20,89,52,137,60,115,81,198,155,201,252,108,147,
    35,109,173,194,235,218,161,212,124,49,175,76,65,62,125,54,
    242,198,39,129,247,156,22,74,105,73,63,143,47,35,151,191,
    89,150,159,98,67,220,165,2,191,254,48,215,227,124,94,89,
    226,67,100,94,200,207,49,17,196,62,167,134,223,12,164,61,
    150,227,19,92,119,16,78,236,222,200,235,179,127,204,76,191,
    207,115,253,20,59,248,230,62,155,82,254,57,138,109,63,142,
    48,137,159,249,42,78,236,64,226,169,66,6,246,7,54,239,
    0,118,152,218,222,9,142,122,190,210,88,159,141,88,46,224,
    188,164,159,114,173,118,250,150,186,243,244,175,139,39,198,16,
    171,211,55,185,125,244,97,166,72,231,250,132,197,129,131,219,
    33,158,22,212,84,39,175,143,168,249,62,53,123,48,231,172,
    223,70,230,199,180,10,153,172,138,249,165,38,184,108,200,166,
    188,162,249,233,237,160,253,219,215,9,90,125,15,145,133,110,
    149,102,202,5,58,174,82,91,163,180,223,173,231,196,37,110,
    151,153,216,200,137,247,184,93,97,98,51,191,255,88,101,226,
    125,232,174,209,101,1,81,214,41,29,44,252,175,233,128,99,
    105,158,81,228,254,95,179,128,243,228,219,18,223,249,17,100,
    197,193,93,25,64,148,117,107,232,12,48,20,121,217,93,86,
    140,79,242,235,55,225,231,250,137,244,148,212,110,218,158,159,
    158,156,70,244,218,94,225,172,92,153,226,224,241,113,161,208,
    21,215,68,211,245,82,69,204,190,19,199,88,192,96,213,124,
    193,58,187,134,46,156,175,209,104,21,170,147,99,35,249,214,
    157,81,95,151,197,36,139,55,153,200,40,184,46,121,121,100,
    94,78,255,72,135,124,81,141,96,125,187,142,207,237,160,35,
    117,74,218,177,215,42,69,152,205,209,127,140,211,97,238,57,
    190,233,187,78,198,14,249,77,167,223,34,243,58,63,43,60,
    177,121,11,132,129,28,121,83,58,72,221,57,134,213,16,95,
    29,240,155,218,186,61,43,9,207,229,225,1,243,184,123,148,
    184,240,181,156,126,255,138,213,194,177,215,151,119,72,162,199,
    114,73,248,141,61,199,81,133,130,73,37,103,209,165,200,4,
    217,89,54,144,184,185,198,83,60,105,241,177,133,212,114,221,
    185,110,71,63,65,230,116,112,72,233,122,141,182,163,42,110,
    72,27,252,95,179,106,130,247,250,27,87,178,90,180,247,32,
    47,209,167,169,195,105,105,165,240,37,95,30,230,27,46,135,
    43,29,43,143,188,177,190,20,226,219,14,231,59,212,124,55,
    135,3,135,155,62,182,241,193,72,31,68,49,52,185,16,225,
    186,195,217,39,58,93,170,140,159,238,231,26,237,203,232,140,
    21,66,199,25,60,164,30,221,152,161,117,38,133,15,201,59,
    119,140,119,194,177,190,67,227,156,80,30,15,18,15,251,27,
    55,168,232,143,208,27,133,95,234,75,179,156,172,200,8,55,
    25,146,42,197,27,23,0,229,148,203,72,72,100,63,76,145,
    5,127,95,204,205,210,17,249,72,109,223,66,94,249,187,121,
    98,70,151,214,250,82,224,57,93,13,167,159,98,67,87,98,
    181,149,154,168,26,116,239,106,138,186,104,8,75,44,55,106,
    102,173,90,171,152,136,43,162,172,137,186,89,171,47,139,252,
    127,23,49,86,55,118,27,53,241,95,169,129,170,176,
};

EmbeddedPython embedded_m5_internal_param_IdeDisk(
    "m5/internal/param_IdeDisk.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_IdeDisk.py",
    "m5.internal.param_IdeDisk",
    data_m5_internal_param_IdeDisk,
    2174,
    6560);

} // anonymous namespace
