#include <iostream>

int change_int(int &val)
{
    val = val + 2;
    return val;
}

int change_val(int val)
{
    val = val + 2;
    return val;
}

int main(void)
{
    int x = 10;
    std::cout << x << std::endl;
    change_val(x);
    std::cout << x << std::endl;
    change_int(x);
    std::cout << x << std::endl;
}