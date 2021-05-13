#include <iostream>

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
};

double area(Rectangle rect)
{
    return rect.length * rect.width;
};

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 5;

    double new_area = area(rectangle.length, rectangle.width);

    std::cout << new_area << std::endl;
    std::cout << area(rectangle) << std::endl;
    return 0;
}