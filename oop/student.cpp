#include <iostream>
#include <vector>
#include <string>
#include "student.h"

void Student::output()
{
    for (std::string course : this->classes)
    {
        std::cout << course << std::endl;
    }
};
