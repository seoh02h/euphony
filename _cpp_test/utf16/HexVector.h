#ifndef EUPHONY_HEXVECTOR_H
#define EUPHONY_HEXVECTOR_H

#include <cstdint>
#include <vector>
#include <stdint.h>

namespace Euphony {
    class HexVector {
    public:
        HexVector(int size);
        HexVector(const HexVector& copy);
        HexVector(const std::string& hexString);
        HexVector(const std::vector<int8_t>& hexVectorCopy);
        ~HexVector();

        void pushBack(int8_t hexByte);
        void popBack();
        std::string toString() const;
        const std::vector<int8_t> &getHexSource() const;
        void setHexSource(const std::vector<int8_t> &hexSource);
        int getSize() const;
        void clear();


    private:
        std::vector<int8_t> hexSource;
    };
}

#endif //EUPHONY_HEXVECTOR_H
