#include <iostream>

class User
{
private:
    std::string status = "Platin";
    static int user_count;

public:
    std::string name;
    std::string email;
    static int get_user_count()
    {
        return user_count;
    }

    User(std::string name, std::string email)
    {
        user_count++;
        this->name = name;
        this->email = email;
    };
    std::string get_status()
    {
        return status;
    }
    void set_status(std::string status)
    {
        if (status == "Gold" || status == "Platin" || status == "Silver")
        {
            this->status = status;
        }
        else
        {
            std::cout << "Status must be either 'Gold','Silver' or 'Platin'" << std::endl;
        }
    }

    ~User()
    {
        user_count--;
    }
};

int User::user_count = 0;

int main()
{
    User user("Max", "max@test.com");
    User user1("Max", "max@test.com");
    User user2("Max", "max@test.com");
    User user3("Max", "max@test.com");
    User user4("Max", "max@test.com");
    User user5("Max", "max@test.com");
    User user6("Max", "max@test.com");
    User user7("Max", "max@test.com");
    User user8("Max", "max@test.com");
    std::cout << User::get_user_count() << std::endl;
    std::cout << user.get_status() << std::endl;
    user.set_status("Silver");
    std::cout << user.get_status() << std::endl;
    user.~User();
    std::cout << User::get_user_count() << std::endl;

    return 0;
}
