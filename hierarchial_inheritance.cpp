#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int roll_no;
    void getInfo(){
        cout<<"Student Information:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll No.:"<<age<<endl;
    }
};
class Teacher : public Person{
    public:
    int salary;
    void getInfo(){
        cout<<"Teacher's Information:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
int main()
{
    Student s;
    s.name="Akram";
    s.age=19;
    s.roll_no=1;
    Teacher t;
    t.name="Vikas Divyakriti";
    t.age=51;
    t.salary=55000;
    s.getInfo();
    t.getInfo();
    return 0;
}