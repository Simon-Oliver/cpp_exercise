#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int n : data)
    {
        std::cout << n << std::endl;
    };
}
