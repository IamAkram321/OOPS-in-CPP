#include <iostream>
using namespace std;
class ABC
{
public:
    ABC()
    {
        cout << "Constructor!" << endl;
    }
    ~ABC()
    {
        cout << "Destructor!" << endl;
    }
};
int main()

{
    if (true)
    {
        static ABC obj;
    }
    cout << "End of main function!";
    return 0;
}