#include "author.h"
namespace author{

    Author::Author(std::string name, std::string surname, date::Date birth_date, int numerical_id)
    {
    }

    std::string Author::name() const
    {
        return _name;
    }

    std::string Author::surname() const
    {
        return _surname;
    }

    date::Date Author::birth_date() const
    {
        return _birth_date;
    }

    int Author::numerical_id() const
    {
        return _numerical_id;
    }
}