#include <iostream>
using namespace std;

class BaseC
{
private:
    int a;
protected:
    int b;
public:
    int c;
    int geta() const { return a; }
    void set(int x, int y, int z) { a = x; b = y; c = z; }
};

class Drvd1 : public BaseC
{
public:
    //int sum() const { return a + b + c; }
    void printbc() const { cout << b << " " << c << '\n'; }
};

class Drvd2 : protected BaseC
{
public:
    //int sum() const { return a + b + c; }
    void printbc() const { cout << b << " " << c << '\n'; }
};

class Drvd3 : private BaseC
{
public:
    //int sum() const { return a + b + c; }
    void printbc() const { cout << b << " " << c << '\n'; }
};

int main()
{
    Drvd1 d1;
    //d1.a = 1;
    //d1.b = 2;
    d1.c = 3;
    Drvd2 d2;
    //d2.a = 1;
    //d2.b = 2;
    //d2.c = 3;
    Drvd3 d3;
    //d3.a = 1;
    //d3.b = 2;
    //d3.c = 3;

    return 0;
}