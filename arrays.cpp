#include <iostream>

void log_arr(int array[], int size)
{

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "------->" << array[i] << std::endl;
    }
}

int main(void)
{
    const int SIZE = 100;
    int guesses[SIZE];
    int count;

    for (size_t i = 0; i < SIZE; i++)
    {
        if (std::cin >> guesses[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    // int array_size = sizeof(guesses) / sizeof(int);

    log_arr(guesses, count);

    return 0;
}