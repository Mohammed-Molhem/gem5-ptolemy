#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPortProxy[] = {
    120,156,197,88,239,110,27,199,17,159,189,59,82,34,37,90,
    146,37,91,254,35,71,231,36,106,217,160,17,27,183,110,218,
    198,48,234,70,6,154,2,86,212,99,11,59,108,208,203,137,
    183,36,143,58,222,17,119,43,57,12,164,47,149,209,246,91,
    31,162,232,135,190,71,159,160,47,148,206,204,222,157,142,148,
    4,4,104,75,75,228,98,184,127,102,118,102,126,51,59,187,
    93,200,254,42,248,253,165,13,144,254,91,0,248,248,17,16,
    2,140,4,116,4,8,41,192,95,135,163,10,36,63,1,191,
    2,111,0,58,6,72,3,206,145,48,225,15,6,68,203,188,
    166,10,161,201,61,2,38,117,144,22,116,42,240,50,90,3,
    75,86,225,168,14,201,87,32,132,136,4,188,242,23,192,95,
    132,55,200,29,137,26,51,92,4,191,206,68,13,252,37,38,
    234,48,89,5,185,4,29,100,190,0,157,6,178,250,0,89,
    221,96,86,255,34,86,62,142,108,128,223,160,233,184,151,47,
    104,166,69,51,89,198,13,230,178,146,239,108,21,58,107,57,
    125,179,68,175,151,232,141,18,125,171,68,223,46,209,155,37,
    250,78,137,190,91,162,239,149,232,251,37,122,171,68,63,96,
    122,5,228,26,12,223,129,225,54,12,109,232,161,161,87,11,
    109,30,130,52,97,248,46,116,222,5,137,159,135,112,142,190,
    240,215,74,43,222,227,21,55,139,21,239,243,138,29,232,236,
    128,196,207,251,122,69,21,218,205,91,232,223,224,91,252,107,
    162,127,65,45,99,115,34,147,52,136,35,55,136,122,113,96,
    208,120,149,26,66,67,151,154,133,12,22,159,18,44,254,9,
    140,9,223,200,96,113,6,200,88,144,46,161,1,103,76,156,
    25,48,105,194,169,128,161,5,190,9,167,40,166,66,27,232,
    11,56,55,224,75,147,38,156,97,107,161,35,223,1,75,105,
    76,12,217,145,154,211,2,156,85,224,180,2,237,87,167,6,
    117,28,213,32,249,7,124,179,197,76,23,153,169,1,167,216,
    90,112,110,193,89,21,94,226,36,236,26,214,72,125,241,234,
    20,53,197,158,118,211,194,221,238,151,212,37,85,252,32,137,
    188,145,84,27,72,187,99,47,241,70,174,115,124,56,57,136,
    19,117,144,196,95,79,154,245,124,102,156,238,142,61,53,112,
    120,169,73,54,25,141,21,179,140,35,169,150,144,232,5,145,
    239,142,98,255,56,148,106,145,248,185,189,32,148,174,203,131,
    159,141,198,200,243,121,146,196,137,67,102,229,206,48,246,138,
    21,100,212,110,24,167,178,73,210,88,140,67,236,21,205,238,
    141,153,35,109,128,183,75,139,125,153,118,147,96,172,208,91,
    154,35,205,38,110,77,242,19,55,233,151,216,180,126,159,162,
    79,91,131,248,72,30,71,71,193,168,181,39,79,100,24,143,
    71,50,82,173,231,207,31,125,244,243,189,86,95,142,30,183,
    14,143,131,208,111,61,115,94,180,198,19,53,136,163,22,246,
    5,145,146,104,161,176,117,133,109,118,113,218,77,146,242,58,
    232,187,1,235,231,14,100,56,150,73,131,122,239,209,14,196,
    170,88,22,85,97,138,166,104,32,85,193,175,41,182,140,37,
    177,31,144,134,93,210,154,0,102,230,144,250,59,176,243,208,
    247,71,6,36,91,4,152,33,126,4,121,24,97,211,166,49,
    131,199,126,75,166,209,189,67,147,96,160,59,79,25,100,136,
    54,156,249,132,252,30,1,35,165,2,195,42,104,4,33,240,
    52,164,146,9,181,56,157,216,24,200,220,130,244,111,211,28,
    162,85,64,211,99,2,193,174,219,40,234,79,12,202,118,147,
    54,190,207,192,80,131,32,141,95,71,108,126,162,57,140,218,
    104,147,131,201,231,135,67,217,85,233,54,118,124,17,31,219,
    93,47,138,98,101,123,190,111,123,74,37,193,225,177,146,169,
    173,98,123,39,109,214,200,223,107,57,182,10,126,147,113,142,
    37,242,59,98,73,255,240,131,174,194,31,235,252,131,237,159,
    74,133,184,24,196,126,138,253,196,162,47,149,67,155,84,55,
    176,121,150,139,99,0,54,171,57,92,82,25,246,84,157,145,
    231,165,169,203,226,168,159,65,70,171,79,188,240,88,42,154,
    159,42,79,161,84,34,181,160,121,194,236,14,41,154,235,73,
    182,115,163,56,242,39,184,205,160,187,67,59,184,195,96,91,
    6,130,219,45,132,218,2,182,85,104,32,244,86,141,46,105,
    100,101,64,99,144,221,38,253,129,29,47,178,236,129,128,59,
    199,28,211,52,56,73,176,106,28,130,54,81,180,216,33,60,
    59,247,169,217,162,230,65,174,253,156,76,208,152,53,193,35,
    18,107,176,222,93,51,211,176,8,163,253,169,48,186,123,17,
    70,152,18,219,20,14,6,5,205,69,56,152,100,131,228,105,
    134,125,10,52,116,63,14,151,16,207,150,113,86,73,227,106,
    14,86,135,16,88,134,97,191,4,67,135,156,194,24,116,238,
    94,103,197,237,183,102,197,190,182,226,99,18,187,156,161,167,
    193,168,169,139,46,185,222,200,108,202,246,220,67,98,178,73,
    246,44,91,114,19,207,184,151,81,131,15,43,62,240,184,196,
    208,233,67,27,88,19,22,225,172,103,194,237,236,16,74,41,
    218,199,180,39,59,238,217,10,242,61,60,217,73,119,119,210,
    79,48,31,216,79,57,195,232,140,160,99,62,145,227,4,99,
    187,198,63,116,188,186,28,187,110,118,132,160,197,233,64,103,
    71,177,157,57,61,165,42,161,172,52,79,35,215,11,35,211,
    158,63,33,153,117,182,176,9,155,248,173,11,222,152,27,115,
    118,228,170,130,71,241,251,43,178,53,169,43,129,106,76,167,
    173,183,205,26,145,110,206,247,167,240,50,31,125,156,15,80,
    192,94,30,109,85,40,208,65,95,147,118,76,1,240,23,224,
    178,75,192,159,129,144,128,14,207,66,134,131,147,190,228,208,
    117,154,254,71,224,196,115,197,25,103,232,208,51,178,212,132,
    145,153,126,204,83,245,145,247,27,248,107,41,107,157,155,32,
    232,120,50,179,194,170,124,60,89,69,176,50,132,190,211,17,
    100,77,71,53,249,104,224,165,52,77,199,175,89,196,239,69,
    2,44,170,33,76,74,115,66,215,162,150,230,210,198,62,187,
    192,22,229,254,251,98,221,40,33,230,135,212,124,88,128,69,
    228,125,255,255,61,110,207,38,235,210,121,229,234,4,249,107,
    218,136,197,91,95,169,114,94,154,226,82,132,69,37,15,139,
    71,69,88,72,78,219,111,184,246,166,214,32,0,156,27,2,
    47,89,88,168,208,253,198,2,89,129,78,149,2,136,235,74,
    145,197,151,200,243,25,201,155,58,19,216,58,251,218,110,5,
    6,180,123,169,249,122,158,249,131,60,252,36,244,70,135,190,
    247,244,43,146,72,98,187,121,196,25,185,14,171,101,29,40,
    90,196,117,106,240,207,31,229,186,156,204,51,119,124,132,2,
    10,29,56,82,252,184,203,9,227,119,3,105,143,228,232,16,
    101,15,130,177,221,11,189,62,251,201,204,116,252,60,215,81,
    177,163,103,79,226,148,178,210,126,108,119,227,8,83,252,113,
    87,197,137,237,75,188,131,72,223,254,208,230,243,193,14,82,
    219,59,196,81,175,171,52,250,167,227,152,75,61,47,233,167,
    92,213,29,189,38,114,222,126,118,241,166,25,96,45,235,229,
    54,210,215,159,34,217,115,249,170,67,9,15,76,188,91,168,
    137,78,107,63,165,230,7,212,236,192,91,56,19,90,180,45,
    146,68,166,171,98,230,169,9,174,131,166,38,30,208,218,244,
    114,40,191,248,46,161,172,95,74,178,128,174,230,79,44,11,
    32,23,233,106,219,169,211,123,1,245,44,81,148,47,252,183,
    81,206,225,49,239,192,232,255,79,131,219,121,244,54,85,112,
    126,12,89,37,112,93,96,139,178,126,13,29,216,67,145,215,
    219,101,229,248,58,127,239,106,52,185,221,68,122,74,106,167,
    221,155,175,198,156,39,180,252,160,112,93,174,86,113,247,248,
    184,80,237,156,75,161,201,70,169,32,102,79,138,151,88,183,
    96,209,124,202,218,187,134,174,155,47,240,105,21,70,216,196,
    38,146,175,221,43,12,161,107,99,218,145,55,30,203,200,191,
    168,123,121,100,158,64,160,92,52,132,139,82,4,139,220,13,
    252,94,14,72,82,172,164,39,251,176,82,132,224,156,189,201,
    248,141,115,63,54,233,2,114,145,119,29,242,162,206,180,69,
    146,117,126,1,121,226,45,16,234,203,80,42,121,149,127,20,
    45,206,174,133,190,196,83,40,158,224,133,133,43,127,252,29,
    186,238,220,115,246,207,80,64,15,178,187,22,229,236,42,102,
    237,154,85,19,124,36,206,188,118,234,141,125,15,242,250,118,
    146,58,28,230,43,133,250,252,34,151,159,73,12,122,186,155,
    237,123,35,253,202,194,79,7,206,67,106,222,203,205,200,112,
    213,247,30,190,85,232,219,28,2,156,207,107,62,158,157,221,
    220,180,163,199,187,185,70,187,211,26,241,155,224,232,49,63,
    139,92,158,213,158,164,74,142,212,253,153,65,25,29,143,220,
    23,114,20,39,147,23,177,47,213,195,153,241,103,89,165,160,
    167,184,39,146,74,10,101,95,41,98,122,238,37,81,122,18,
    14,234,7,48,46,135,47,143,127,26,198,221,35,233,103,115,
    30,92,63,103,47,30,121,216,127,181,148,118,144,75,89,155,
    25,247,19,90,117,107,166,23,241,21,120,97,240,141,84,91,
    179,6,240,253,196,241,162,190,204,117,159,157,112,225,132,204,
    196,132,128,124,148,11,149,25,55,45,150,82,56,87,12,151,
    147,58,199,71,34,251,1,50,76,152,71,49,172,179,28,129,
    150,189,112,213,89,80,94,60,239,112,210,101,186,126,122,120,
    74,15,210,233,1,54,244,0,87,91,169,137,170,65,47,189,
    166,168,139,134,176,196,114,163,102,214,170,181,138,137,33,71,
    61,235,162,110,214,234,203,226,186,255,109,12,202,186,177,93,
    175,137,255,0,218,148,15,28,
};

EmbeddedPython embedded_m5_internal_param_RubyPortProxy(
    "m5/internal/param_RubyPortProxy.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_RubyPortProxy.py",
    "m5.internal.param_RubyPortProxy",
    data_m5_internal_param_RubyPortProxy,
    2200,
    6796);

} // anonymous namespace
