#include <iostream>
using namespace std;
class Parent
{
public:
    void getInfo()
    {
        cout << "Base Class";
    }

    virtual void hello()
    { // virtual function : it is a member function that you expect to be redefined in derived class
        cout << "Base Class";
    }
};
class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Derived Class";
    }

    void hello() // here it is redefined
    {
        cout << "I am from derived class";
    }
};
int main()

{
    Child c1;
    c1.hello();
    return 0;
}