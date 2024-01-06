#include "virtualEncrypt.h"
#include "encrypt.h"
#include <iostream>
#include <string>

int main() {
    // Exemple d'utilisation de BasicEncrypt
    encrypt::Encrypt Encrypt;

    // Lecture depuis un fichier
    Encrypt.readFile("input.txt");

    // Affichage du message déchiffré
    std::cout << "Message déchiffré : " << Encrypt.getPlain() << std::endl;

    // Encodage
    Encrypt.encode();

    // Affichage du message chiffré
    std::cout << "Message chiffré : " << Encrypt.getCipher() << std::endl;

    // Décodage
    Encrypt.decode();

    // Affichage du message déchiffré après décodage
    std::cout << "Message déchiffré après décodage : " << Encrypt.getPlain() << std::endl;

    // Écriture vers un fichier
    Encrypt.writeFile("output.txt");

    return 0;
}