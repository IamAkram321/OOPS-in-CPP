#include <iostream>
using namespace std;
class Employee
{
protected:
    int salary;
};
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Programmer p;
    p.setSalary(50000);
    p.bonus = 5000;
    cout << "Salary:" << p.getSalary() << endl;
    cout << "Bonus:" << p.bonus << endl;
    return 0;
}