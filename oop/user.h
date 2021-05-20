#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

class User
{
public:
    int age = 20;
    std::string name = "Max";
    User operator+(User user);
};

class Teacher : public User
{
public:
    std::vector<std::string> classes;
    std::vector<std::string> fields;
    Teacher(std::vector<std::string> classes, std::vector<std::string> fields);
};

#endif