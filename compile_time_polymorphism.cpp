#include<iostream>
using namespace std;
class Print{
public:
void show(int n) {
    cout<<"Integer:"<<n<<endl;
}
void show(char ch) { //function overloading
    cout<<"Character:"<<ch<<endl;
}
};
int main()
{
    Print p1;
    p1.show('&');
    return 0;
}