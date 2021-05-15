#include <iostream>

struct Person
{
    std::string first_name;
    std::string last_name;
    std::string email;
    int age;
    int bod;
    std::string get_name()
    {
        return first_name + " " + last_name;
    }

private:
    std::string status = "active";
};

int main()
{
    Person user_1;
    user_1.first_name = "Max";
    user_1.last_name = "Muster";
    user_1.email = "test@test.com";
    user_1.age = 61;
    user_1.bod = 1961;

    std::cout << user_1.get_name() << std::endl;
    return 0;
}