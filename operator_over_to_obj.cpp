#include <iostream>

class Person
{
public:
    std::string name;
    int age;
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

std::istream &operator>>(std::istream &input, Person &person)
{
    input >> person.name;
    return input;
}

int main()
{
    Person person1("Max", 29);
    std::cout << person1.name << std::endl;
    std::cout << "Change the name: ";
    std::cin >> person1;
    std::cout << person1.name << std::endl;

    return 0;
}