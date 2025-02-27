#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Student : public Person
{
public:
    int roll_no;
    Student(string name, int age, int roll_no) : Person(name,age)
    {
        this->roll_no = roll_no;
    }

    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No.:" << roll_no;
    }
};

int main()
{
    Student s("akram",22,20);
    
    s.getInfo();
    return 0;
}