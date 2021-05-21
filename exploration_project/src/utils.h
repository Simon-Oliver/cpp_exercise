#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class File
{
public:
    bool isLoading = false;
    std::string filename;
    std::vector<std::string> data;

    File(std::string filename, std::vector<std::string> data);
    void writeFile();
    void loading();
    void startLoading();
    void stopLoading();
};

#endif