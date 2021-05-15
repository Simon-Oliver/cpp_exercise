#include <iostream>
#include "utils.h"

namespace utils
{
    double area(double length, double width)
    {
        return length * width;
    };

    double area(Rectangle rect)
    {
        return rect.length * rect.width;
    };

    // We removed default param but left it in utils.h
    double pow(double base, int pow)
    {
        int total = 1;
        for (int i = 0; i < pow; i++)
        {
            total *= base;
        }
        return total;
    }
}
