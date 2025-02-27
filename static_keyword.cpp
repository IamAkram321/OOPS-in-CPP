#include<iostream>
using namespace std;
void fun(){
    static int x= 0;
    cout << "X:" << x << endl;
    x++;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}