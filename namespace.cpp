#include <iostream>
#include <limits>
#include <string>
#include <vector>

namespace utils
{
    void log_arr(std::vector<int> array, int size)
    {

        for (size_t i = 0; i < size; i++)
        {
            std::cout << "------->" << array[i] << std::endl;
        }
    }
}

void log_arr(int array[], int size)
{

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "------->" << array[i] << std::endl;
    }
}

int main(void)
{
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8};

    utils::log_arr(data, data.size());

    return 0;
}