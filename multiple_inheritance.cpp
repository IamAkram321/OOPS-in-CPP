#include <iostream>
using namespace std;
class car
{
public:
    string name;
    double price;
};
class brand
{
public:
    string brand;
};
class launch_year : public car, public brand 
{
public:
    int year;

    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Price:" << price << endl;
        cout << "Brand:" << brand << endl;
        cout << "Launc year:" << year << endl;
    }
};

int main()
{
    
    launch_year c1;
    c1.name = "Lamborghini";
    c1.price = 200;
    c1.brand = "Veneno";
    c1.year = 1990;
    c1.getInfo();
    return 0;
}