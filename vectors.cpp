#include <iostream>
#include <vector>

// &arr is passing by reference. This means that if we manipulate the array in this function
// we will manipulate the original array. If we don't pass by reference,
// the array will be copied and changes wont be reflected in the original
void print_vector(std::vector<int> &arr)
{
    arr.push_back(0);
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
};