#include <iostream>
#include <string>
using namespace std;
class Friends
{
public:
    string name;
    int age;
    string place;
    Friends(string n, int a, string p)
    {
        name = n;
        age = a;
        place = p;
    }
    Friends(const Friends &orgObj)
    {
        this->name = orgObj.name;
        this->age = orgObj.age;
        this->place = orgObj.place;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Place:" << place << endl;
    }
};
int main()
{
    Friends myObj1("Shadik", 23, "Austria");
    Friends myObj2(myObj1);
    myObj2.getInfo();
    return 0;
}