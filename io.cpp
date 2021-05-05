#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream file;
    file.open("test.txt", std::ios::app);

    std::vector<std::string> names;
    names.push_back("Peter Pan");
    names.push_back("Obi Wan");
    names.push_back("Luke Skywalker");

    for (std::string name : names)
    {
        file << name << "\n";
    };

    file.close();
    return 0;
}