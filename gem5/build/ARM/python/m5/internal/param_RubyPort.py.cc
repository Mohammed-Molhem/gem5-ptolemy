#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPort[] = {
    120,156,197,89,109,83,27,201,17,238,217,149,4,146,145,1,
    3,126,197,102,253,66,172,243,221,161,216,137,239,146,58,151,
    43,206,225,170,92,170,204,57,75,82,246,41,169,236,45,218,
    1,86,72,187,202,238,200,182,174,224,75,112,37,249,150,31,
    145,202,135,252,143,84,254,86,210,221,179,179,172,36,112,112,
    37,230,0,77,141,122,122,102,250,229,233,158,158,161,13,217,
    79,25,63,63,115,0,210,127,9,128,0,255,4,116,1,122,
    2,90,2,132,20,16,44,192,94,25,146,31,67,80,134,183,
    0,45,11,164,5,135,216,177,225,183,22,68,51,60,167,2,
    93,155,41,2,134,53,144,37,104,149,225,69,52,15,37,89,
    129,189,26,36,223,130,16,34,18,240,50,152,130,96,26,222,
    226,234,216,169,242,130,211,16,212,184,83,133,224,28,119,106,
    48,156,3,121,14,90,184,248,20,180,234,184,212,61,92,234,
    60,47,245,79,90,42,192,145,69,8,234,196,142,178,124,67,
    156,37,226,228,61,206,243,42,179,70,178,57,104,205,155,254,
    133,66,127,161,208,95,44,244,151,10,253,139,133,254,165,66,
    255,114,161,127,165,208,191,90,232,95,43,244,151,185,63,11,
    114,30,58,215,161,115,3,58,43,176,141,198,157,203,53,112,
    64,218,208,185,9,173,155,32,241,207,129,67,180,127,48,95,
    152,113,139,103,92,200,103,220,230,25,119,160,117,7,36,254,
    221,214,51,42,176,217,88,66,159,134,255,198,159,6,250,20,
    212,12,54,175,100,146,134,113,228,133,209,118,28,90,52,94,
    161,134,16,208,166,102,42,131,194,151,4,133,127,0,227,32,
    176,50,40,28,0,46,44,72,151,174,5,7,220,57,176,96,
    216,128,125,1,157,18,4,54,236,227,54,101,18,96,71,192,
    161,5,191,179,137,225,0,219,18,58,239,6,148,148,198,65,
    135,157,167,87,154,130,131,50,236,151,97,243,229,190,69,132,
    189,42,36,127,135,239,150,121,209,105,94,212,130,125,108,75,
    112,88,130,131,10,188,64,38,36,117,170,164,190,120,185,143,
    154,34,101,179,81,66,105,55,10,234,146,42,65,152,68,126,
    79,170,89,236,123,125,63,241,123,158,59,216,26,62,143,19,
    213,168,25,166,56,93,235,251,106,215,229,89,54,153,163,215,
    87,188,90,28,73,117,14,59,219,97,20,120,189,56,24,116,
    165,154,166,165,188,237,176,43,61,143,7,191,234,245,113,185,
    167,73,18,39,46,89,148,137,221,216,207,103,144,61,219,221,
    56,149,13,218,141,183,113,105,121,69,220,219,125,94,145,4,
    96,73,105,114,32,211,118,18,246,21,58,74,175,72,220,180,
    90,131,92,196,77,250,2,155,230,111,82,116,103,115,55,222,
    147,131,104,47,236,53,215,229,43,217,141,251,61,25,169,230,
    211,167,15,238,255,116,189,185,35,123,15,155,91,131,176,27,
    52,159,184,207,154,253,161,218,141,163,38,210,194,72,73,52,
    78,183,57,106,150,53,228,184,64,27,188,14,119,188,144,85,
    243,118,101,183,47,147,58,81,175,210,230,98,78,204,136,138,
    176,69,67,212,177,87,198,143,45,150,173,115,98,35,36,229,
    218,164,48,193,202,54,64,250,27,176,203,208,227,123,22,36,
    203,4,147,14,254,9,242,43,130,101,147,198,44,30,251,21,
    89,69,83,59,54,57,95,19,247,25,90,136,49,228,124,68,
    222,142,128,241,81,134,78,5,52,110,16,110,26,72,201,144,
    90,100,167,101,44,92,188,4,233,95,71,87,136,230,0,173,
    142,169,2,73,23,113,171,63,50,20,55,27,36,248,6,99,
    66,237,134,105,252,58,98,203,83,159,131,103,19,109,242,124,
    248,245,86,71,182,85,186,130,132,111,226,129,211,246,163,40,
    86,142,31,4,142,175,84,18,110,13,148,76,29,21,59,171,
    105,163,74,174,158,55,176,202,215,27,246,13,140,200,229,8,
    35,253,37,8,219,10,191,44,240,23,182,127,42,21,66,98,
    55,14,82,164,211,18,59,82,185,36,164,58,143,205,19,179,
    29,99,175,81,49,72,73,101,119,91,213,24,116,126,154,122,
    188,29,209,25,95,52,251,149,223,29,72,69,252,169,242,21,
    238,74,93,189,209,25,33,236,50,233,104,84,36,179,121,81,
    28,5,67,148,48,108,175,210,230,151,25,103,51,64,72,91,
    66,148,77,97,91,129,58,162,110,206,106,147,50,165,12,99,
    140,175,139,164,58,176,207,69,150,46,16,107,135,152,84,26,
    22,103,5,214,138,3,207,161,30,77,118,9,202,238,53,106,
    150,169,185,110,20,255,240,218,215,199,181,127,64,59,90,172,
    114,219,206,148,203,131,103,99,36,120,174,28,5,15,166,191,
    77,10,2,139,66,229,40,8,108,82,63,121,156,33,158,194,
    11,157,142,195,5,156,179,81,220,57,82,182,98,32,234,18,
    238,138,224,219,41,128,207,37,127,48,242,220,43,39,25,112,
    229,251,48,224,142,54,224,67,218,113,38,195,76,157,177,82,
    19,109,114,184,149,153,147,77,185,142,157,225,37,50,101,209,
    136,151,240,40,123,17,213,249,76,226,115,141,171,7,157,47,
    180,109,117,167,68,232,218,182,225,98,118,214,164,20,222,253,
    36,126,51,116,226,109,71,129,145,225,209,106,186,182,154,126,
    129,9,192,121,204,41,69,167,0,29,228,137,236,39,24,204,
    85,254,162,3,212,227,96,245,178,227,2,141,77,231,54,251,
    136,77,204,249,40,85,9,165,161,51,178,111,45,183,47,137,
    251,5,109,87,99,227,218,112,9,63,53,193,50,121,49,103,
    66,174,27,120,20,63,63,39,51,147,166,18,168,114,116,55,
    181,196,172,12,169,229,222,29,65,201,7,87,197,189,135,107,
    175,155,240,170,64,142,9,250,216,36,44,33,254,207,192,53,
    149,128,63,1,249,31,221,156,197,8,71,35,125,200,141,11,
    196,254,123,224,36,115,204,81,102,233,88,179,178,52,132,161,
    152,126,206,172,250,100,251,37,252,165,144,161,14,109,16,116,
    10,217,89,213,84,60,133,74,121,116,50,112,78,117,210,148,
    70,195,152,220,179,235,167,196,166,3,214,206,3,246,40,217,
    229,245,14,102,161,15,143,169,105,189,145,71,50,125,117,132,
    40,74,241,215,196,130,85,192,201,39,212,124,154,67,68,24,
    218,7,21,111,101,60,39,23,78,36,79,231,193,95,144,12,
    37,150,122,182,194,250,152,5,242,16,40,155,16,120,144,135,
    128,228,196,252,150,43,105,106,45,242,248,161,37,240,154,132,
    5,8,221,80,74,32,203,208,170,80,176,112,169,40,178,88,
    18,38,109,81,186,27,201,250,108,147,13,109,173,220,233,218,
    159,212,188,57,163,52,65,38,120,212,245,123,91,129,255,216,
    163,205,104,199,182,137,46,203,136,63,87,20,159,34,67,156,
    164,1,127,253,161,81,227,213,25,165,136,251,228,122,35,62,
    7,68,16,183,57,47,252,122,87,58,61,217,219,194,109,119,
    195,190,179,221,245,119,216,59,118,166,222,215,70,61,197,238,
    29,63,97,83,74,62,27,177,211,142,35,204,223,131,182,138,
    19,39,144,120,153,144,129,243,169,195,201,223,9,83,199,223,
    194,81,191,173,52,210,71,195,149,11,55,63,217,73,185,70,
    219,123,77,221,51,244,174,135,23,197,16,139,210,111,141,121,
    244,21,38,207,228,92,135,234,176,193,131,16,47,9,106,168,
    19,215,103,212,124,68,205,42,156,109,194,111,226,218,148,164,
    83,50,88,5,115,75,85,176,148,134,231,57,205,72,39,35,
    246,99,113,138,136,213,79,26,200,32,43,208,153,226,118,154,
    50,125,171,106,136,53,110,207,49,113,198,16,235,220,158,103,
    226,172,33,206,113,59,207,196,11,134,184,192,237,34,19,151,
    12,241,34,183,151,152,120,217,16,175,112,123,149,137,215,12,
    113,153,219,235,76,188,97,136,43,220,58,76,188,105,136,183,
    184,189,205,196,59,134,184,202,237,15,152,120,215,164,167,6,
    19,63,130,214,61,243,246,243,49,165,170,202,255,154,170,56,
    208,207,48,196,183,255,175,25,202,125,240,61,73,239,254,8,
    178,170,229,164,236,100,65,225,246,240,185,206,78,218,27,88,
    219,12,23,11,117,45,107,42,94,96,33,130,181,239,62,87,
    197,158,165,203,223,35,215,113,105,193,207,16,244,46,16,201,
    215,222,104,40,233,234,150,224,224,247,251,50,10,142,42,87,
    30,57,35,27,125,150,217,199,148,21,88,166,46,226,103,18,
    161,164,78,65,59,70,98,57,199,228,213,179,245,234,155,60,
    175,126,50,146,87,93,114,155,206,164,121,18,213,62,184,53,
    145,202,60,191,221,150,120,141,232,239,14,83,172,84,122,116,
    39,58,13,27,214,57,252,46,54,70,87,119,38,167,166,131,
    62,63,4,133,120,142,225,149,224,15,41,239,113,42,70,218,
    133,171,216,241,145,119,77,15,124,229,159,106,159,35,198,241,
    125,242,17,117,229,152,233,195,84,101,134,58,121,148,86,228,
    55,18,254,122,156,20,131,52,140,240,138,132,68,15,43,113,
    116,244,73,226,78,50,26,113,39,70,212,213,201,233,230,209,
    150,86,127,199,48,173,73,199,115,246,93,221,61,73,144,72,
    170,215,113,178,87,20,250,180,188,180,199,98,46,247,232,160,
    186,49,185,8,107,86,48,247,127,97,161,229,233,5,180,64,
    83,205,201,41,236,225,158,207,18,97,113,21,225,45,148,12,
    208,142,7,145,226,109,222,119,14,237,75,23,163,119,49,169,
    181,19,22,77,187,254,43,121,188,28,239,57,133,196,184,102,
    196,56,158,71,221,63,97,201,126,24,235,206,177,130,188,255,
    172,52,243,214,187,217,56,239,42,202,91,129,236,74,37,199,
    206,6,69,41,44,123,79,10,16,36,73,60,244,60,253,120,
    128,223,187,158,119,150,149,225,79,128,43,60,72,241,24,224,
    202,176,34,150,142,253,173,150,170,130,75,240,177,255,144,104,
    57,41,23,235,107,243,48,117,249,68,158,205,179,51,63,229,
    155,66,152,143,94,122,232,217,240,123,250,141,150,95,31,221,
    155,212,220,54,185,157,115,140,126,73,225,199,10,253,52,132,
    199,44,223,15,248,58,224,18,140,248,205,180,247,112,205,40,
    184,166,21,220,212,65,98,241,32,131,167,200,35,163,65,207,
    123,38,123,113,50,124,22,7,82,221,28,27,127,146,93,61,
    52,11,102,18,186,163,40,231,216,157,70,121,39,182,210,76,
    56,168,223,199,249,66,61,57,254,101,55,110,239,201,32,227,
    185,126,50,207,122,220,243,145,126,252,46,155,161,217,101,126,
    108,60,72,104,214,210,24,21,241,20,250,221,240,59,201,65,
    62,98,128,32,72,92,63,218,145,70,247,113,134,35,24,101,
    150,38,23,155,81,62,63,199,21,39,255,229,223,248,58,194,
    242,24,36,114,48,36,114,39,228,148,57,91,100,206,234,41,
    194,41,43,62,126,46,21,38,158,97,220,232,107,190,126,156,
    124,76,201,153,95,164,233,97,190,58,91,21,21,139,254,249,
    99,139,154,168,139,146,152,169,87,237,106,165,90,182,49,182,
    136,178,32,106,118,181,54,35,142,255,93,193,56,171,89,43,
    139,85,241,31,87,82,109,113,
};

EmbeddedPython embedded_m5_internal_param_RubyPort(
    "m5/internal/param_RubyPort.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_RubyPort.py",
    "m5.internal.param_RubyPort",
    data_m5_internal_param_RubyPort,
    2472,
    7815);

} // anonymous namespace
