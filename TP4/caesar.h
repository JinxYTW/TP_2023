#ifndef CAESAR_
#define CAESAR_
#include "encrypt.h"


namespace caesar
{
    class Caesar : public encrypt::Encrypt{

        private:
        int _shift;

        public:
        Caesar(int shiftValue = 3);
        void encode() override ;
        void decode() override;
        









    };
    
} // namespace caesar






#endif CAESAR_ 