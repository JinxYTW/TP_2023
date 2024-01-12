#ifndef ENIGMA_H
#define ENIGMA_H
#include "encrypt.h"
#include <iostream>
#include <cctype>

namespace enigma{
    class Enigma:public encrypt::Encrypt{
        public :
         Enigma(std::vector <char> keyValue = {'B', 'D', 'A', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},std::vector <char> keyValue2 ={'Z', 'D', 'T', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'A', 'U', 'V', 'W', 'X', 'Y', 'B'});
         void encode() override;
         void decode() override;
         void rotateRotor(std::vector<char>& rotor);
         void inverseRotor(std::vector <char>& rotor);
         protected :
         std::vector <char> _key;
         std::vector <char> _key2;











    };




}

#endif ENIGMA_H