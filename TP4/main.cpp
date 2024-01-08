#include "virtualEncrypt.h"
#include "encrypt.h"
#include "caesar.h"
#include "caesar2.h"
#include <iostream>
#include <string>

int main() {
     // Exemple d'utilisation de Caesar avec un décalage de 5
    caesar::Caesar caesarWithShift5(5);

    // Lecture depuis un fichier
    caesarWithShift5.readFile("input.txt");

    // Affichage du message déchiffré
    std::cout << "Message déchiffré : " << caesarWithShift5.getPlain() << std::endl;

    // Encodage
    caesarWithShift5.encode();

    // Affichage du message chiffré
    std::cout << "Message chiffré : " << caesarWithShift5.getCipher() << std::endl;

    // Décodage
    caesarWithShift5.decode();

    // Affichage du message déchiffré après décodage
    std::cout << "Message déchiffré après décodage : " << caesarWithShift5.getPlain() << std::endl;

    // Écriture vers un fichier
    caesarWithShift5.writeFile("output_shift5.txt");
    //

     // Exemple d'utilisation de Caesar avec un décalage de 5
    caesar2::Caesar2 caesar2WithShift5(5);

    // Lecture depuis un fichier
    caesar2WithShift5.readFile("input2.txt");

    // Affichage du message déchiffré
    std::cout << "Message déchiffré : " << caesar2WithShift5.getPlain() << std::endl;

    // Encodage
    caesarWithShift5.encode();

    // Affichage du message chiffré
    std::cout << "Message chiffré : " << caesar2WithShift5.getCipher() << std::endl;

    // Décodage
    caesarWithShift5.decode();

    // Affichage du message déchiffré après décodage
    std::cout << "Message déchiffré après décodage : " << caesar2WithShift5.getPlain() << std::endl;

    // Écriture vers un fichier
    caesar2WithShift5.writeFile("output2_shift5.txt");

    return 0;

    
}