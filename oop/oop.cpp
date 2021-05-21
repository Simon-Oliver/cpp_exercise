#include <iostream>
#include "person.h"
#include "user.h"
#include "student.h"

int main()
{
    User pos1, pos2;
    User pos3 = pos1 + pos2;
    std::vector<std::string> classes{"Class1", "Class2", "Class3"};
    std::vector<std::string> fields{"Math", "Chemistry"};
    Teacher t1(classes, fields);

    std::cout << t1.name << std::endl;

    for (std::string field : t1.classes)
    {
        std::cout << field << std::endl;
    }

    std::cout << pos3.age << std::endl;

    Person person1("Max", "max@test.com");
    Person person2("Max", "max@test.com");
    Person person3("Phil", "phil@test.com");

    bool is_same_person = person1 == person2;
    bool is_same_person2 = person1 == person3;

    std::cout << is_same_person << std::endl;
    std::cout << is_same_person2 << std::endl;

    std::cout << person1 << std::endl;

    Student stud1;
    std::vector<std::string> cl{"ClassStud1", "ClassStud2", "ClassStud3"};
    stud1.classes = cl;
    stud1.output();

    return 0;
}