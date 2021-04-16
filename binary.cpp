#include <iostream>

int print(int val)
{
    return val;
}

int getInput(std::string message)
{
    int input;
    std::cout << message;
    std::cin >> input;
    return input;
}

int main(void)
{
    int input = getInput("Tells us your input: ");
    std::cout << print(input) << std::endl;
}