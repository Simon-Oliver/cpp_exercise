#include <iostream>
#include <string>

int getInput(std::string message)
{
    int number;
    std::cout << message;
    std::cin >> number;
    return number;
}

int renderMenu()
{
    std::cout << "0. Quit \n1. Play Game \n";
}

int playing()
{
    std::cout << "Playing Game...1" << std::endl;
    std::cout << "Playing Game...2" << std::endl;
    std::cout << "Playing Game...3" << std::endl;
    return false;
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