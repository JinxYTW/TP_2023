#ifndef CAESAR2_
#define CAESAR2_
#include"encrypt.h"

namespace caesar2
{
    class Caesar2 : public encrypt::Encrypt{

        private:
        int _shift;

        public:
        Caesar2(int shiftValue = 3);
        void encode() override ;
        void decode() override;








    };









}


#endif CAESAR2_