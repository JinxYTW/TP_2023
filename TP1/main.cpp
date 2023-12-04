#include "date.h"   
#include <assert.h>
#include <iostream>
#include <string>
#include "author.h"
#include "book.h"
#include "borrow.h"
#include "library.h"


int main() {
    library::Library library;

    library.addBook(book::Book("The Lord of the Rings", author::Author("J.R.R.", "Tolkien", date::Date(3, 1, 1892), 1), "English", "Fantasy", date::Date(29, 7, 1954), 9780007525546,"None"));
    library.addBook(book::Book("The call of Cthulhu", author::Author("H.P.", "Lovecraft", date::Date(20, 8, 1890), 2), "English", "Horror", date::Date(1, 2, 1928), 9780241256672,"None"));
    library.addBook(book::Book("Jojo's Bizarre Adventure", author::Author("Hirohiko", "Araki", date::Date(7, 6, 1960), 3), "Japanese", "Shonen", date::Date(1, 1, 1987), 9784087821574,"None"));
    library.addBook(book::Book("The Hunger Games", author::Author("Suzanne", "Collins", date::Date(10, 8, 1962), 4), "English", "Dystopian", date::Date(14, 9, 2008), 9780439023481,"None"));
    library.addBook(book::Book("The Hobbit", author::Author("J.R.R.", "Tolkien", date::Date(3, 1, 1892), 1), "English", "Fantasy", date::Date(21, 9, 1937), 9780007525492,"None"));

    library.addReader(reader::Reader("John", "Doe", "jd1", std::vector<int> {0}));
    library.addReader(reader::Reader("Jane", "Doe", "jad1",  std::vector<int> {0}));
    library.addReader(reader::Reader("John", "Smith", "jos1", std::vector<int> {0}));
    library.addReader(reader::Reader("Jane", "Smith", "jos2", std::vector<int> {0}));

    library.addBorrow(borrow::Borrow(9780007525546, "jd1", date::Date(1, 1, 2020)));
    library.addBorrow(borrow::Borrow(9780241256672, "jad1", date::Date(1, 1, 2020)));

    library.addBorrowIsbnBook(reader::Reader("John", "Doe", "jd1", std::vector<int> {0}), 9780007525546);

    library.addReturnIsbnBook(reader::Reader("John", "Doe", "jd1", std::vector<int> {0}), 9780007525546);

    library.printBooks();
    library.printAuthors();
    library.printBorrows();
    

    
    


    
};