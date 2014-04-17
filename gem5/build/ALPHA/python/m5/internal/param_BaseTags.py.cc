#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseTags[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,180,37,75,177,
    28,59,113,190,56,181,138,193,152,86,172,214,154,54,235,134,
    6,65,211,58,64,91,12,110,70,117,112,162,22,227,104,242,
    36,81,166,72,129,60,39,85,97,255,50,7,219,126,219,31,
    49,236,135,253,31,251,191,182,247,222,145,148,228,196,107,129,
    109,170,45,30,142,143,119,239,238,189,247,121,95,238,124,200,
    255,42,248,124,220,2,200,82,1,16,224,79,64,4,48,22,
    208,19,32,164,128,96,19,78,42,144,126,0,65,5,94,1,
    244,12,144,6,92,96,199,132,175,13,136,235,60,199,134,200,
    100,138,128,105,13,164,5,189,10,28,197,27,96,73,27,78,
    106,144,254,1,132,16,177,128,103,193,10,4,171,240,10,185,
    99,167,202,12,87,33,168,113,167,10,193,26,119,106,48,109,
    130,92,131,30,50,95,129,94,3,89,189,131,172,174,49,171,
    127,18,171,0,191,108,65,208,160,225,184,151,231,52,210,162,
    145,188,198,53,230,178,94,236,172,9,189,141,162,127,125,174,
    191,57,215,223,154,235,223,224,254,58,200,13,24,221,132,209,
    54,140,110,65,31,21,209,44,87,187,13,210,132,209,29,232,
    221,1,137,191,219,112,129,186,10,54,230,102,220,229,25,215,
    203,25,59,60,227,30,244,238,129,196,223,142,158,97,67,183,
    125,3,245,31,254,11,255,218,168,127,80,117,108,94,200,52,
    11,147,216,13,227,126,18,26,244,221,166,134,172,229,83,179,
    146,155,237,83,50,219,63,128,109,22,24,185,217,206,1,25,
    11,146,37,50,224,156,59,231,6,76,219,112,38,96,100,65,
    96,194,25,46,83,161,13,12,4,92,24,240,141,73,3,206,
    177,181,80,209,111,129,165,180,205,70,172,104,205,105,5,206,
    43,112,86,129,238,179,51,131,8,39,85,72,255,14,223,237,
    48,211,85,102,106,192,25,182,22,92,88,112,110,195,17,14,
    66,210,168,74,226,139,103,103,40,41,82,186,109,11,119,123,
    56,39,46,137,18,132,105,236,141,165,90,199,190,59,241,82,
    111,236,126,226,101,242,43,111,144,181,107,197,160,36,219,159,
    120,106,232,240,44,147,212,49,158,40,230,150,196,82,173,97,
    167,31,198,129,59,78,130,211,72,170,85,98,229,246,195,72,
    186,46,127,252,124,60,73,82,245,36,77,147,212,33,141,50,
    49,74,188,114,6,233,211,143,146,76,182,105,53,94,198,33,
    246,138,70,247,39,204,145,54,192,59,165,201,129,204,252,52,
    156,40,52,148,230,72,163,137,91,155,76,196,77,246,28,155,
    206,239,50,52,103,103,152,156,200,211,248,36,28,119,14,228,
    11,25,37,147,177,140,85,231,201,147,251,239,253,250,160,51,
    144,227,7,157,227,211,48,10,58,143,127,243,244,179,199,157,
    201,84,13,147,184,131,212,48,86,18,213,19,117,22,21,179,
    143,35,174,211,18,47,195,129,27,178,112,238,80,70,19,153,
    54,136,122,135,150,23,77,81,23,182,48,69,91,52,176,87,
    193,199,20,59,198,154,56,12,73,60,159,68,38,96,153,5,
    148,254,6,108,52,180,249,137,1,233,14,1,101,132,63,65,
    150,69,184,116,233,155,193,223,126,75,122,209,212,145,73,230,
    215,196,51,6,23,162,12,71,62,36,123,199,192,8,169,192,
    200,6,141,28,4,156,134,82,58,165,22,135,19,27,3,153,
    91,144,253,117,145,67,220,4,212,59,58,54,146,110,226,82,
    127,100,48,118,219,180,241,67,70,133,26,134,89,242,50,102,
    221,83,159,221,167,139,58,121,58,253,242,120,36,125,149,237,
    34,225,121,114,218,242,189,56,78,84,203,11,130,150,167,84,
    26,30,159,42,153,181,84,210,218,203,218,85,50,246,70,1,
    172,146,223,116,82,0,137,140,142,64,210,47,65,232,43,124,
    217,228,23,214,127,38,21,130,98,152,4,25,210,137,197,64,
    42,135,54,169,174,97,243,184,88,142,209,215,182,11,172,100,
    50,234,171,26,195,206,203,50,151,151,35,58,35,140,102,191,
    240,162,83,169,104,124,166,60,133,171,82,87,47,180,52,140,
    221,34,41,11,33,73,113,110,156,196,193,20,247,24,250,123,
    180,252,45,70,90,29,8,107,55,16,103,43,216,218,208,64,
    220,53,13,159,196,177,114,148,49,194,110,146,240,192,86,23,
    121,200,64,180,93,96,96,105,27,28,25,88,46,118,190,22,
    245,104,178,67,96,118,238,82,179,67,205,189,66,244,101,200,
    223,184,44,255,125,90,211,96,161,125,51,23,175,116,160,195,
    5,7,186,61,115,32,12,130,93,114,4,131,220,101,230,8,
    38,41,32,125,148,163,158,92,12,13,143,159,231,176,206,106,
    113,154,36,174,93,192,212,33,236,205,3,112,48,7,64,135,
    44,194,232,115,110,95,165,194,221,31,71,133,3,173,194,7,
    180,102,61,199,77,131,241,82,19,62,25,221,200,21,202,202,
    60,192,206,116,155,148,57,175,198,109,76,105,71,113,131,115,
    19,231,55,206,248,58,106,104,237,234,142,69,8,235,155,112,
    51,207,57,25,57,249,36,77,190,157,182,146,126,75,65,177,
    135,135,123,217,254,94,246,17,134,129,214,35,14,44,58,16,
    104,87,79,229,36,69,151,174,242,139,118,83,151,93,214,205,
    211,6,170,155,242,55,91,137,149,204,81,41,83,41,5,163,
    165,105,184,86,106,152,54,252,17,45,88,99,245,154,176,141,
    79,77,240,174,220,132,35,34,87,16,252,21,159,79,72,209,
    36,171,4,170,247,156,174,222,51,139,67,130,57,63,93,64,
    202,18,132,113,222,65,238,7,133,147,217,80,226,130,30,147,
    182,75,184,255,51,112,125,37,224,79,64,24,64,83,231,158,
    194,62,73,15,153,114,147,134,255,30,56,216,188,33,169,25,
    218,227,140,60,28,161,67,102,31,242,80,157,227,190,128,191,
    204,69,170,11,19,4,229,35,51,175,160,230,243,145,85,250,
    40,131,231,7,229,28,107,209,153,201,64,67,47,163,97,218,
    109,205,210,109,103,65,175,172,125,48,22,45,3,87,171,122,
    41,151,118,245,249,12,85,20,236,239,138,77,99,14,43,63,
    167,230,221,18,38,162,160,253,159,55,184,123,57,58,207,101,
    39,87,71,196,207,104,23,22,239,123,221,102,137,10,6,165,
    35,84,10,71,184,95,58,130,228,16,253,138,43,107,106,13,
    178,250,133,33,240,136,131,229,8,157,46,44,144,21,232,217,
    228,50,92,58,138,220,163,68,17,190,40,236,45,196,127,214,
    202,161,214,87,105,120,109,83,106,190,93,90,184,32,37,60,
    140,188,241,113,224,61,122,70,203,209,154,126,225,99,70,33,
    64,115,94,0,242,15,113,149,12,252,250,139,66,144,23,75,
    11,21,239,33,247,82,0,118,140,32,241,57,62,124,53,148,
    173,177,28,31,227,194,195,112,210,234,71,222,128,45,100,230,
    2,126,89,8,168,216,196,151,243,109,70,65,232,48,105,249,
    73,140,177,252,212,87,73,218,10,36,30,48,100,208,122,183,
    197,137,160,21,102,45,239,24,191,122,190,210,120,95,116,91,
    46,229,188,116,144,113,213,118,242,146,186,75,181,176,139,199,
    199,16,11,213,231,133,130,244,193,166,140,234,92,155,106,231,
    193,180,136,7,7,53,213,33,236,151,212,252,140,154,61,88,
    118,240,239,32,247,35,90,134,148,102,99,148,169,10,222,103,
    49,230,41,205,120,131,231,94,252,16,207,213,215,18,56,64,
    218,48,90,225,118,149,162,126,175,90,16,107,220,174,49,177,
    94,16,27,220,94,99,226,122,225,254,77,38,110,64,239,122,
    113,47,178,73,161,192,254,111,67,1,187,209,82,29,200,253,
    159,70,0,231,254,143,182,127,231,125,200,171,131,171,188,223,
    128,185,90,253,67,237,253,218,34,88,67,76,183,230,106,72,
    150,85,28,97,194,199,58,243,140,43,80,215,208,165,230,204,
    124,156,194,249,232,79,39,241,88,190,116,23,97,170,43,73,
    130,132,55,153,200,56,152,85,137,252,101,105,90,34,135,14,
    96,150,190,177,36,220,194,231,117,156,90,122,96,33,31,227,
    177,82,34,243,206,178,45,27,150,145,107,107,33,114,57,100,
    58,29,171,202,48,165,237,176,253,90,168,112,179,240,59,73,
    7,143,43,191,97,229,160,143,227,248,162,238,189,62,232,56,
    74,252,147,25,155,255,60,130,152,145,150,103,36,245,214,235,
    19,134,24,151,35,79,201,216,159,50,207,239,25,66,76,233,
    198,105,142,198,54,85,164,145,64,70,82,201,75,200,83,164,
    156,252,108,24,72,76,82,201,20,15,46,124,8,192,247,200,
    117,151,27,213,127,133,220,169,12,231,128,66,81,221,198,67,
    31,253,87,173,170,224,148,121,233,150,83,239,140,212,162,203,
    221,105,230,176,135,175,151,150,230,235,184,34,109,177,43,211,
    33,237,208,27,235,91,22,190,61,112,222,166,230,39,5,78,
    216,19,245,25,136,15,25,250,88,135,110,203,249,156,211,183,
    179,79,116,170,42,199,15,246,11,129,246,181,64,159,146,73,
    101,160,175,149,248,86,112,252,128,209,112,197,208,131,100,236,
    33,253,238,27,71,116,195,113,206,104,227,210,247,32,165,89,
    55,46,81,209,50,161,23,17,156,72,240,130,204,87,0,111,
    218,29,37,156,5,10,39,86,230,90,216,133,193,145,202,65,
    152,33,47,102,180,48,33,143,96,100,57,22,225,178,231,204,
    77,94,42,150,116,241,170,15,223,143,200,41,178,143,177,161,
    203,167,234,122,85,216,6,93,113,154,162,38,26,194,18,245,
    70,213,172,218,213,138,137,120,35,202,166,168,153,213,90,93,
    20,255,187,136,190,154,177,91,175,138,127,3,112,222,152,230,
};

EmbeddedPython embedded_m5_internal_param_BaseTags(
    "m5/internal/param_BaseTags.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ALPHA/python/m5/internal/param_BaseTags.py",
    "m5.internal.param_BaseTags",
    data_m5_internal_param_BaseTags,
    2144,
    6413);

} // anonymous namespace
