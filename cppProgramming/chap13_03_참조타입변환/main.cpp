#include <iostream>
using namespace std;

void main()
{
    int i = 3;
    cout << (float&)i << endl;  // i�� ��Ʈ���� �״�� float�� �ؼ��϶�
    float f = (float&)i;
    cout << f << endl;
}