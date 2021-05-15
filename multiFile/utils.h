#ifndef UT
#define UT
struct Rectangle
{
    double length;
    double width;
};

namespace utils
{
    double area(double length, double width);

    double area(Rectangle rect);

    //default param is left here but was removed in utils.cpp <-- not sure why
    double pow(double base, int pow = 2);
}
#endif