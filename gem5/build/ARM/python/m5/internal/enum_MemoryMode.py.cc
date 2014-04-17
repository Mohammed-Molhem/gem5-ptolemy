#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,197,86,81,111,27,69,16,158,189,59,59,177,19,55,
    78,211,164,45,13,212,8,69,152,10,98,81,81,16,106,85,
    81,72,37,138,212,0,103,161,166,6,113,184,119,107,251,28,
    251,206,186,91,167,24,57,47,164,2,222,248,17,136,7,254,
    7,255,11,230,155,59,59,78,4,18,47,13,78,110,53,55,
    183,59,179,243,205,55,179,235,83,254,43,240,243,81,141,40,
    93,86,68,1,255,43,26,16,13,21,181,20,41,173,40,88,
    163,195,2,37,239,81,80,160,23,68,45,139,180,69,39,44,
    216,244,181,69,209,170,172,41,210,192,22,141,162,73,153,180,
    67,173,2,61,137,214,201,209,69,58,44,83,242,29,41,165,
    34,69,7,193,18,5,203,244,130,173,179,80,18,131,203,20,
    148,69,40,81,176,34,66,153,38,85,210,43,212,98,227,75,
    212,170,176,169,91,108,234,146,152,250,19,166,2,254,82,165,
    160,130,233,188,151,167,152,233,96,166,248,184,36,86,214,72,
    219,212,175,82,171,42,194,58,181,214,69,184,76,173,203,34,
    108,80,107,67,132,43,212,186,34,194,38,181,54,17,76,179,
    190,206,168,132,127,241,175,206,168,144,89,229,225,72,39,105,
    24,71,94,24,117,226,208,194,247,34,6,96,232,99,88,202,
    193,252,4,96,254,65,130,100,96,229,96,30,19,41,188,19,
    13,44,58,22,225,216,162,73,157,166,138,250,14,5,54,77,
    217,77,129,78,20,117,21,157,88,244,141,141,9,199,60,58,
    28,254,107,228,152,12,201,190,132,159,89,90,162,227,2,77,
    11,212,60,152,90,80,28,150,40,249,157,126,216,22,163,203,
    98,212,162,41,143,14,157,56,116,92,164,39,60,137,85,253,
    18,64,83,7,83,142,148,53,205,186,195,187,221,95,8,23,
    161,4,97,18,181,135,218,84,89,246,116,52,30,122,143,245,
    48,78,38,143,227,64,215,203,179,89,113,186,59,106,155,158,
    43,203,108,224,49,28,25,49,23,71,218,172,176,208,9,163,
    192,27,198,193,120,160,205,50,108,121,157,112,160,61,79,62,
    62,26,142,226,196,60,76,146,56,113,1,169,40,7,113,123,
    190,2,128,250,131,56,213,117,120,19,55,46,204,27,204,238,
    140,196,34,54,32,91,197,226,64,167,126,18,142,12,103,42,
    179,136,217,176,86,71,142,100,72,15,120,104,124,149,114,62,
    27,189,248,80,143,163,195,112,216,216,211,71,122,16,143,134,
    58,50,141,135,15,111,191,251,225,94,163,171,135,119,26,207,
    198,225,32,104,60,112,31,55,70,19,211,139,163,6,235,194,
    200,104,70,103,208,56,135,203,46,79,185,12,15,207,195,174,
    23,74,108,94,79,15,70,58,169,64,251,10,188,171,170,90,
    85,69,101,171,186,170,176,84,224,199,86,219,214,138,218,15,
    17,157,143,136,65,44,123,70,165,223,72,146,198,57,63,180,
    40,217,6,81,250,252,175,144,89,166,75,19,223,44,249,246,
    37,96,201,180,125,27,233,207,148,83,33,23,179,140,103,222,
    67,190,35,18,134,20,168,95,164,140,57,76,184,140,74,201,
    4,35,79,135,25,139,141,59,148,254,122,214,66,84,37,134,
    157,203,141,85,91,236,234,71,33,99,179,142,141,239,11,41,
    76,47,76,227,231,145,64,15,89,202,167,201,152,124,49,249,
    252,89,95,251,38,189,201,138,167,241,184,230,183,163,40,54,
    181,118,16,212,218,198,36,225,179,177,209,105,205,196,181,157,
    180,94,66,174,215,103,188,154,219,155,140,102,60,66,206,153,
    71,217,75,16,250,134,95,54,228,69,240,79,181,97,78,244,
    226,32,101,61,76,116,181,113,177,73,115,137,135,7,51,119,
    66,190,122,113,70,149,84,15,58,166,44,172,107,167,169,39,
    238,160,23,130,97,245,81,123,48,214,6,243,83,211,54,236,
    21,98,230,232,162,40,118,13,65,206,98,4,110,94,20,71,
    193,132,183,24,250,59,240,126,77,136,182,74,160,218,38,211,
    108,137,199,34,85,152,118,85,203,71,52,78,78,50,33,216,
    22,98,39,73,186,202,59,6,147,237,132,251,74,221,146,198,
    32,97,73,233,213,32,97,177,11,46,187,55,48,108,99,120,
    117,22,249,5,132,95,57,31,254,109,184,180,36,102,223,206,
    163,155,151,207,254,153,242,185,126,90,62,220,2,155,40,3,
    11,197,114,90,6,54,226,79,238,231,156,71,129,113,218,249,
    243,2,211,5,21,23,141,81,120,35,36,117,193,188,69,250,
    117,23,232,231,34,33,194,61,247,250,191,33,120,243,127,65,
    176,155,33,120,7,46,87,115,214,84,132,45,101,229,35,229,
    86,142,167,96,185,199,194,228,42,176,92,68,241,42,159,103,
    79,162,138,28,76,114,184,201,33,156,181,140,12,220,76,112,
    192,175,142,77,91,249,129,147,162,194,71,73,252,253,164,22,
    119,106,134,102,123,184,183,147,238,238,164,119,185,7,212,238,
    75,87,201,186,64,86,231,137,30,37,92,207,37,121,201,106,
    212,147,122,245,242,35,131,209,222,4,138,214,12,99,105,73,
    169,73,208,137,46,10,224,242,28,96,236,247,46,252,149,5,
    93,155,174,242,83,86,178,41,47,150,110,40,183,7,249,202,
    207,199,192,25,161,106,194,13,204,109,102,91,150,104,16,151,
    251,230,25,158,188,252,88,220,91,108,124,111,86,97,69,154,
    179,2,143,141,221,130,244,63,243,105,172,64,140,159,8,12,
    224,68,231,101,34,5,137,7,137,220,192,244,111,73,26,205,
    63,156,103,86,86,110,86,222,138,184,26,211,15,100,106,118,
    188,125,70,191,44,116,169,19,155,20,142,34,59,191,60,45,
    30,69,206,188,64,133,58,255,233,184,113,206,86,50,242,211,
    107,167,152,150,213,172,61,175,217,211,134,55,191,245,112,35,
    186,0,86,45,103,158,60,108,234,209,41,167,208,231,111,168,
    13,107,129,41,111,99,120,103,78,18,53,211,189,220,253,221,
    60,223,152,23,206,37,47,107,134,159,98,19,142,108,123,173,
    40,152,158,187,74,103,27,222,154,3,59,73,93,104,220,53,
    12,214,172,15,112,215,224,75,149,153,200,81,158,185,156,171,
    208,26,246,249,180,206,110,149,53,172,123,29,195,27,24,222,
    130,5,56,203,74,79,200,157,53,147,72,63,151,118,34,217,
    118,119,103,28,8,35,62,240,195,64,214,180,77,60,204,15,
    124,19,14,195,168,107,214,231,90,132,234,183,253,30,180,216,
    212,254,25,116,228,10,225,31,181,147,139,172,92,65,234,94,
    214,21,239,227,110,156,190,207,3,238,4,165,181,146,42,90,
    184,120,218,170,204,247,3,71,173,86,74,118,169,88,42,216,
    124,71,128,102,67,149,237,82,185,164,242,63,235,111,217,251,
    15,208,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/Users/hokeunkim/Development/EE219D/gem5/build/ARM/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1490,
    3631);

} // anonymous namespace
