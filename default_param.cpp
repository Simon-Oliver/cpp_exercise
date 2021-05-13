#include <iostream>

struct Rectangle
{
    double length;
    double width;
};

double pow(double base, int pow = 2)
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 5;

    std::cout << pow(rectangle.length) << std::endl;
    return 0;
}