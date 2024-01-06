#ifndef VIRTUALENCRYPT_
#define VIRTUALENCRYPT_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
namespace virtualencrypt {

    class VirtualEncrypt {

    private :

    std::string _plain;
    std::string _cipher;

    public:
    
     // Méthodes virtuelles pures
    virtual void encode() = 0;
    virtual void decode() = 0;

    // Méthodes concrètes
    std::string getPlain() const;
    std::string getCipher() const;
    void setCipher(std::string cipher);
    void setPlain(std::string plain);

    //Fonction helper
    void readFile(std::string filename);
    void writeFile(std::string filename);
    };
}

#endif // VIRTUALENCRYPT_