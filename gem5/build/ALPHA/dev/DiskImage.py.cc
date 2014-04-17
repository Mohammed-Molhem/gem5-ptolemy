#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_DiskImage[] = {
    120,156,181,84,75,111,211,64,16,158,77,156,135,147,136,132,
    10,245,134,240,9,89,61,196,2,169,135,138,135,80,73,65,
    189,0,114,202,129,92,140,19,79,27,39,126,68,222,77,105,
    184,134,255,13,51,227,36,20,104,110,212,143,213,238,183,235,
    153,239,251,118,214,19,216,92,85,122,223,56,0,250,43,117,
    34,122,20,36,0,169,130,145,2,197,227,10,36,21,184,136,
    170,128,10,46,21,68,22,252,0,88,3,124,25,85,33,170,
    1,86,5,173,239,80,11,162,198,22,109,238,208,26,68,54,
    12,221,22,37,137,127,210,229,42,234,25,155,154,97,156,126,
    28,207,112,98,74,136,155,35,153,24,196,122,126,158,134,87,
    56,185,205,245,148,185,190,160,14,2,83,36,134,163,10,167,
    227,188,68,154,8,213,97,214,96,218,107,26,54,101,104,3,
    182,128,20,172,43,48,106,131,63,116,45,250,222,175,80,163,
    31,178,106,188,246,34,74,22,196,156,173,63,157,234,46,163,
    132,56,130,56,151,113,130,130,21,24,70,78,158,37,171,114,
    194,237,48,227,38,53,65,144,133,41,6,129,105,201,32,205,
    163,101,194,67,78,100,86,11,148,206,69,177,68,89,29,142,
    181,41,194,137,145,213,147,155,155,96,74,113,177,48,53,26,
    126,10,139,48,53,117,54,198,20,113,118,37,107,36,91,192,
    52,36,208,105,158,39,178,248,93,152,104,20,179,152,89,192,
    204,92,54,234,119,163,95,81,227,125,214,88,104,111,154,207,
    113,153,205,227,212,27,224,53,38,249,34,197,204,120,103,103,
    207,159,157,12,188,43,76,143,61,93,76,60,118,99,103,125,
    127,177,18,159,158,112,40,102,82,87,229,221,85,134,197,251,
    225,183,127,183,73,109,183,233,209,95,219,196,27,84,101,255,
    57,164,223,221,235,127,185,63,188,219,190,244,88,170,223,252,
    67,215,255,18,199,36,158,114,40,107,35,78,100,189,205,239,
    144,101,109,101,189,191,83,22,90,48,147,234,163,210,195,6,
    85,189,218,84,92,83,166,108,62,57,116,94,24,105,241,121,
    41,43,177,193,210,122,123,157,240,31,240,84,155,203,100,26,
    39,81,89,118,49,91,172,15,184,46,178,216,196,97,226,152,
    112,156,160,163,227,239,104,196,156,206,30,255,124,123,91,248,
    34,220,231,50,147,66,146,232,134,191,56,207,202,178,148,144,
    1,135,244,219,247,226,60,139,62,226,80,157,93,89,29,40,
    155,222,15,174,208,98,56,61,238,239,126,15,62,108,255,24,
    132,46,248,148,232,91,74,122,247,193,81,14,235,203,242,48,
    191,126,204,33,25,232,169,150,58,108,28,90,191,0,50,69,
    20,183,
};

EmbeddedPython embedded_m5_objects_DiskImage(
    "m5/objects/DiskImage.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/dev/DiskImage.py",
    "m5.objects.DiskImage",
    data_m5_objects_DiskImage,
    594,
    1347);

} // anonymous namespace
