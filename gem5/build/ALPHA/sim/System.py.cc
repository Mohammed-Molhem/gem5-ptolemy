#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_System[] = {
    120,156,173,86,221,115,19,55,16,215,217,206,151,227,124,16,
    72,160,124,170,161,80,211,233,196,45,83,58,109,96,24,40,
    228,129,7,40,227,64,103,154,151,155,243,73,182,21,235,164,
    155,147,28,226,78,223,210,254,221,116,119,229,115,46,180,180,
    101,38,190,156,34,253,180,90,173,118,127,171,219,148,77,127,
    117,120,159,112,198,156,129,142,128,191,136,105,198,178,136,29,
    68,44,194,113,141,233,26,203,234,236,160,30,198,117,166,27,
    236,205,180,55,55,235,205,67,175,193,228,2,235,71,76,204,
    177,63,24,59,97,236,215,131,69,38,230,153,92,34,116,97,
    134,54,153,88,100,251,237,37,216,82,189,135,95,59,130,158,
    199,225,190,202,126,238,29,202,212,7,104,17,154,222,88,105,
    177,103,142,2,130,205,87,190,9,237,75,153,217,98,242,210,
    10,153,150,135,105,192,251,19,30,230,42,116,36,195,51,132,
    35,193,41,192,200,65,131,29,212,88,119,191,141,114,126,1,
    119,55,71,137,86,194,207,67,63,241,54,83,41,117,189,202,
    148,25,248,11,51,52,54,214,164,73,58,4,180,93,47,13,
    139,99,147,100,50,142,201,154,56,206,172,24,107,28,162,118,
    80,235,218,104,210,105,227,118,161,233,188,117,178,112,157,161,
    29,201,177,25,169,172,243,92,30,73,109,243,76,26,223,217,
    219,187,255,237,143,207,59,3,153,61,232,184,34,237,56,152,
    223,159,56,47,179,157,124,210,197,125,239,162,30,212,63,207,
    150,34,50,53,204,207,60,80,47,61,240,103,84,241,0,156,
    26,156,0,17,148,13,116,197,9,244,231,152,156,71,159,96,
    72,96,184,64,195,70,57,92,196,152,29,54,153,92,102,135,
    45,140,231,73,141,29,172,48,185,202,14,215,48,162,16,75,
    68,214,73,236,2,27,48,12,40,34,27,36,115,145,137,37,
    38,154,132,92,34,100,147,137,101,38,90,132,108,149,200,10,
    19,171,132,92,174,200,172,17,114,133,144,207,152,88,103,226,
    2,33,87,43,200,6,33,215,42,200,69,66,174,87,144,75,
    132,220,168,32,155,132,220,36,228,22,33,91,132,112,66,62,
    103,226,50,19,87,8,217,46,17,88,120,149,144,219,21,228,
    26,33,95,84,144,235,132,220,41,53,223,96,226,38,33,119,
    145,108,183,32,36,221,101,12,220,10,54,16,83,23,98,58,
    28,186,229,89,4,121,110,11,159,214,96,92,190,207,48,140,
    171,208,249,61,194,232,157,132,124,220,111,227,220,43,119,5,
    218,219,202,164,122,44,36,223,62,163,117,59,112,14,229,60,
    242,33,213,142,56,153,66,170,156,27,29,61,165,216,49,90,
    29,103,210,15,173,136,211,227,227,56,47,36,228,163,118,59,
    184,3,90,192,106,159,112,168,30,180,77,78,191,61,51,206,
    220,238,238,105,146,243,129,244,167,163,246,61,158,90,227,252,
    195,169,248,145,85,130,187,51,18,127,215,0,25,42,239,61,
    108,158,186,167,219,194,102,229,60,211,212,175,126,232,23,119,
    191,76,90,86,171,215,233,106,122,170,53,207,208,46,37,29,
    87,134,251,161,228,33,124,221,57,20,6,39,177,55,195,96,
    48,77,146,240,100,42,195,21,46,114,219,104,123,98,6,160,
    194,15,19,31,252,161,252,216,131,120,2,74,195,26,245,4,
    21,34,91,158,193,253,37,185,86,6,246,82,191,73,220,183,
    55,241,210,209,13,236,54,81,44,151,169,234,171,148,191,179,
    197,136,43,218,74,168,117,156,193,205,94,141,179,158,44,184,
    237,115,161,96,39,147,250,138,160,159,228,210,185,111,64,140,
    48,231,147,194,75,193,173,225,51,173,74,124,205,141,125,199,
    229,177,242,96,66,54,214,137,87,214,40,242,250,99,36,104,
    33,19,176,30,204,76,71,185,85,6,244,15,165,57,221,196,
    241,158,28,128,217,169,29,195,28,92,177,99,137,190,128,85,
    176,68,184,71,228,249,51,186,63,93,193,127,219,32,141,248,
    152,130,221,255,97,193,191,44,255,225,227,251,39,169,87,71,
    0,231,227,143,45,198,79,3,48,94,22,42,77,244,116,218,
    91,158,39,14,217,2,189,169,77,64,76,252,134,38,68,178,
    158,181,158,247,117,50,112,51,89,248,143,140,27,201,194,72,
    237,89,25,252,190,210,114,198,51,15,252,114,21,49,142,87,
    11,41,12,98,22,173,18,129,4,227,156,187,180,80,57,236,
    83,216,204,93,175,8,65,70,79,169,159,245,172,118,36,240,
    2,217,248,30,119,189,131,137,34,68,33,131,81,89,226,70,
    92,219,68,192,55,152,247,148,73,40,121,222,41,63,108,127,
    137,153,128,95,228,46,150,16,116,215,33,29,233,187,140,151,
    210,16,140,145,69,40,26,18,200,160,226,53,56,193,211,149,
    76,9,21,231,229,56,213,224,130,144,182,93,76,228,238,26,
    234,194,153,95,160,38,177,197,235,164,72,50,74,241,167,61,
    231,11,136,74,184,94,104,207,125,169,251,116,225,38,90,83,
    129,80,166,184,199,164,166,165,221,89,241,0,115,88,49,72,
    170,122,240,152,148,202,100,35,78,21,148,216,36,249,214,56,
    53,48,82,120,180,5,139,16,25,99,18,199,152,196,180,221,
    11,227,125,107,154,120,49,146,44,134,138,166,21,232,16,7,
    80,56,191,85,74,80,10,196,192,36,128,99,100,43,85,66,
    207,144,85,224,164,205,15,196,70,185,143,137,113,31,206,224,
    202,233,204,197,114,6,184,93,93,113,6,175,200,95,42,113,
    48,194,85,23,96,65,243,22,142,243,253,119,228,8,101,96,
    73,78,46,167,82,199,23,88,149,181,166,188,141,173,35,230,
    210,220,148,174,232,47,164,30,50,140,84,4,106,209,16,163,
    134,252,137,19,240,118,140,116,58,231,2,13,105,114,175,188,
    203,230,35,124,90,181,181,198,218,66,43,90,138,54,230,54,
    106,240,68,27,208,255,199,135,230,194,179,20,189,106,163,50,
    58,106,246,96,103,86,20,119,209,204,192,145,7,59,66,246,
    129,6,174,59,171,157,1,35,103,5,218,224,168,176,199,19,
    82,2,26,114,45,43,92,197,143,99,32,35,174,132,137,233,
    6,203,103,60,114,46,31,68,52,230,81,40,142,31,99,45,
    228,208,160,245,104,61,106,70,205,90,179,182,85,255,11,90,
    193,62,107,
};

EmbeddedPython embedded_m5_objects_System(
    "m5/objects/System.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/sim/System.py",
    "m5.objects.System",
    data_m5_objects_System,
    1395,
    3212);

} // anonymous namespace
