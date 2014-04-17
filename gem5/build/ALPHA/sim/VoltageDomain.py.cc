#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_VoltageDomain[] = {
    120,156,181,81,77,79,194,64,16,157,109,249,80,162,137,137,
    241,206,73,9,7,26,140,28,76,140,81,3,87,49,160,36,
    246,210,172,237,72,139,221,182,233,46,4,206,248,191,117,102,
    1,209,31,224,182,125,157,153,238,190,121,243,26,194,118,185,
    244,220,53,1,244,21,5,17,221,2,82,0,37,192,23,32,
    56,119,32,117,224,57,114,1,5,188,11,136,42,240,9,176,
    6,120,245,93,136,170,48,110,213,232,96,242,69,171,37,40,
    50,135,4,227,68,13,223,102,24,154,77,137,161,109,142,9,
    39,121,106,228,20,251,185,146,73,22,254,214,240,192,26,206,
    41,64,224,214,212,217,119,88,12,117,193,10,204,170,44,132,
    68,172,29,240,107,48,26,183,42,180,117,228,16,232,51,134,
    68,121,139,13,119,16,89,242,78,28,27,254,220,157,232,83,
    122,13,11,44,165,73,242,76,166,205,237,198,86,157,181,29,
    16,4,65,38,21,6,129,105,216,68,229,209,60,229,148,123,
    152,85,129,182,30,46,151,65,140,50,194,210,84,41,125,146,
    165,84,166,190,159,201,198,59,106,158,106,15,250,158,192,123,
    209,88,106,47,206,63,112,158,125,144,222,62,46,48,205,11,
    133,153,241,6,131,203,238,117,223,155,162,234,121,186,12,61,
    158,231,143,87,157,98,101,167,109,51,29,59,94,19,116,185,
    143,214,7,115,68,160,122,157,31,219,71,176,251,19,84,45,
    88,169,182,167,255,69,151,181,240,102,99,218,237,5,211,178,
    166,19,209,112,190,1,53,148,138,7,
};

EmbeddedPython embedded_m5_objects_VoltageDomain(
    "m5/objects/VoltageDomain.py",
    "/Users/hokeunkim/Development/EE219D/gem5/src/sim/VoltageDomain.py",
    "m5.objects.VoltageDomain",
    data_m5_objects_VoltageDomain,
    346,
    613);

} // anonymous namespace
