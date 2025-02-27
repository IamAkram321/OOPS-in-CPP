#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string name;
    string model;
    double price;
};
int main()
{
    car car1;
    car1.name = "Lamborghini";
    car1.model = "Aventador";
    car1.price = 400000.0;
    cout << car1.name << endl;
    cout << car1.model << endl;
    cout << car1.price << endl;
    return 0;
}