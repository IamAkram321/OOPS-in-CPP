#include<iostream>
using namespace std;
class myClass{
    public:
    void hello();

};
void myClass::hello(){
    cout<<"my name is akram";
}
int main()
{
    myClass myObj;
    myObj.hello();
    return 0;
}