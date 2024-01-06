#include "encrypt.h"

namespace encrypt {
    void Encrypt::encode() {
        setCipher(getPlain());
        
    }

    void Encrypt::decode() {
        setPlain(getCipher());
        
    }
}   // namespace encrypt