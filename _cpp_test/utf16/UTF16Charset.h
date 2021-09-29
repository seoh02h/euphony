//
// Created by kuro1 on 21-09-29.
//

#ifndef EUPHONY_UTF16CHARSET_H
#define EUPHONY_UTF16CHARSET_H

#include "Charset.h"

namespace Euphony {
    class UTF16Charset : Charset {
    public:
        ~Charset() = default;

        HexVector encode(std::string src) = 0;
        std::string decode(const HexVector &src) = 0;
    };
}

#endif //EUPHONY_UTF16CHARSET_H
