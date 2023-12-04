#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "date.h"
#include "author.h"

 namespace book{

    class Book{
        public:
            Book(std::string title, author::Author author, std::string language, std::string genre, date::Date publication_date, int isbn, std::string borrower);
            std::string title() const;
            author::Author author() const;
            std::string language() const;
            std::string genre() const;
            date::Date publication_date() const;
            int isbn() const;
            std::string borrower() const;

            
            //void updateBorrower(std::string borrower);
            


        private:
            std::string _title;
            author::Author _author;
            std::string _language;
            std::string _genre;
            date::Date _publication_date;
            int _isbn;
            std::string _borrower;

    };



 }


 #endif // BOOK_H
