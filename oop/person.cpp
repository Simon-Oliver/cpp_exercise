#include <iostream>
#include <string>
#include "person.h"

Person::Person(std::string name, std::string email)
{
    this->name = name;
    this->email = email;
}

bool Person::operator==(Person pers)
{
    if (name == pers.name && email == pers.email)
    {
        return true;
    }
    return false;
};

std::ostream &operator<<(std::ostream &output, Person pers)
{
    output << "This is " << pers.name << ". And their email is " << pers.email;
    return output;
};
