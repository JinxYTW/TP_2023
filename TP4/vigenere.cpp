#include "vigenere.h"

namespace vigenere{

    Vigenere::Vigenere(std::vector <int> keyValue = {3, 1, 5, 2}):_key(keyValue){}

    void Vigenere::encode() {
        std::string result = "";
        size_t keySize = _key.size(); // Peut être créer un getKey()
        size_t keyIndex = 0;

        for (char c : getPlain()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a';
                int shift = key[keyIndex];

                c = base + (c - base + shift) % 26;
                
                // Passage au prochain élément de la clé circulairement
                keyIndex = (keyIndex + 1) % keySize;
            }
            // else: caractères spéciaux non modifiés
            result += c;
        }

        setCipher(result);
    }

    void Vigenere::decode() {
        std::string result = "";
        size_t keySize = _key.size();
        size_t keyIndex = 0;

        for (char c : getCipher()) {
            if (std::isalpha(c)) {
                char base = (std::isupper(c)) ? 'A' : 'a';
                int shift = key[keyIndex];

                c = base + (c - base - shift + 26) % 26;

                // Passage au prochain élément de la clé circulairement
                keyIndex = (keyIndex + 1) % keySize;
            }
            // else: caractères spéciaux non modifiés
            result += c;
        }

        setPlain(result);
    }







}