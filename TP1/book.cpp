#include "book.h"
#include <assert.h>
#include <iostream>
#include "author.h"


namespace book {

    Book::Book(std::string title, author::Author author, std::string language, std::string genre, date::Date publication_date, int isbn, std::string borrower) : _title(title), _author(author), _language(language), _genre(genre), _publication_date(publication_date), _isbn(isbn), _borrower(borrower) {
        assert(_isbn > 0 && "ISBN is not valid");
    } 

    std::string Book::title() const {
        return _title;
    }

    author::Author Book::author() const {
        return _author;
    }

    std::string Book::language() const {
        return _language;
    }

    std::string Book::genre() const {
        return _genre;
    }

    date::Date Book::publication_date() const {
        return _publication_date;
    }

    int Book::isbn() const {
        return _isbn;
    }

    std::string Book::borrower() const {
        return _borrower;
    }

   
}