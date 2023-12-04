#ifndef AUTHOR_H
#define AUTHOR_H

#include "date.h"

namespace author{
    class Author{
        public:

        Author(std::string name, std::string surname, date::Date birth_date, int numerical_id);
        std::string name() const;
        std::string surname() const;
        date::Date birth_date() const;
        int numerical_id() const;




        private:
        std::string _name;
        std::string _surname;
        date::Date _birth_date;
        int _numerical_id;











    };

}



#endif // AUTHOR_H