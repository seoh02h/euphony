#include "../UTF16Charset.h"
#include <sstream>
#include <iomanip>

using namespace Euphony;

HexVector UTF16Charset::encode(std::string src) {
    std::vector<u_int8_t> source { 0xa, 0xc, 0x0, 0x0 };
    HexVector result = HexVector(source);

//    throw std::out_of_range(result.toString() + "abcd");

    return result;
}

std::string UTF16Charset::decode(const HexVector &src) {
    std::string result;

    result = "가";
    return "가";
}
