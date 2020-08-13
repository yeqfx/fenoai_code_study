#include <iostream>
#include "NameObj.h"

using namespace std;

void f()
{
    NamedObj x("Third");
    x.display();
}

int main()
{
    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
    NamedObj a("First");
    a.display();
    NamedObj b("Second");
    b.display();
    f();
    NamedObj c("Fourth");
    c.display();
    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;

    return 0;
}