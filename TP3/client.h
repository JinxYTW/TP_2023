#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>


namespace client
{
    class Client
    {  
        public:
        Client(std::string name, std::string surname, std::string id);
        std::string name();
        std::string surname();
        std::string id();



        private:

        std::string _name;
        std::string _surname;
        std::string _id;

    };
}




#endif // CLIENT_H