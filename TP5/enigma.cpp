#include "enigma.h"
#include <iostream>
namespace enigma
{
    Enigma::Enigma(std::vector <int> keyValue = {'B', 'D', 'A', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}):_key(keyValue){}

    void Enigma::encode() {
        std::string result = "";

        for (char c : getPlain()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a';
                int index = std::toupper(c) - 'A';

                c = _key[index];

                // Rotation du rotor
                std::rotate(_key.begin(), _key.begin() + 1, _key.end());
            }
            // else: caractères spéciaux non modifiés
            result += c;
        }

        setCipher(result);
    }

    void Enigma::decode() {
        std::string result = "";

        for (char c : getCipher()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a';
                int index = std::toupper(c) - 'A';

                // Recherche de l'indice original dans le rotor
                auto originalIndex = std::find(_key.begin(), _key.end(), c) - _key.begin();

                c = base + originalIndex;

                // Rotation du rotor
                std::rotate(_key.begin(), _key.begin() + 1, _key.end());
            }
            // else: caractères spéciaux non modifiés
            result += c;
        }

        setPlain(result);
    }










    
} // namespace enigma
