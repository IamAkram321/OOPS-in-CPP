#include<iostream>
#include<string>
using namespace std;
class myClass{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary=s;
    }
    
    int getSalary(){
        return salary;
    }

};
int main()
{
    myClass myObj;
    myObj.setSalary(50);
    cout<<myObj.getSalary()<<endl;
    return 0;
}