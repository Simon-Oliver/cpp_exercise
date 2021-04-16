#include <iostream>
#include <climits>
#include <string>

int main()
{
    std::string message;
    std::cout << "Type your message: ";
    getline(std::cin, message);
    std::cout << message << std::endl;
}