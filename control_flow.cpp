#include <iostream>
#include <unistd.h>
#include <string>

unsigned int microsecond = 1000000;

bool isRunnning = true;
int count = 10;

int counter()
{
    if (count > 1)
    {
        count--;
        return count;
    }
    else
    {
        isRunnning = false;
        return 0;
    }
};

int printProgress(void)
{
    std::cout << "Terminating";
    std::cout.flush();
    for (int i = 0; i < 3; i++)
    {
        usleep(0.5 * microsecond); //sleeps for 3 second
        std::cout << ".";
        std::cout.flush();
    }
    std::cout << std::endl;
}

int main(void)
{
    while (isRunnning)
    {
        std::cout << counter() << std::endl;
    }
    std::cout << "Done!!!" << std::endl;
    printProgress();
    std::cout << "Program End" << std::endl;
}