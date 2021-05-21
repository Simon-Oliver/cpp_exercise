#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "utils.h"
#include <unistd.h>

File::File(std::string filename, std::vector<std::string> data)
{
    this->filename = filename;
    this->data = data;
}

void File::loading()
{
    while (isLoading)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << ".";
            std::cout.flush();
            sleep(1);
        }
        std::cout << "\b\b\b   \b\b\b";
    }
    std::cout << "Loaded!" << std::endl;
};

void File::startLoading()
{
    isLoading = true;
}

void File::stopLoading()
{
    isLoading = false;
}

void File::writeFile()
{
    std::cout << "Writing File" << std::endl;
    std::ofstream file;
    file.open(filename, std::ios::app);

    for (std::string name : data)
    {
        file << name << "\n";
    };

    file.close();
}
