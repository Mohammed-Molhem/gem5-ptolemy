#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_O3CPU[] = {
    120,156,173,152,89,115,19,73,18,128,75,242,33,95,96,97,
    48,247,209,220,226,212,0,3,3,12,195,96,203,50,104,48,
    182,105,201,65,172,95,20,173,174,146,85,118,171,91,116,117,
    27,123,99,246,137,125,219,135,157,136,253,7,251,75,246,113,
    31,247,31,237,102,102,117,73,37,155,97,98,35,64,86,211,
    245,85,86,86,102,29,89,89,242,89,246,111,4,190,175,28,
    198,212,30,188,112,248,203,177,128,177,110,142,109,230,88,14,
    203,121,22,228,89,35,123,27,209,111,35,44,24,101,221,81,
    182,57,218,151,25,211,53,163,44,24,103,221,113,182,57,174,
    107,198,88,80,96,221,2,219,44,64,121,156,137,81,214,206,
    49,94,96,127,101,236,51,99,127,218,156,96,124,130,213,75,
    147,208,185,252,47,252,43,229,224,45,153,128,71,43,149,1,
    175,134,187,154,224,227,182,126,45,192,99,209,83,162,178,190,
    161,1,54,94,123,84,233,8,127,71,196,26,205,162,76,236,
    133,126,103,61,22,92,250,73,20,39,83,192,150,68,44,119,
    65,118,125,195,55,3,48,138,162,56,0,127,131,55,193,208,
    111,48,124,51,143,35,177,57,130,22,131,123,104,46,20,199,
    168,56,98,138,228,15,184,156,21,11,76,76,176,237,73,116,
    26,92,253,156,103,155,83,134,20,208,77,36,211,68,102,24,
    7,56,69,228,136,69,166,137,28,181,200,12,145,89,139,28,
    33,82,52,154,143,50,62,75,228,152,33,69,198,143,17,153,
    179,90,205,17,57,110,145,227,68,78,88,228,4,145,121,139,
    204,19,57,105,245,117,146,200,41,75,230,20,145,211,22,57,
    77,228,140,69,206,16,57,107,233,57,75,228,156,37,115,142,
    200,121,67,206,51,126,129,200,5,75,230,34,145,139,150,158,
    75,68,46,89,196,33,226,88,228,50,145,203,134,192,223,21,
    34,87,136,92,101,226,26,174,69,126,149,224,117,171,187,107,
    68,110,88,228,58,145,155,150,242,27,68,74,22,185,73,228,
    150,105,85,98,252,22,145,219,150,158,219,68,238,152,86,119,
    24,191,75,228,174,69,238,17,185,103,200,125,198,203,68,238,
    91,228,59,34,101,67,30,48,254,144,200,119,68,30,48,241,
    144,241,71,68,30,25,153,239,25,127,76,228,123,67,158,48,
    254,3,145,199,22,121,74,228,137,53,104,207,136,252,96,200,
    115,198,127,36,242,212,34,47,136,60,195,45,176,249,156,137,
    31,25,255,137,157,225,47,217,78,158,197,225,136,120,193,182,
    159,162,111,39,160,50,100,89,59,1,237,126,166,118,63,89,
    75,248,21,145,151,134,44,48,190,72,228,103,203,162,10,145,
    87,68,64,96,137,241,42,145,69,67,150,25,127,77,164,66,
    4,4,222,48,94,35,82,181,100,126,33,178,108,201,188,37,
    242,218,146,89,33,242,198,146,121,71,164,102,100,86,25,95,
    35,242,11,145,183,76,188,101,124,157,137,21,182,13,146,16,
    253,222,83,237,170,153,25,123,108,184,75,117,107,140,215,49,
    152,108,174,51,183,94,106,64,96,114,199,224,161,48,154,249,
    189,180,28,61,42,115,12,96,247,59,29,31,195,156,249,86,
    48,124,97,28,131,144,85,47,229,225,101,53,25,199,48,40,
    187,50,220,42,97,148,211,97,17,131,189,31,40,77,240,161,
    94,192,163,188,161,68,172,202,157,104,71,164,225,142,236,150,
    151,196,174,8,162,94,87,132,73,185,90,125,248,224,217,82,
    121,75,116,31,151,85,236,151,51,59,40,134,222,239,237,39,
    211,160,160,43,186,81,188,223,236,70,92,220,66,165,104,1,
    203,127,217,196,132,129,137,72,86,181,73,200,26,113,42,168,
    228,22,140,97,223,200,186,163,160,32,22,31,83,25,139,166,
    239,249,29,161,238,253,159,6,186,147,102,244,190,185,113,199,
    80,75,218,235,193,217,212,76,188,29,209,140,118,69,252,96,
    96,159,164,110,142,192,163,22,202,68,122,129,227,71,105,152,
    200,127,35,198,113,175,160,71,206,58,180,87,18,45,84,243,
    116,196,249,48,15,78,18,57,109,145,248,29,135,139,192,219,
    167,26,87,132,94,247,80,205,13,212,175,84,42,202,213,61,
    225,167,137,40,127,136,101,34,90,158,191,243,37,37,149,168,
    219,149,201,129,26,57,97,76,90,38,248,73,242,164,35,95,
    33,60,219,135,173,180,221,22,177,163,228,159,133,35,67,167,
    181,159,8,165,78,14,217,197,181,237,186,183,155,95,55,108,
    72,246,228,144,101,67,85,243,125,3,14,214,204,12,70,139,
    12,254,163,30,99,109,231,151,122,60,84,53,152,133,161,170,
    153,129,187,131,46,7,106,126,175,115,61,200,184,42,168,193,
    96,192,190,218,64,61,52,254,160,168,208,66,186,202,41,201,
    48,17,113,8,107,10,170,18,88,69,181,234,7,71,37,222,
    150,184,165,112,211,44,73,213,243,250,83,73,83,171,53,233,
    50,70,164,65,111,95,98,92,244,128,157,192,193,79,67,63,
    145,17,246,181,1,235,216,233,69,81,240,71,67,237,235,33,
    209,110,92,28,114,57,22,81,12,81,208,44,167,193,184,102,
    195,168,141,65,80,255,152,122,202,44,70,220,70,68,27,177,
    215,115,2,47,17,161,191,175,230,6,139,195,194,146,162,238,
    93,20,150,208,169,189,112,219,17,244,12,70,126,242,98,174,
    200,204,52,148,190,135,254,169,219,191,215,0,190,40,63,44,
    46,29,236,228,60,6,154,180,219,2,241,168,237,4,145,199,
    157,143,169,128,113,134,0,18,75,216,32,23,134,4,20,36,
    178,98,88,66,98,208,82,119,134,196,122,129,231,11,133,163,
    165,58,178,157,56,30,231,96,182,104,99,99,31,243,100,85,
    195,241,233,68,105,192,113,166,68,200,209,111,103,87,70,129,
    246,5,164,181,164,224,228,2,90,166,156,27,218,0,229,0,
    217,78,85,146,21,229,111,255,25,97,164,114,216,149,178,54,
    87,134,42,81,166,123,92,107,208,163,211,51,121,57,152,72,
    102,180,80,112,215,11,36,135,73,224,18,243,114,114,126,197,
    131,126,40,214,128,41,90,97,226,181,2,65,195,171,78,161,
    31,4,149,72,156,218,146,93,119,102,200,32,55,91,55,139,
    52,57,74,98,212,87,215,134,135,173,179,175,96,118,2,7,
    55,199,22,176,88,108,73,5,251,68,29,28,95,35,216,6,
    55,19,56,99,97,81,67,155,129,60,93,54,26,11,238,235,
    106,163,89,171,47,208,193,187,247,244,137,186,244,101,53,190,
    111,117,117,117,72,6,7,47,78,105,3,29,152,247,127,225,
    188,59,67,194,7,246,134,89,67,184,129,234,239,26,206,64,
    144,214,60,218,221,232,196,2,102,54,161,253,2,32,16,25,
    41,102,109,244,238,232,69,129,244,245,97,191,238,197,137,68,
    115,4,167,72,135,66,43,245,247,78,189,227,197,168,113,157,
    68,37,71,235,174,90,245,168,23,166,26,102,186,47,233,197,
    176,167,209,231,249,76,174,118,80,141,186,50,168,249,154,2,
    99,136,187,182,120,80,195,85,171,234,43,42,104,198,92,56,
    95,185,27,181,96,208,143,101,205,178,168,162,149,145,80,152,
    118,179,49,162,65,210,215,76,167,127,207,164,37,89,13,105,
    25,54,234,107,206,59,74,142,28,76,142,2,202,56,48,140,
    79,154,140,227,159,58,227,128,196,237,12,220,245,118,198,89,
    252,119,188,96,226,61,58,135,183,240,191,192,45,60,201,99,
    62,253,43,99,219,35,120,177,132,148,9,238,147,201,24,94,
    41,225,249,153,141,66,85,115,156,253,154,195,164,24,197,10,
    108,123,2,83,78,124,31,103,205,130,85,53,57,92,165,225,
    20,203,138,83,44,156,197,123,233,235,55,48,213,120,27,213,
    191,1,212,75,24,61,87,93,92,36,180,148,189,184,107,221,
    214,49,213,92,136,187,141,149,69,186,184,127,138,226,29,220,
    253,180,90,196,158,76,214,194,106,28,67,146,130,74,210,30,
    110,111,67,142,163,184,23,135,107,97,176,191,22,174,64,35,
    205,41,164,225,22,198,24,92,117,221,53,247,185,147,221,239,
    157,8,100,157,44,109,130,136,0,19,6,112,193,125,231,192,
    62,187,76,105,16,89,165,50,59,75,116,228,98,38,229,98,
    111,46,98,23,143,165,4,131,252,178,23,40,65,41,30,253,
    172,160,35,94,76,62,202,164,229,158,54,14,243,164,69,110,
    66,10,215,132,227,100,52,243,140,114,109,109,173,8,218,212,
    193,183,76,16,113,192,32,116,103,158,87,122,233,63,80,45,
    174,117,150,43,230,138,249,217,220,56,124,102,114,231,224,51,
    55,50,150,43,189,103,217,143,39,205,38,30,151,205,38,45,
    216,38,102,230,105,128,69,74,112,247,123,130,184,191,183,215,
    236,192,58,6,135,113,170,252,192,83,10,246,66,39,226,46,
    234,112,105,71,76,155,161,162,157,66,202,55,66,37,183,96,
    251,83,193,131,208,180,43,19,189,53,40,197,166,124,148,70,
    171,178,239,7,66,37,120,200,234,196,171,17,81,56,89,194,
    51,155,176,78,142,134,48,166,17,82,124,58,36,170,83,130,
    33,140,93,210,201,240,1,143,120,106,73,69,29,226,235,176,
    128,104,133,153,78,116,78,166,155,22,77,47,54,60,110,117,
    99,243,57,163,120,24,79,247,253,210,253,247,117,234,100,229,
    176,206,131,220,12,138,205,167,251,6,15,148,154,246,144,163,
    13,172,55,94,245,33,106,148,152,82,53,162,44,167,210,28,
    87,17,207,210,57,173,115,202,72,234,34,174,252,79,45,251,
    125,9,147,55,154,194,229,141,117,72,215,72,199,146,104,123,
    105,144,100,4,43,219,41,189,246,253,214,177,242,176,137,16,
    122,7,206,105,103,116,111,88,86,148,165,13,202,152,136,173,
    232,60,140,148,232,129,183,32,10,97,10,6,189,209,20,99,
    186,154,101,88,6,225,134,94,121,95,213,199,31,149,234,253,
    18,234,132,243,8,92,164,125,85,199,4,137,246,197,34,248,
    162,67,193,17,45,66,245,24,148,84,130,123,142,114,143,38,
    164,25,77,88,213,94,220,236,193,85,60,210,155,96,101,185,
    222,160,142,177,80,175,215,116,161,160,15,11,56,79,20,25,
    9,239,235,112,226,215,194,196,21,91,218,144,12,45,99,26,
    65,16,79,194,38,215,35,189,170,43,43,21,172,161,16,70,
    118,214,33,212,144,137,161,93,79,39,56,144,90,223,209,76,
    4,6,223,16,84,174,186,168,215,156,255,230,248,199,217,172,
    39,120,34,146,165,32,68,18,217,169,55,163,17,12,73,6,
    48,36,130,27,180,227,116,69,255,100,213,115,218,77,106,70,
    246,168,41,15,68,50,125,96,89,38,51,219,7,3,161,140,
    233,53,165,229,220,81,115,220,64,48,130,0,234,226,33,77,
    171,185,213,255,173,151,166,32,20,144,156,192,225,235,58,67,
    17,249,219,132,101,250,77,230,58,106,250,13,30,24,129,199,
    243,179,163,248,153,203,195,39,7,159,193,211,188,13,254,55,
    239,240,153,183,222,45,233,220,100,246,233,183,28,25,207,21,
    11,197,1,203,29,248,228,103,168,238,120,110,50,191,74,191,
    165,211,160,116,31,223,135,149,36,67,145,45,158,73,205,122,
    24,200,21,141,19,150,226,104,111,223,197,115,204,93,232,159,
    143,56,206,228,230,183,30,59,234,245,133,62,142,94,98,118,
    79,151,205,98,110,10,62,69,250,22,243,255,3,150,113,49,
    86,
};

EmbeddedPython embedded_m5_objects_O3CPU(
    "m5/objects/O3CPU.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/cpu/o3/O3CPU.py",
    "m5.objects.O3CPU",
    data_m5_objects_O3CPU,
    2529,
    6299);

} // anonymous namespace
