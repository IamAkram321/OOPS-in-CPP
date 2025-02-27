#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;
    float salary;
void changeDept(string newdept){
    dept = newdept;
}

};
int main()
{
    Teacher t1;
      t1.name="thejasree";
      t1.dept="computer science";
      t1.subject="java";
      t1.salary=30000;
      cout<<t1.name<<endl;
    return 0;
}