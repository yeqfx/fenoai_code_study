#include <iostream>
using namespace std;

class CTest
{
public:
    void Func() 
    { 
        cout << "General Function" << endl; 
    }

    void Func() const
    {
        cout << "Const Function" << endl;
    }
};

int main()
{
    const CTest ct;
    ct.Func();

    return 0;
}