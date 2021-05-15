#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    std::cout << "a: " << a << " b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    std::string a_string = "Left";
    std::string b_string = "Right";
    std::cout << "a: " << a_string << " b: " << b_string << std::endl;
    swap(a_string, b_string);
    std::cout << "a: " << a_string << " b: " << b_string << std::endl;

    return 0;
}