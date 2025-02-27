#include <iostream>
using namespace std;
class Player
{
public:
    string name;
    int score;
    int age;
    Player()
    {
        name = "unknown";
        score = 0;
        age = 0;
    }
    Player(string name, int score, int age)
    {
        /*this is a special pointer that points to the object for which a member function is called
        It is the same program of constructor_all. Check for clarification*/
        this->name = name;
        this->score = score;
        this->age = age;
    }
    Player(const Player &source) //here &source is source we can name anything which fetches the address
    {
        name = source.name;
        score = source.score;
        age = source.age;
    }
    void display()
    {
        cout << "Name:" << name << " " << "Score:" << score << " " << "Age:" << age << endl;
    }
};
int main()
{
    Player p1;
    Player p2("Akram", 98, 22);
    Player p3(p2);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}