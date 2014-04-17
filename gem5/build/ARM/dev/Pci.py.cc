#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Pci[] = {
    120,156,173,152,89,95,27,71,18,192,91,216,128,13,24,48,
    24,223,113,58,62,98,217,137,1,73,224,35,113,28,35,225,
    67,137,101,148,17,78,48,123,176,195,168,129,49,115,232,55,
    221,178,97,95,189,79,251,57,246,123,110,170,170,103,164,146,
    56,204,67,144,45,77,253,187,186,187,170,143,170,158,246,68,
    250,119,10,254,63,151,66,232,22,60,52,225,95,78,4,66,
    132,57,177,158,19,57,148,7,68,48,32,86,211,167,83,246,
    233,148,8,78,139,112,80,172,15,138,112,72,172,15,137,112,
    88,172,15,131,254,105,161,6,197,86,78,52,7,197,127,132,
    248,44,196,251,245,51,162,57,36,212,16,209,225,14,61,43,
    154,103,68,35,127,22,58,245,255,15,127,249,28,60,25,20,
    27,126,184,178,249,65,121,198,34,252,186,159,71,43,205,56,
    124,149,93,237,123,117,63,94,86,31,125,79,81,133,229,208,
    101,82,183,108,12,37,207,175,196,209,150,191,189,20,4,30,
    119,185,140,46,191,135,7,37,208,83,112,106,125,0,125,95,
    63,37,212,105,241,97,16,45,254,48,140,62,127,30,16,224,
    3,194,179,232,56,184,136,100,132,200,40,58,10,238,33,25,
    67,247,214,207,161,206,250,184,112,26,249,51,208,186,51,8,
    95,122,26,135,86,125,156,107,121,190,71,214,184,65,48,187,
    179,163,37,90,24,184,102,43,78,66,105,118,124,45,155,100,
    186,132,167,150,155,24,25,111,205,250,104,177,190,137,154,149,
    170,220,108,107,105,98,233,122,70,186,90,218,198,164,110,185,
    80,7,26,49,167,65,173,240,176,86,214,23,104,32,255,173,
    160,133,30,45,210,40,205,71,58,63,129,35,138,38,110,108,
    68,110,168,54,54,204,8,9,97,220,108,7,40,162,166,217,
    111,41,226,222,222,222,198,142,114,155,42,49,232,81,221,77,
    220,144,106,103,230,155,33,139,85,100,12,142,175,27,237,83,
    121,43,43,199,106,239,170,145,121,76,197,224,7,205,79,77,
    133,113,178,143,150,150,138,212,163,134,71,51,138,21,253,120,
    3,234,170,200,75,27,2,217,109,54,147,60,142,71,247,75,
    63,130,175,185,119,90,37,122,110,39,222,85,237,104,215,15,
    231,96,5,168,32,110,133,96,205,220,139,23,197,194,147,229,
    185,109,21,46,206,233,196,155,195,137,128,101,49,219,218,167,
    201,153,197,70,112,101,13,229,240,51,147,155,202,77,13,12,
    229,236,90,242,124,187,150,14,46,157,255,14,246,45,29,129,
    75,7,23,16,109,1,216,18,106,88,124,128,117,115,86,124,
    24,201,150,209,168,80,99,184,62,62,231,112,161,160,194,56,
    173,39,16,39,50,113,144,196,201,76,28,34,241,60,137,83,
    184,194,96,219,96,83,211,25,129,69,57,66,228,2,145,25,
    209,28,165,42,23,51,113,140,196,75,153,8,11,116,156,244,
    47,51,50,65,228,10,145,171,68,38,137,92,99,228,60,145,
    235,140,76,17,249,138,145,105,34,55,24,185,64,228,107,70,
    102,136,72,70,46,18,249,134,145,75,68,110,18,185,69,228,
    50,145,219,140,92,33,114,135,145,171,68,190,101,228,26,145,
    187,140,92,39,146,103,228,43,34,247,136,220,23,205,27,162,
    249,53,145,239,24,145,68,190,103,228,27,34,15,24,185,73,
    100,150,145,91,68,230,24,185,77,100,158,72,65,168,162,104,
    222,33,82,98,228,91,34,11,140,220,37,178,200,72,158,200,
    67,70,238,17,121,196,200,125,34,143,153,167,223,17,121,194,
    230,253,123,34,63,48,242,128,200,143,172,214,44,145,167,108,
    118,230,136,252,196,200,60,145,103,140,20,136,252,204,72,145,
    200,115,70,74,68,150,24,89,32,82,102,100,145,72,133,145,
    135,68,150,153,205,143,136,188,96,228,49,145,151,172,214,19,
    34,175,14,180,252,154,145,31,136,84,89,59,63,18,249,133,
    141,198,83,34,191,50,242,19,145,55,172,214,51,34,53,166,
    243,51,145,183,140,60,39,178,194,122,95,34,82,63,96,225,
    111,140,148,137,56,172,175,10,145,6,107,121,153,200,42,35,
    47,136,188,99,237,188,36,242,251,129,190,254,96,228,21,145,
    53,214,215,107,34,239,89,203,85,34,235,76,231,23,34,127,
    99,228,87,34,127,103,181,222,16,249,7,211,169,17,249,39,
    35,111,137,108,176,90,43,68,254,197,72,157,136,139,185,246,
    55,204,181,151,48,148,159,235,230,90,248,57,105,150,213,215,
    211,4,107,147,101,59,113,141,31,71,105,102,109,65,102,213,
    195,221,12,172,207,167,207,105,59,81,59,220,132,252,147,209,
    173,118,228,81,109,47,110,42,7,235,233,25,44,74,226,109,
    200,154,161,106,202,234,138,204,82,27,230,188,34,228,99,50,
    192,30,85,100,2,137,86,198,137,252,148,248,70,101,154,26,
    19,210,239,42,106,66,65,117,153,36,155,155,64,162,51,130,
    25,166,22,194,208,141,154,148,141,27,198,53,144,102,135,58,
    154,61,102,248,209,182,132,116,172,146,45,112,145,18,96,163,
    189,249,160,18,184,90,203,10,24,174,49,237,51,17,235,54,
    246,181,81,161,172,184,222,142,10,252,72,73,76,220,29,191,
    223,88,67,229,170,31,194,104,76,164,244,53,157,26,228,42,
    156,36,244,20,102,207,182,31,24,232,89,54,84,176,37,87,
    149,54,250,146,61,215,41,185,4,249,93,65,135,142,218,246,
    161,167,68,206,31,83,86,56,166,172,120,76,89,233,152,178,
    133,99,202,22,205,0,148,205,151,105,166,142,48,215,14,200,
    209,10,133,47,41,20,191,164,80,250,146,194,194,151,20,22,
    173,194,45,80,248,99,71,153,29,64,229,37,103,30,119,195,
    142,155,52,63,249,9,172,208,64,109,187,48,149,213,149,126,
    189,194,9,245,138,39,212,43,157,80,111,225,132,122,139,71,
    233,225,9,186,2,28,79,208,248,11,75,16,3,130,221,231,
    13,147,180,61,211,134,129,26,179,27,65,219,149,14,27,109,
    186,7,116,55,224,85,224,47,246,90,110,164,177,1,103,165,
    38,249,112,235,27,212,93,203,221,244,3,223,236,203,55,48,
    246,178,30,251,184,225,32,222,108,105,101,104,207,209,14,76,
    218,45,3,26,145,162,224,213,69,117,63,162,109,84,115,247,
    252,176,29,102,27,140,180,106,126,68,236,85,226,70,70,231,
    179,217,182,77,227,169,191,94,171,44,213,165,31,73,220,132,
    21,246,10,96,227,97,106,10,188,75,68,106,207,72,175,107,
    234,102,16,123,187,186,128,110,183,148,231,111,249,80,131,162,
    166,143,191,10,188,248,4,21,107,110,228,194,145,26,14,216,
    172,174,190,159,110,250,3,58,157,161,192,214,178,165,168,239,
    30,169,30,71,38,137,3,9,161,76,218,48,166,239,29,116,
    177,214,168,30,229,227,237,35,205,135,74,93,107,246,105,122,
    17,213,96,210,160,247,172,231,3,60,155,215,43,125,252,93,
    171,5,166,103,165,147,125,165,203,174,113,41,164,32,236,78,
    108,205,213,187,178,236,155,110,133,58,172,43,140,200,4,239,
    31,234,234,218,9,124,245,50,103,83,79,31,172,113,95,103,
    108,103,0,251,189,149,157,146,85,119,51,80,114,197,118,140,
    195,111,65,185,234,80,72,177,74,245,242,18,87,65,17,21,
    14,91,133,71,90,125,231,232,5,86,169,42,110,118,154,95,
    84,207,34,210,151,51,154,102,193,158,194,233,254,194,212,207,
    169,62,158,174,173,139,25,134,77,184,219,219,210,249,222,162,
    180,157,201,30,154,182,114,245,24,139,32,35,205,28,110,147,
    44,230,55,241,240,66,183,5,152,213,29,76,188,244,250,137,
    47,221,30,102,96,7,95,136,233,168,176,154,180,21,189,14,
    187,155,218,36,174,103,28,12,88,14,70,4,7,227,137,131,
    241,194,153,204,90,104,4,238,71,85,135,227,11,157,2,236,
    217,134,222,191,97,45,210,121,1,78,73,27,248,46,158,61,
    195,137,198,190,109,195,51,157,99,176,32,141,59,14,122,64,
    151,48,182,161,206,235,57,182,141,175,246,133,135,84,215,198,
    200,234,50,9,214,217,234,178,131,27,199,193,33,114,112,72,
    169,204,129,50,140,158,246,238,0,206,37,213,151,38,141,191,
    116,240,192,115,7,185,209,149,206,81,88,133,227,7,134,75,
    204,99,84,33,53,144,14,30,116,93,97,15,29,120,230,160,
    81,43,87,27,171,29,43,211,139,6,204,121,217,67,33,123,
    232,20,149,178,135,133,236,97,209,153,206,236,198,170,212,119,
    42,20,184,80,228,66,137,11,11,92,88,36,129,218,142,227,
    128,110,71,94,186,129,182,254,96,7,111,40,115,85,87,50,
    80,232,7,197,126,80,234,7,11,253,96,177,3,70,186,217,
    176,82,109,208,133,75,39,201,193,204,157,231,114,103,62,199,
    120,202,131,140,151,206,70,182,81,235,38,49,61,9,12,231,
    136,42,117,8,100,52,90,64,105,70,75,231,205,222,4,217,
    132,70,249,204,208,225,17,19,24,134,19,27,105,204,116,198,
    222,66,194,234,246,74,174,16,7,86,109,146,233,153,216,217,
    126,221,6,43,38,9,210,131,113,26,123,123,123,185,208,129,
    125,221,140,118,10,108,63,231,58,114,77,111,99,171,189,4,
    51,130,153,226,132,50,5,225,30,69,76,17,118,76,44,129,
    212,128,73,128,252,176,40,205,13,156,174,245,26,61,211,165,
    125,86,143,117,75,172,217,169,27,107,153,209,19,169,76,97,
    62,109,46,181,111,173,190,233,166,132,134,111,237,144,249,56,
    164,203,145,140,179,249,88,235,159,143,11,25,133,248,208,83,
    48,198,11,208,192,113,6,210,137,235,232,96,244,133,218,100,
    112,23,100,110,117,72,127,53,219,103,177,91,45,237,171,248,
    87,222,45,98,214,127,130,141,252,79,100,119,139,246,126,113,
    44,55,65,31,188,103,76,127,251,63,3,135,176,47,235,12,
    2,179,159,211,7,74,51,50,64,207,135,182,248,54,79,137,
    7,71,41,92,156,237,220,194,59,34,75,38,64,91,120,239,
    171,41,134,161,148,196,123,251,206,53,140,228,248,106,228,96,
    98,113,48,164,209,197,42,141,192,95,56,162,212,235,83,123,
    61,253,12,79,131,244,134,58,153,27,129,207,245,129,139,163,
    127,2,55,214,27,233,
};

EmbeddedPython embedded_m5_objects_Pci(
    "m5/objects/Pci.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/dev/Pci.py",
    "m5.objects.Pci",
    data_m5_objects_Pci,
    2278,
    6354);

} // anonymous namespace
