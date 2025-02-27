
#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "I am constructor of Person!" << endl;
    }
    string name;
    int age;
};
class Teacher : public Person
{

public:
    Teacher()
    {
        cout << "I am constructor of Teacher!" << endl;
    }
    double salary;
};
class Student : public Teacher
{
public:
    Student()
    {
        cout << "I am constructor of student!" << endl;
    }
};
int main()
{
    Student s1;

    return 0;
}