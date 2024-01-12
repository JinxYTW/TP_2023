#include "enigma.h"

int main(){
    enigma::Enigma message ;
    message.readFile("input.txt");
     std::cout << "Message déchiffré : " << message.getPlain() << std::endl;
     message.encode();
     std::cout << "Message chiffré : " << message.getCipher() << std::endl;
     message.writeFile("code.txt");
     message.decode();
    std::cout << "Message déchiffré après décodage : " << message.getPlain() << std::endl;
    message.writeFile("output.txt");

    return 0;

}