#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

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

void log_vector(std::vector<int> &arr)
{

    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << "------->" << arr[i] << std::endl;
    }
}

void playing()
{

    std::vector<int> guesses;
    int count = guesses.size();
    int random = rand() % 11;
    std::cout << "Guess the number: ";
    std::cout << random << std::endl;

    while (true)
    {
        int guess = 0;
        std::cin >> guess;
        guesses.push_back(guess);
        if (guess == random)
        {
            std::cout << "You Win!" << std::endl;
            break;
        }
        else if (guess > random)
        {

            std::cout << "Your guess is too high" << std::endl;
        }
        else if (guess < random)
        {

            std::cout << "Your guess is too low" << std::endl;
        }
    };

    log_vector(guesses);
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