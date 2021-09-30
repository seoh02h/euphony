
#include <iostream>
#include "UTF16Charset.h"
using namespace Euphony;
int main() {
    std::cout << "hello world" << std::endl;
    HexVector hv = UTF16Charset().encode("abc");
    

}