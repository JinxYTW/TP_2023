#include "caesar2.h"

namespace caesar2{

    Caesar2::Caesar2(int shiftValue = 3):_shift(shiftValue){};

    void encode(){
        setCipher(getPlain());
        for (char& c : getCipher()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a'; //un peu comme un else if genre si c est une maj base = A sinon base = a
                c = base + (c - base + shift) % 26;
            } 
            else if (std::isdigit(c)) {
                c = '0' + (c - '0' + shift) % 10;
            }
            // else: caractères spéciaux non modifiés
        }
    }

      void Caesar2::decode() {
        setPlain(getCipher());

        for (char& c : getPlain()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a';
                c = base + (c - base - shift + 26) % 26;
            } else if (std::isdigit(c)) {
                c = '0' + (c - '0' - shift + 10) % 10;
            }
            // else: caractères spéciaux non modifiés
        }
    }




}



















}