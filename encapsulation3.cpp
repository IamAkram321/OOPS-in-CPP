#include <iostream>
using namespace std;
class competition
{
public:
    string player_name;
    int score;
    int age;

private:
    int player_id;
    string mobile_no;

public:
    void setID(int n)
    {
        player_id = n;
    }
    int getID()
    {
        return player_id;
    }
    void setMobile(string n)
    {
        mobile_no = n;
    }
    string getMobile()
    {
        return mobile_no;
    }
};
int main()
{
    competition myObj;
    myObj.age = 19;
    myObj.player_name = "John";
    myObj.score = 98;
    myObj.setID(123);
    myObj.setMobile("9823521296");
    cout << myObj.getID() << endl;
    cout << myObj.getMobile() << endl;

    return 0;
}