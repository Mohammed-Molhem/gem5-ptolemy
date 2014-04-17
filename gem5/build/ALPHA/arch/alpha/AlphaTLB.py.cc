#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_AlphaTLB[] = {
    120,156,189,83,77,79,219,64,16,157,181,19,7,2,173,224,
    194,13,9,113,114,139,148,133,74,28,64,8,241,17,14,145,
    16,69,78,122,104,46,214,98,15,181,193,155,88,222,165,130,
    94,225,127,195,204,6,199,45,55,164,182,254,24,205,188,93,
    207,190,247,52,78,224,245,242,233,61,218,0,48,37,37,41,
    61,2,10,0,45,96,44,64,112,237,65,225,193,136,51,31,
    10,31,180,15,99,159,86,90,128,62,92,11,72,219,240,4,
    240,8,240,125,220,130,52,0,108,57,180,51,71,219,144,46,
    212,232,226,28,13,32,237,194,48,92,162,67,243,103,186,66,
    65,153,93,164,48,204,245,215,171,27,76,236,12,226,240,121,
    150,118,40,156,40,131,163,243,19,187,64,249,113,81,102,138,
    138,164,214,226,241,6,214,242,137,18,4,150,64,188,199,30,
    139,34,210,36,133,56,98,27,110,2,22,243,72,96,7,162,
    97,216,162,221,17,251,96,62,212,93,7,195,227,253,125,106,
    109,86,9,81,85,146,73,197,176,180,197,85,47,203,12,159,
    78,171,27,38,255,133,33,23,142,79,28,79,148,198,56,182,
    93,87,232,105,122,87,112,201,253,237,67,137,78,94,114,127,
    31,39,133,50,198,237,226,42,67,149,98,101,219,84,94,170,
    74,105,203,84,6,19,235,190,115,39,176,182,38,152,83,10,
    242,155,193,202,200,108,122,139,119,147,219,92,203,62,254,196,
    98,90,106,156,88,121,118,246,101,103,175,47,127,160,222,149,
    166,74,228,111,2,106,207,122,229,131,147,188,201,13,153,124,
    32,102,119,227,108,127,212,56,43,106,103,63,190,113,150,236,
    227,181,252,136,217,113,195,200,185,201,98,162,165,63,104,255,
    93,238,203,175,29,141,231,184,55,172,7,239,97,189,253,159,
    89,243,124,109,53,172,47,66,30,105,203,90,244,110,111,62,
    248,17,212,255,2,161,37,143,132,137,188,122,70,157,114,215,
    232,31,145,116,86,30,204,134,247,112,157,27,243,160,174,136,
    174,183,226,173,5,107,254,11,70,223,216,249,
};

EmbeddedPython embedded_m5_objects_AlphaTLB(
    "m5/objects/AlphaTLB.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/arch/alpha/AlphaTLB.py",
    "m5.objects.AlphaTLB",
    data_m5_objects_AlphaTLB,
    460,
    1082);

} // anonymous namespace
