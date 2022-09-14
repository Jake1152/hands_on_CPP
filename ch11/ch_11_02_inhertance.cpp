// ch_11_02_inhertance.cpp
#include <iostream>
#include "person.hpp"
#include "student.hpp"
#include "teacher.hpp"

using namespace std;

int main()
{
    Student stu("Jim");
    stu.setName("Jake");
    cout << stu.getName() << endl;

    Teacher teacher("Dr. J");
    teacher.setName("Dr. Jake");
    cout << teacher.getName() << endl;

    cout << stu << endl;
    cout << teacher << endl;

    stu.doNothing();
    teacher.doNothing();

    stu.study();
    teacher.teach();

    Person person;
    person.setName("Mr J");
    person.getName();
    person.study(); // error
    person.teach(); // error
    return (0);
}