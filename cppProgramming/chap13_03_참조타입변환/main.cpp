#include <iostream>
using namespace std;

void main()
{
    int i = 3;
    cout << (float&)i << endl;  // i의 비트열을 그대로 float로 해석하라
    float f = (float&)i;
    cout << f << endl;
}