#include <iostream>
using namespace std;
class myClass
{
public:
    void hello()
    {
        cout << "Hello World" << endl;
    }
};
int main()
{
    myClass myObj;
    myObj.hello();
    return 0;
}