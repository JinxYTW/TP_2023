#include "client.h"

client::Client::Client(std::string name, std::string surname, std::string id):_name(name),_surname(surname),_id(id)
{
    
}

std::string client::Client::name()
{
    return _name;
}

std::string client::Client::surname()
{
    return _surname;
}

std::string client::Client::id()
{
    return _id;
}
