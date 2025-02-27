#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    float CGPA;
    Student(string name, float CGPA)
    {
        this->name = name;
        this->CGPA = CGPA;
    }
    Student(Student &orgObj){
        this->name=orgObj.name;
        this->CGPA=orgObj.CGPA;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "CGPA:" << CGPA << endl;
    }
};
int main()
{
    Student s1("Akram", 8.6);
    Student s2(s1);
    s2.getInfo();
    return 0;
}