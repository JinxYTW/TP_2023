#ifndef ENIGMA_H
#define ENIGMA_H
#include "encrypt.h"
#include <iostream>
#include <cctype>

namespace enigma{
    class Enigma:public encrypt::Encrypt{
        public :
         Enigma(std::vector <int> keyValue = {'B', 'D', 'A', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'});
         void encode() override;
         void decode() override;

         protected :
         std::vector <int> _key;











    };




}

#endif ENIGMA_H