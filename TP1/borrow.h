#ifndef BORROW_H
#define BORROW_H
#include <iostream>
#include <string>
#include "date.h"


namespace borrow{


    class Borrow{
        public:
        
            Borrow(int isbn, std::string borrower, date::Date borrow_date);
            int isbn() const;
            std::string borrower() const;
            date::Date borrow_date() const;

        private:
            int _isbn;
            std::string _borrower;
            date::Date _borrow_date;
    };
}





#endif // BORROW_H