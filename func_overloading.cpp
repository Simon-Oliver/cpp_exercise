#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 10;
    int b = 20;
    swap(a, b);

    std::string left = "Left";
    std::string right = "Right";

    swap(left, right);
    std::cout << "---> a: " << a << " b: " << b << std::endl;
    std::cout << "---> left: " << left << " right: " << right << std::endl;
    return 0;
}