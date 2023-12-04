#include "reader.h"

namespace reader{

    Reader::Reader(std::string name, std::string surname, std::string borrower_id, std::vector<int> borrowed_books_isbn)
    {
    }

    std::string Reader::name() const
    {
        return _name;
    }

    std::string Reader::surname() const
    {
        return _surname;
    }

    std::string Reader::borrower_id() const
    {
        return _borrower_id;
    }

    std::vector<int> Reader::borrowed_books_isbn() const
    {
        return _borrowed_books_isbn;
    }

}