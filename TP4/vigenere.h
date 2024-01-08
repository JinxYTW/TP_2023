#ifndef VIGENERE_
#define VIGENERE_
#include "encrypt.h"

namespace vigenere{
    class Vigenere : public encrypt::Encrypt{
        private:
        std::vector <int> _key;





        public :
        Vigenere(std::vector <int> keyValue = {3, 1, 5, 2});
        void encode() override;
        void decode() override;
















    };



}










#endif VIGENERE_