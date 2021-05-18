#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
class Person
{
public:
    std::string name;
    std::string email;
    Person(std::string name, std::string email);
    bool operator==(Person pers);
};

std::ostream &operator<<(std::ostream &output, Person pers);

#endif