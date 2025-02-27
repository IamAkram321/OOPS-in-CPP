
#include <iostream>
using namespace std;
class Parent
{
public:
    void getInfo()
    {
        cout << "Base Class";
    }
};
class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Derived Class"; //it will get printed as it overrides the parent class.
    }
};
int main()
{
    Parent p1;
    p1.getInfo();
    return 0;
}