#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include "date.h"
#include "author.h"
#include "book.h"
#include "borrow.h"
#include "reader.h"

namespace library{
    class Library{  

        public:
            Library();
            
            void addBook(book::Book book);
            void addAuthor(author::Author author);
            void addBorrow(borrow::Borrow borrow);
            void addReader(reader::Reader reader);
            void addReturn(int isbn, date::Date return_date);
            
            void addBorrowIsbnBook(reader::Reader reader, int isbn);
            void addBorrowIsbnReader(reader::Reader reader, int isbn);
            void addBorrowIsbnDate(reader::Reader reader, int isbn, date::Date borrow_date);
            void addReturnIsbnBook(reader::Reader reader, int isbn);
            void addReturnIsbnReader(reader::Reader reader, int isbn);
            void addReturnIsbnDate(reader::Reader reader, int isbn, date::Date return_date);


            void removeBook(int isbn);
            void removeAuthor(int numerical_id);
            void removeBorrow(int isbn);

            

            void printBooks() const;
            void printAuthors() const;
            void printBorrows() const;

           








    };




}

#endif // LIBRARY_H