#include <iostream>
#include <string>
#include <vector>
#include "user.h"

User User::operator+(User user)
{
    User temp_user;
    temp_user.name = name + " " + user.name;
    temp_user.age = age + user.age;
    return temp_user;
};

Teacher::Teacher(std::vector<std::string> classes, std::vector<std::string> fields)
{
    this->classes = classes;
    this->fields = fields;
};
