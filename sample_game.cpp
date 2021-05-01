#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int getInput(std::string message)
{
    int number;
    std::cout << message;
    std::cin >> number;
    return number;
}

void renderMenu()
{
    std::cout << "0. Quit \n1. Play Game \n";
}

void log_arr(int array[], int size)
{

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "------->" << array[i] << std::endl;
    }
}

void playing()
{
    int count = 0;
    int guesses[100];
    int random = rand() % 11;
    std::cout << "Guess the number: ";
    std::cout << random << std::endl;

    while (true)
    {
        int guess = 0;
        count++;
        std::cin >> guess;
        if (guess == random)
        {
            std::cout << "You Win!" << std::endl;
            guesses[count] = guess;
            break;
        }
        else if (guess > random)
        {
            guesses[count] = guess;
            std::cout << "Your guess is too high" << std::endl;
        }
        else if (guess < random)
        {
            guesses[count] = guess;
            std::cout << "Your guess is too low" << std::endl;
        }
    };

    log_arr(guesses, count);
}

int main(void)
{
    srand(time(NULL));
    int choice;
    do
    {
        renderMenu();
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Stop Game" << std::endl;
            break;
        case 1:
            std::cout << "Playing Game" << std::endl;
            playing();
            break;
        }
    } while (choice != 0);
}