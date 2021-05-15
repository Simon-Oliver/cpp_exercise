#include <iostream>
#include "utils.h"

int main()
{
    Rectangle rectangle;
    rectangle.length = 3;
    rectangle.width = 5;

    std::cout << utils::pow(rectangle.length, 4) << std::endl;
    return 0;
};

// To compile from command line use clang++
// Compile multiple files with C++17 "clang++ -std=c++17 mainStuff.cpp utils.cpp"