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

void playing()
{
    int count = 0;
    int guess = 0;
    int random = rand() % 11;

    std::cout << random << std::endl;

    do
    {
        std::cout << "-----" << count << std::endl;
        std::cout << "-----" << random << std::endl;
        std::cout << "Guess the number: ";
        std::cin >> guess;
        count++;
    } while (count < 5 && guess != random);

    if (guess == random && count < 5)
    {
        std::cout << "You guessed the number in untder 5 tries!" << std::endl;
    }
    else if (count >= 5)
    {
        std::cout << "You didn't guess the number. Sorry!" << std::endl;
    }
}

int main(void)
{
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