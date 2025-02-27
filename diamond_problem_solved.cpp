#include <iostream>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "Animal Constructor." << endl;
    }
    int age;
    void walks()
    {
        cout << "Animal Walks." << endl;
    }
};
class Tiger : virtual public Animal
{
public:
    Tiger()
    {
        cout << "Tiger Constructor." << endl;
    }
};
class Lion : virtual public Animal
{
public:
    Lion()
    {
        cout << "Lion Constructor." << endl;
    }
};
class Liger : public Tiger, public Lion
{
public:
    Liger()
    {
        cout << "Liger Constructor." << endl;
    }
};

int main()
{
    Liger l1;
    l1.walks();
    return 0;
}