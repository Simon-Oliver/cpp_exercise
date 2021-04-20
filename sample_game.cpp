#include <iostream>
#include <string>

int getInput(std::string message)
{
    int number;
    std::cout << message;
    std::cin >> number;
    return number;
}

int main(void)
{
    int answer;
    answer = getInput("Please enter your answer: ");
    std::cout << "Your answer was " << answer << std::endl;
}