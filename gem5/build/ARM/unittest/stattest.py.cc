#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stattest[] = {
    120,156,189,87,81,111,27,69,16,158,189,59,59,177,99,55,
    78,163,38,45,13,212,8,69,152,10,98,168,168,16,106,85,
    81,72,5,69,34,192,89,40,105,64,28,174,111,157,156,99,
    223,89,119,235,22,35,231,133,84,192,27,63,2,241,192,255,
    224,55,241,10,243,205,158,29,167,2,9,164,4,199,183,26,
    207,238,205,206,124,243,205,236,166,67,249,167,192,207,123,117,
    162,236,15,22,66,254,42,234,19,13,20,237,43,82,90,81,
    184,66,71,5,74,223,166,176,64,207,136,246,29,210,14,157,
    176,224,210,151,14,197,21,121,167,72,125,87,52,138,198,101,
    210,30,237,23,104,55,94,33,79,23,233,168,76,233,55,164,
    148,138,21,237,133,11,20,46,210,51,182,206,66,73,12,46,
    82,88,22,161,68,225,146,8,101,26,215,72,47,209,62,27,
    95,160,253,42,155,186,201,166,46,137,169,223,97,42,228,153,
    203,20,86,177,156,125,121,132,149,30,86,202,30,151,196,202,
    50,133,203,34,176,45,151,122,53,8,97,77,52,43,162,89,
    129,192,174,183,26,171,28,122,244,39,127,26,138,37,83,225,
    225,137,78,179,40,137,131,40,238,38,145,131,249,34,6,32,
    214,193,176,144,67,247,1,160,251,141,4,183,208,201,161,59,
    38,82,248,77,212,119,232,88,132,99,135,198,13,154,40,234,
    121,20,186,52,225,109,10,116,162,232,64,209,137,67,95,185,
    88,112,204,163,199,193,190,68,158,177,184,245,36,88,107,105,
    129,142,11,52,41,80,107,111,226,64,113,84,162,244,87,250,
    110,67,140,46,138,81,135,38,60,122,116,226,209,113,145,118,
    121,17,171,122,37,64,164,246,38,28,41,107,90,13,143,189,
    221,153,11,23,161,132,81,26,183,7,218,148,88,14,50,211,
    54,70,103,166,81,158,78,39,217,214,176,109,14,125,89,239,
    2,136,193,208,136,157,36,214,102,137,133,110,20,135,193,32,
    9,71,125,109,22,97,36,232,70,125,29,4,50,249,112,48,
    76,82,243,32,77,147,212,7,150,162,236,39,237,217,27,64,
    178,211,79,50,221,192,110,178,141,15,243,6,171,187,67,177,
    8,7,196,71,188,28,234,172,147,70,67,195,41,178,22,177,
    26,214,26,72,142,12,217,135,60,52,191,200,56,145,205,195,
    228,72,143,226,163,104,208,220,214,79,116,63,25,14,116,108,
    154,15,30,220,122,235,221,237,230,129,30,220,110,62,30,69,
    253,176,121,223,255,164,57,138,35,137,190,57,133,97,107,56,
    54,151,97,240,105,116,16,68,18,74,112,168,251,67,157,86,
    161,125,1,155,169,154,170,168,162,114,85,67,85,89,42,240,
    227,170,13,103,73,237,68,8,166,131,0,65,32,119,74,153,
    95,72,146,195,185,61,114,40,221,0,33,122,252,85,200,32,
    211,162,133,57,71,230,62,7,10,86,219,115,145,102,171,156,
    8,137,152,77,188,242,46,242,26,147,48,161,64,189,34,89,
    134,48,177,44,101,210,49,70,94,14,51,14,27,247,40,251,
    249,172,133,184,70,140,50,23,17,171,214,120,171,239,133,116,
    173,6,28,223,17,14,152,195,40,75,158,198,130,52,100,41,
    147,22,99,242,217,248,211,199,61,221,49,217,13,86,60,74,
    70,245,78,59,142,19,83,111,135,97,157,17,76,163,199,35,
    134,177,110,146,250,102,214,0,193,252,149,41,141,102,246,198,
    195,41,109,144,98,166,141,253,17,70,29,195,63,86,229,135,
    224,159,105,195,20,56,76,194,140,245,48,113,160,141,15,39,
    205,37,30,238,79,183,19,174,53,138,83,102,100,186,223,53,
    101,33,89,59,203,2,217,14,122,225,19,222,126,210,238,143,
    180,193,122,100,157,119,133,104,55,186,32,70,93,149,74,203,
    67,2,76,65,156,196,225,152,61,138,58,155,216,236,170,240,
    170,66,96,214,21,102,213,2,143,69,170,50,203,106,78,7,
    206,123,57,167,132,79,107,8,149,36,199,42,111,4,204,173,
    19,110,23,13,71,234,93,162,144,194,170,67,194,203,62,168,
    235,95,199,176,129,225,197,105,160,231,31,109,245,249,104,111,
    97,7,71,66,236,184,121,48,179,226,216,57,83,28,215,78,
    139,131,27,89,11,36,119,80,10,167,36,119,17,110,122,47,
    103,52,202,135,147,202,211,115,60,22,16,252,26,130,43,78,
    41,232,131,87,243,228,58,152,35,151,15,252,133,89,254,181,
    127,2,236,198,255,1,216,129,5,236,54,118,168,228,156,168,
    10,23,202,170,131,132,58,57,124,2,221,54,11,227,117,64,
    55,15,218,58,31,66,187,113,85,78,19,57,145,228,156,180,
    245,111,177,180,130,7,246,116,93,90,203,79,137,12,229,58,
    76,147,111,199,245,164,91,55,52,245,225,238,102,182,181,153,
    221,225,130,174,223,147,22,97,75,218,22,109,170,135,41,23,
    167,28,37,129,45,184,64,138,47,200,219,61,131,123,5,160,
    57,83,72,165,191,100,38,69,91,185,32,60,203,51,60,225,
    222,29,152,47,11,152,46,173,243,83,86,226,67,144,72,39,
    147,19,94,102,249,121,31,176,34,50,77,184,19,249,45,235,
    161,56,143,48,252,87,207,176,224,220,93,247,111,178,173,237,
    105,185,20,105,150,115,60,46,156,3,131,127,228,115,82,33,
    237,63,16,242,203,105,204,57,47,213,133,7,105,90,197,242,
    175,73,154,196,223,28,61,142,173,29,39,111,35,92,90,217,
    59,178,212,158,68,31,211,79,115,29,230,196,37,133,83,195,
    205,239,51,243,167,134,55,171,54,33,198,191,58,25,188,179,
    101,137,116,28,182,51,44,179,5,232,206,10,240,180,89,205,
    238,35,220,85,206,159,51,139,214,112,0,31,30,158,50,6,
    45,249,186,90,117,230,120,240,58,134,55,102,20,80,83,221,
    185,186,115,227,249,30,58,119,98,4,182,111,125,132,61,61,
    241,114,185,120,134,197,210,28,228,62,55,107,164,226,230,142,
    13,64,238,80,114,157,201,55,228,139,111,100,46,146,213,77,
    182,213,162,211,67,224,191,58,91,153,119,54,29,197,23,233,
    235,155,108,107,247,212,87,161,226,115,255,20,216,157,47,207,
    248,56,206,124,104,252,229,153,195,114,135,77,19,190,54,154,
    177,92,86,108,46,103,42,244,203,29,190,143,216,107,114,29,
    239,189,140,225,21,12,175,193,2,54,179,13,74,122,130,237,
    176,177,126,42,61,86,138,196,223,194,0,104,197,231,11,196,
    68,194,185,107,251,249,61,220,200,51,156,232,184,171,148,150,
    75,170,232,224,254,235,170,50,223,91,60,85,169,150,220,82,
    177,84,112,249,238,2,205,170,42,187,165,165,146,131,191,191,
    0,128,132,8,136,
};

EmbeddedPython embedded_m5_internal_stattest(
    "m5/internal/stattest.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/unittest/stattest.py",
    "m5.internal.stattest",
    data_m5_internal_stattest,
    1477,
    3720);

} // anonymous namespace
