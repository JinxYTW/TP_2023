#include "borrow.h"

namespace borrow{

    Borrow::Borrow(int isbn, std::string borrower, date::Date borrow_date) : _isbn(isbn), _borrower(borrower), _borrow_date(borrow_date)
    {
    }

    int Borrow::isbn() const
    {
        return _isbn;
    }

    std::string Borrow::borrower() const
    {
        return _borrower;
    }

    date::Date Borrow::borrow_date() const
    {
        return _borrow_date;
    }

}