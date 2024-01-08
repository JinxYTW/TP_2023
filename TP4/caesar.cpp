#include "caesar.h"
#include<iostream>

namespace caesar{

    Caesar::Caesar(int shiftValue = 3):_shift(shiftValue){};
    

    void Caesar::encode(){
        
        setCipher(getPlain());
        for (char& c : getCipher()) {
        if (std::isalpha(c) && std::islower(c)) {
            c = 'a' + (c - 'a' + shift) % 26;
        }
    }
           
    }

    

    void Caesar::decode(){
        setPlain(getCipher());
        for (char& c : getPlain()) {
        if (std::isalpha(c) && std::islower(c)) {
            c = 'a' + (c - 'a' - shift + 26) % 26;
        }
    }

    }









}