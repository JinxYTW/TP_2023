#include "enigma.h"
#include <iostream>
#include <algorithm>
namespace enigma
{
    Enigma::Enigma(std::vector <char> keyValue,std::vector <char> keyValue2):_key(keyValue),_key2(keyValue2){}

    

     void Enigma::rotateRotor(std::vector<char>& rotor) {
        std::rotate(rotor.begin(), rotor.begin() + 1, rotor.end());
    }

    void Enigma::inverseRotor(std::vector<char>& rotor) {
        std::rotate(rotor.rbegin(), rotor.rbegin() + 1, rotor.rend());
    }

    void Enigma::encode() {
    std::string result = "";
    int rotor1Counter = 0;

    for (char c : getPlain()) {
        if (std::isalpha(c)) {

            // Passage à travers le premier rotor
            int index1 = std::toupper(c) - 'A';
            c = _key[index1];

            // Rotation du premier rotor
            rotateRotor(_key);
            rotor1Counter++;

            // Passage à travers le deuxième rotor
            int index2 = std::toupper(c) - 'A';
            c = _key2[index2];

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

            // Passage inverse à travers le deuxième rotor
            int index2 = std::toupper(c) - 'A';
            c = _key2[index2];

            

            // Passage inverse à travers le premier rotor
            int index1 = std::toupper(c) - 'A';
            c = _key[index1];

            

            

            // Si 26 rotations complètes du premier rotor, tourner le deuxième rotor
            if (rotor1Counter == 26) {
                inverseRotor(_key);
                rotor1Counter = 0;  // Réinitialiser le compteur
            }
        }
        // else: caractères spéciaux non modifiés
        result += c;
    }

    setPlain(result);
}



   
} // namespace enigma
