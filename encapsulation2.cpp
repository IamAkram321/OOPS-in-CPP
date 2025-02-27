#include <iostream>
using namespace std;
class university
{
public:
    string name;
    string location;
    string course;
    double fees;
    university(string name, string location, string course, int fees)
    {
        this->name = name;
        this->location = location;
        this->course = course;
        this->fees = fees;
        this->networth = 0;
    }

private:
    int networth;

public:
    void setname(int a)
    {
        networth = a;
    }
    int getname()
    {
        return networth;
    }
    void getInfo()
    {
        cout << name << " " << endl;
        cout << location << " " << endl;
        cout << course << " " << endl;
        cout << fees << " " << endl;
        cout << getname() << endl;
    }
};
int main()
{
    university uni("Oxford", "US", "CS", 50000);
    uni.setname(1000);
    uni.getInfo();
    return 0;
}