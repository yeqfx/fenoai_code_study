#include <iostream>
using namespace std;

class CChild
{
public:
    CChild()
    {
        cout << "CParent A" << endl;
    }

    CChild(int arg)
    {
        cout << "CParent B" << endl;
    }
};

class CTest : public CChild
{
public:
    CTest() : CChild{ 1 }
    {}

    
};

int main()
{
    CTest t;
}