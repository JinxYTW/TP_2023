#include "enigma.h"
#include <iostream>
#include <algorithm>
namespace enigma
{
    Enigma::Enigma(std::vector <char> keyValue,std::vector <char> keyValue2):_key(keyValue),_key2(keyValue2){}

    

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
    std::string result = "";
    int rotor1Counter = 0;

    for (char c : getCipher()) {
        if (std::isalpha(c)) {
            char base = (std::isupper(c)) ? 'A' : 'a';

            // Passage inverse à travers le deuxième rotor
            int index2 = std::toupper(c) - 'A';
            c = std::find(_key2.begin(), _key2.end(), c) - _key2.begin() + 'A';

            // Rotation inverse du deuxième rotor
            rotateRotor(_key2);

            // Passage inverse à travers le premier rotor
            int index1 = std::toupper(c) - 'A';
            c = std::find(_key.begin(), _key.end(), c) - _key.begin() + 'A';

            // Rotation inverse du premier rotor
            rotateRotor(_key);
            rotor1Counter++;

            // Si 26 rotations complètes du premier rotor, tourner le deuxième rotor
            if (rotor1Counter == 26) {
                rotateRotor(_key);
                rotor1Counter = 0;  // Réinitialiser le compteur
            }
        }
        // else: caractères spéciaux non modifiés
        result += c;
    }

    setPlain(result);
}



   
} // namespace enigma
