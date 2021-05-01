#include <iostream>
#include <limits>
#include <string>

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
        // We are checking if the input is correct in this case it needs to be an int
        // if it's not an int, we break out of the loop
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

    // If we break out of the loop, our last input will still be stored in cin
    // with the below code we remve the values from cin
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;

    std::cin >> test;
    std::cout << test << std::endl;

    return 0;
}