#include "library.h"
namespace library{

    Library::Library()
    {
    }

    void Library::addBook(book::Book book)
    {
        
    }

    void Library::addAuthor(author::Author author)
    {
    }

    void Library::addBorrow(borrow::Borrow borrow)
    {
    }

    void Library::addReader(reader::Reader reader)
    {
    }

    void Library::addReturn(int isbn, date::Date return_date)
    {
    }

    void Library::addBorrowIsbnBook(reader::Reader reader, int isbn)
    {
    }

    void Library::addBorrowIsbnReader(reader::Reader reader, int isbn)
    {
    }

    void Library::addBorrowIsbnDate(reader::Reader reader, int isbn, date::Date borrow_date)
    {
    }

    void Library::addReturnIsbnBook(reader::Reader reader, int isbn)
    {
    }

    void Library::addReturnIsbnReader(reader::Reader reader, int isbn)
    {
    }

    void Library::addReturnIsbnDate(reader::Reader reader, int isbn, date::Date return_date)
    {
    }

    void Library::removeBook(int isbn)
    {
    }

    void Library::removeAuthor(int numerical_id)
    {
    }

    void Library::removeBorrow(int isbn)
    {
    }

    void Library::printBooks() const
    {
    }

    void Library::printAuthors() const
    {
    }

    void Library::printBorrows() const
    {
    }
}
