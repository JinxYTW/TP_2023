#include "enigma.h"
#include <iostream>
namespace enigma
{
    Enigma::Enigma(std::vector <char> keyValue = {'B', 'D', 'A', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},std::vector <char> keyValue2 ={'Z', 'D', 'T', 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'A', 'U', 'V', 'W', 'X', 'Y', 'B'}):_key(keyValue),_key2(keyValue2){}

    

     void Enigma::rotateRotor(std::vector<char>& rotor) {
        std::rotate(rotor.begin(), rotor.begin() + 1, rotor.end());
    }

    void Enigma::encode() {
    std::string result = "";
    int rotor1Counter = 0;

    for (char c : getPlain()) {
        if (std::isalpha(c)) {
            char base = (std::isupper(c)) ? 'A' : 'a';

            // Passage à travers le premier rotor
            int index1 = std::toupper(c) - 'A';
            c = _key[index1];

            // Rotation du premier rotor
            rotateRotor(_key);
            rotor1Counter++;

            // Si 26 rotations complètes du premier rotor, tourner le deuxième rotor
            if (rotor1Counter == 26) {
                rotateRotor(_key2);
                rotor1Counter = 0;  // Réinitialiser le compteur
            }
        }
        // else: caractères spéciaux non modifiés
        result += c;
    }

    setCipher(result);
}

    void Enigma::decode() {
       
    }










    
} // namespace enigma
