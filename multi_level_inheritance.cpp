#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int roll_no;
};
class Grad_Student : public Student
{
public:
    string researc_area;
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "roll_no " << roll_no << endl;
        cout << "research_area:" << researc_area << endl;
    }
};

int main()
{
    Grad_Student g1;
    g1.name = "akram";
    g1.age = 20;
    g1.roll_no = 1;
    g1.researc_area = "AI";
    g1.getInfo();
    return 0;
}