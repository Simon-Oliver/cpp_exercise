#include <iostream>

class User
{
public:
    int age = 20;
    std::string name = "Max";
    User operator+(User user)
    {
        User temp_user;
        temp_user.name = name + " " + user.name;
        temp_user.age = age + user.age;
        return temp_user;
    }
};

class Person
{
public:
    std::string name;
    std::string email;
    Person(std::string name, std::string email)
    {
        this->name = name;
        this->email = email;
    }
    bool operator==(Person pers)
    {
        if (name == pers.name && email == pers.email)
        {
            return true;
        }
        return false;
    };
};

std::ostream &operator<<(std::ostream &output, Person pers)
{
    output << "This is " << pers.name << ". And their email is " << pers.email;
    return output;
};

int main()
{
    User pos1, pos2;
    User pos3 = pos1 + pos2;

    std::cout << pos3.age << std::endl;

    Person person1("Max", "max@test.com");
    Person person2("Max", "max@test.com");
    Person person3("Phil", "phil@test.com");

    bool is_same_person = person1 == person2;
    bool is_same_person2 = person1 == person3;

    std::cout << is_same_person << std::endl;
    std::cout << is_same_person2 << std::endl;

    std::cout << person1 << std::endl;

    return 0;
}