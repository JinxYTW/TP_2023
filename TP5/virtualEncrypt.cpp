#include "virtualEncrypt.h"

namespace virtualencrypt {
    std::string VirtualEncrypt::getPlain() const {
        return _plain;
    }

    std::string VirtualEncrypt::getCipher() const {
        return _cipher;
    }

    void VirtualEncrypt::setCipher(std::string cipher)
    {
        _cipher = cipher;
    }

    void VirtualEncrypt::setPlain(std::string plain)
    {
        _plain = plain;
    }

    void VirtualEncrypt::readFile(std::string filename) {
        std::ifstream file(filename);
        std::string line;
        while (std::getline(file, line)) {
            _plain += line;
        }
        file.close();
    }

    void VirtualEncrypt::writeFile(std::string filename) {
        std::ofstream file(filename);
        file << _cipher;
        file.close();
    }
}   // namespace virtualencrypt
