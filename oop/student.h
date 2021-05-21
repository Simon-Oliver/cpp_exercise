#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <iostream>
#include <vector>

class Student : public User
{
public:
    std::vector<std::string> classes;
    std::vector<int> grades;
    void output();
};

#endif