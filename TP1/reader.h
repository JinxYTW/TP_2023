#ifndef READER_H
#define READER_H

#include <iostream>
#include <vector>
#include <string>

namespace reader {

    class Reader {
        public:
            Reader(std::string name, std::string surname, std::string borrower_id, std::vector<int> borrowed_books_isbn);
            std::string name() const;
            std::string surname() const;
            std::string borrower_id() const;
            std::vector<int> borrowed_books_isbn() const;
        private:
            std::string _name;
            std::string _surname;
            std::string _borrower_id;
            std::vector<int> _borrowed_books_isbn;
            
};

}
#endif // READER_H