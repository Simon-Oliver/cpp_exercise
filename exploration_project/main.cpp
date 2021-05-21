#include "src/utils.h"
#include <vector>
#include <string>
#include <unistd.h>

int main(void)
{
    std::vector<std::string> data{"Data1", "Data2", "Data3"};
    std::string filePath = "./data/newData.txt";

    File file(filePath, data);
    file.writeFile();
    file.startLoading();
    file.loading();
    sleep(6);
    file.stopLoading();
    return 0;
};