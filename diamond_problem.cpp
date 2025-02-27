#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    void behaviour()
    {
        cout << "Animal Walks" << endl;
    }
};
class Tiger :   public Animal
{
public:
    Tiger()
    {
        cout << "Tiger Constructor" << endl;
    }
};
class Lion :  public Animal
{
public:
    Lion()
    {
        cout << "Lion Constructor" << endl;
    }
};
class Liger : public Tiger, public Lion
{
public:
    Liger()
    {
        cout << "Liger Constructor" << endl;
    }
};

int main()
{
    Liger l1;
    l1.behaviour();
    return 0;
}