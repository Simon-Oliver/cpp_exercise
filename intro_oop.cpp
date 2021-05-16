#include <iostream>
#include <vector>

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

class User
{
public:
    std::string user_name;
    std::string email;
};

int add_unique_user(std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].user_name == user.user_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
};

int main()
{
    std::vector<User> users;

    User user_1;
    user_1.user_name = "CrazyMax";
    user_1.email = "test@test.com";

    User user_2;
    user_2.user_name = "Sal89";
    user_2.email = "test@test.com";

    User user_3;
    user_3.user_name = "Johnny99";
    user_3.email = "test@test.com";

    User user_test;
    user_test.user_name = "SimSum";
    user_test.email = "test@test.com";

    users.push_back(user_1);
    users.push_back(user_2);
    users.push_back(user_3);

    add_unique_user(users, user_test);

    std::cout << add_unique_user(users, user_test) << std::endl;

    for (User u : users)
    {
        std::cout << u.user_name << std::endl;
    }
    return 0;
}