#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GHBPrefetcher[] = {
    120,156,197,88,109,111,27,199,17,158,189,59,82,34,37,90,
    146,37,91,126,145,163,115,29,33,76,208,136,141,91,55,105,
    99,24,181,35,163,73,1,43,238,49,129,29,54,232,229,116,
    183,36,143,34,239,136,187,149,28,6,210,151,202,104,251,173,
    63,162,232,135,254,143,162,127,43,157,153,189,59,29,245,2,
    4,72,74,75,228,98,185,47,179,59,51,207,51,59,187,62,
    100,127,21,252,254,206,6,72,255,43,0,2,252,8,24,2,
    140,4,116,4,8,41,32,88,133,253,10,36,191,130,160,2,
    175,1,58,6,72,3,78,176,98,194,159,12,136,22,121,78,
    21,134,38,183,8,152,212,65,90,208,169,192,139,104,5,44,
    89,133,253,58,36,223,128,16,34,18,240,50,152,131,96,30,
    94,163,116,172,212,88,224,60,4,117,174,212,32,88,224,74,
    29,38,203,32,23,160,131,194,231,160,211,64,81,239,161,168,
    43,44,234,63,36,42,192,158,53,8,26,52,28,247,242,21,
    141,180,104,36,175,113,133,165,44,229,59,91,134,206,74,94,
    191,90,170,175,150,234,107,165,250,181,82,253,122,169,190,94,
    170,223,40,213,111,150,234,183,74,245,219,165,250,6,215,151,
    64,174,192,224,14,12,222,130,193,38,116,209,184,203,133,6,
    54,72,19,6,119,161,115,23,36,126,108,56,65,251,7,43,
    165,25,63,227,25,87,139,25,247,120,198,219,208,121,27,36,
    126,238,233,25,85,104,55,175,161,79,195,239,241,175,137,62,
    5,181,136,197,161,76,210,48,142,220,48,234,198,161,65,253,
    85,42,8,1,62,21,115,25,20,62,33,40,252,27,24,7,
    129,145,65,225,24,80,176,32,93,134,6,28,115,229,216,128,
    73,19,142,4,12,44,8,76,56,194,101,42,180,129,158,128,
    19,3,190,54,105,192,49,150,22,58,239,45,176,148,198,193,
    128,157,167,37,205,193,113,5,142,42,208,126,121,100,80,195,
    126,13,146,127,193,119,27,44,116,158,133,26,112,132,165,5,
    39,22,28,87,225,5,14,194,166,65,141,212,23,47,143,80,
    83,108,105,55,45,220,237,110,73,93,82,37,8,147,200,27,
    73,181,134,117,119,236,37,222,200,253,253,167,79,158,39,178,
    43,149,223,151,73,179,158,143,140,211,237,177,167,250,14,79,
    53,201,38,163,177,98,145,113,36,213,2,86,186,97,20,184,
    163,56,56,24,74,53,79,242,220,110,56,148,174,203,157,159,
    141,198,113,162,158,38,73,156,56,100,86,110,28,198,94,49,
    131,140,234,15,227,84,54,105,53,94,198,33,241,138,70,119,
    199,44,145,54,192,219,165,201,129,76,253,36,28,43,244,150,
    150,72,163,73,90,147,252,196,69,250,53,22,173,47,83,244,
    105,171,31,239,203,131,104,63,28,181,118,228,161,28,198,227,
    145,140,84,235,233,211,251,31,252,102,167,213,147,163,7,173,
    189,131,112,24,180,30,59,207,90,227,137,234,199,81,11,219,
    194,72,73,180,208,176,117,129,109,182,113,216,85,90,229,85,
    216,115,67,214,207,237,203,225,88,38,13,106,189,69,59,16,
    203,98,81,84,133,41,154,162,129,181,10,126,77,177,97,44,
    136,221,144,52,244,73,107,2,152,153,67,234,159,192,206,67,
    223,239,27,144,108,16,96,6,248,17,228,97,132,77,155,250,
    12,238,251,35,153,70,183,14,76,130,129,110,60,98,144,33,
    218,112,228,67,242,123,4,140,148,10,12,170,160,17,132,192,
    211,144,74,38,84,226,112,18,99,160,112,11,210,127,76,75,
    136,150,1,77,143,65,3,155,174,227,82,127,97,80,182,155,
    180,241,93,6,134,234,135,105,252,42,98,243,83,157,105,212,
    70,155,60,159,124,190,55,144,190,74,55,177,225,171,248,192,
    246,189,40,138,149,237,5,129,237,41,149,132,123,7,74,166,
    182,138,237,173,180,89,35,127,175,228,216,42,228,77,198,57,
    150,200,239,136,37,253,35,8,125,133,63,86,249,7,219,63,
    149,10,113,209,143,131,20,219,73,68,79,42,135,54,169,174,
    96,241,56,95,142,1,216,172,230,112,73,229,176,171,234,140,
    60,47,77,93,94,142,218,25,100,52,251,208,27,30,72,69,
    227,83,229,41,92,149,170,122,161,89,194,236,6,41,154,235,
    73,182,115,163,56,10,38,184,205,208,223,162,29,220,96,176,
    45,2,193,237,26,66,109,14,203,42,52,16,122,203,134,79,
    26,89,25,208,24,100,215,73,127,96,199,139,44,122,32,224,
    78,48,198,52,13,14,18,172,26,83,208,166,26,77,118,8,
    207,206,109,42,54,168,184,147,107,63,35,19,52,206,154,224,
    62,45,107,176,222,190,153,105,88,208,104,119,138,70,55,79,
    105,132,33,177,77,116,48,136,52,167,116,48,201,6,201,163,
    12,251,68,52,116,63,118,151,16,207,150,113,150,73,227,106,
    14,86,135,16,88,134,97,175,4,67,135,156,194,24,116,110,
    94,102,197,205,55,102,197,158,182,226,3,90,118,49,67,79,
    131,81,83,23,62,185,222,200,108,202,246,220,193,202,100,157,
    236,89,182,228,58,158,113,47,162,6,31,86,124,224,113,90,
    161,195,135,54,176,174,88,132,179,174,9,215,179,67,40,37,
    182,143,147,248,219,137,29,119,109,5,249,30,30,110,165,219,
    91,233,199,24,15,236,71,28,97,116,68,208,156,79,228,56,
    65,110,215,248,135,230,171,203,220,117,179,35,4,45,78,7,
    58,59,138,237,204,225,41,85,9,69,165,89,26,185,94,24,
    153,246,252,49,173,89,103,11,155,176,142,223,186,224,141,185,
    49,71,71,206,42,184,23,191,79,200,214,164,174,4,202,43,
    157,182,222,54,107,68,186,57,239,76,225,101,54,250,56,239,
    225,2,59,57,219,170,80,160,131,190,38,237,152,8,240,55,
    224,180,75,192,95,129,144,128,14,207,40,195,228,164,47,57,
    116,149,134,255,25,56,240,92,112,198,25,154,122,70,22,154,
    144,153,233,135,60,84,31,121,127,128,191,151,162,214,137,9,
    130,142,39,51,75,172,202,199,147,85,144,149,33,244,131,142,
    32,107,154,213,228,163,190,151,210,48,205,95,179,224,239,105,
    0,44,178,33,12,74,51,66,215,188,94,205,165,141,125,118,
    138,45,138,253,183,197,170,81,66,204,207,169,120,191,0,139,
    200,219,254,255,123,220,60,27,172,75,231,149,171,3,228,167,
    180,17,139,183,190,84,229,184,52,37,165,160,69,37,167,197,
    253,130,22,146,195,246,107,206,189,169,52,8,0,39,134,192,
    139,21,38,42,116,167,177,64,86,160,83,37,2,113,94,41,
    50,126,137,60,158,209,122,83,103,2,91,103,87,219,173,192,
    128,118,47,21,223,206,50,126,144,135,31,14,189,209,94,224,
    61,114,105,69,90,214,207,25,103,228,58,44,151,117,32,182,
    136,203,212,224,159,191,200,117,57,156,101,236,248,128,144,144,
    235,192,76,9,98,159,3,198,23,125,105,143,228,104,15,215,
    238,135,99,187,59,244,122,236,39,51,211,241,243,92,71,197,
    142,62,123,18,167,20,149,118,99,219,143,35,12,241,7,190,
    138,19,59,144,120,7,145,129,253,190,205,231,131,29,166,182,
    183,135,189,158,175,52,250,167,121,204,169,158,151,244,82,206,
    234,246,95,81,117,214,126,118,241,166,25,98,46,251,77,110,
    35,125,253,41,130,61,167,175,154,74,120,96,226,221,66,77,
    116,88,251,53,21,239,82,177,5,111,224,76,104,225,2,20,
    199,83,50,93,21,35,79,77,112,30,52,53,240,57,205,77,
    207,83,249,217,15,161,178,126,29,201,8,93,205,159,85,230,
    64,206,211,213,182,83,167,247,2,106,89,32,150,207,253,88,
    150,51,61,102,77,140,238,79,74,110,231,254,155,84,193,249,
    37,100,153,192,101,196,22,101,253,26,154,216,3,145,231,219,
    101,229,248,58,127,235,98,52,185,126,34,61,37,181,211,110,
    205,86,99,142,19,122,253,126,225,186,92,173,226,238,241,97,
    161,218,9,167,66,147,181,82,66,204,158,20,47,48,111,193,
    164,249,136,181,119,13,157,55,159,226,211,42,140,176,142,69,
    36,95,185,23,24,66,231,198,180,35,111,60,150,81,112,154,
    247,114,207,44,129,64,177,136,238,140,121,42,130,73,238,26,
    126,207,19,146,20,43,233,201,62,172,20,20,156,177,55,25,
    191,81,238,199,38,93,64,78,227,174,67,94,212,145,182,8,
    178,206,111,33,15,188,5,66,3,57,148,74,94,228,31,69,
    147,179,107,97,32,241,20,138,39,120,97,225,204,31,127,15,
    93,119,230,49,251,35,29,118,245,93,139,98,118,21,163,118,
    205,170,9,62,18,207,188,118,234,141,145,218,58,191,157,164,
    14,211,124,169,80,159,95,228,242,51,137,65,79,119,179,93,
    111,164,95,89,248,233,192,185,75,197,189,220,140,12,87,125,
    239,225,91,133,190,205,33,192,249,188,230,227,217,217,166,118,
    154,59,122,176,157,107,180,173,53,122,226,165,242,84,37,126,
    25,28,61,224,199,145,243,99,219,147,84,201,145,186,125,166,
    83,70,7,35,247,153,28,197,201,228,89,28,72,117,247,76,
    255,227,44,95,208,67,220,67,73,137,197,37,219,153,30,123,
    110,41,61,8,59,245,51,24,39,197,231,251,63,25,198,254,
    190,12,178,49,119,46,31,179,19,143,60,108,191,120,149,118,
    152,175,178,114,166,63,72,104,214,181,51,173,136,178,208,27,
    134,223,73,181,113,214,0,65,144,56,94,212,147,185,238,228,
    230,188,151,223,137,47,244,5,165,41,211,77,156,34,156,143,
    226,76,136,68,246,66,116,79,194,242,166,167,101,193,237,163,
    28,5,23,29,1,101,17,179,102,145,206,206,245,139,195,35,
    122,135,230,183,38,122,119,171,45,213,68,213,160,7,94,83,
    212,69,67,88,98,177,81,51,107,213,90,197,68,166,81,203,
    170,168,155,181,250,162,184,248,127,19,153,88,55,54,235,53,
    241,63,172,156,251,107,
};

EmbeddedPython embedded_m5_internal_param_GHBPrefetcher(
    "m5/internal/param_GHBPrefetcher.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/param_GHBPrefetcher.py",
    "m5.internal.param_GHBPrefetcher",
    data_m5_internal_param_GHBPrefetcher,
    2198,
    6773);

} // anonymous namespace
