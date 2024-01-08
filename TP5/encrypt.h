#ifndef ENCRYPT_
#define ENCRYPT_
#include "virtualEncrypt.h"
#include <string>
#include <vector>
#include <iostream>
namespace encrypt 
{
    class Encrypt : public virtualencrypt::VirtualEncrypt
    {
        public :
        void encode() override;
        void decode() override;
   
    };
}
#endif // ENCRYPT_