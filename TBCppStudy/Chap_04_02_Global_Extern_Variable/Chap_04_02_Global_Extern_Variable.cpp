#include <iostream>

using namespace std;

void doSomething()
{
    int a = 1, b = 2, c = 3;
    int d = 4, e = 5;
    static int f = 6;
    int g = 7, h = 8, i = 9;

    cout << a << " " << long(&a) << " " << sizeof(&a) << endl;
    cout << b << " " << long(&b) << " " << &a - &b << endl;
    cout << c << " " << long(&c) << " " << &b - &c << endl;
                        
    cout << d << " " << long(&d) << endl;
    cout << e << " " << long(&e) << " " << &d - &e << endl;
    cout << f << " " << long(&f) << " " << &e - &f << endl;
                        
    cout << g << " " << long(&g) << " " << &e - &g << endl;
    cout << h << " " << long(&h) << " " << &g - &h << endl;
    cout << i << " " << long(&i) << " " << &h - &i << endl;
}

int main()
{
    doSomething();

    return 0;
}
