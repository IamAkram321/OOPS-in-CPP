#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};
int main()
{
    car obj1("Ford", "Mustang\t", 1999);
    car obj2("BMW", "  X5\t",1969);
    cout << obj1.brand << " " << obj1.model << " " << obj1.year << endl;
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << endl;
    return 0;
}