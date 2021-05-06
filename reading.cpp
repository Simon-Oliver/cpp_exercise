#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("test.txt");
    std::vector<std::string> names;

    std::string input;
    while (getline(file, input))
    {
        names.push_back(input);
    }

    for (std::string name : names)
    {
        std::cout << name << std::endl;
    }

    return 0;
}