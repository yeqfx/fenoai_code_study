// ���� ������ Assignment Operator
// �̵� ���� ������ Move Assignment Operator

#include <iostream>
#include <initializer_list>
#include "VecF.h"
using namespace std;


void swapVecF(VecF& v1, VecF& v2)
{
    VecF tmp = move(v1);
    v1 = move(v2);
    v2 = move(tmp);
}

int main()
{
    float a[3] = { 1, 2, 3 };
    float b[3] = { 2, 4, 6 };
    VecF v1{ 3, a };
    VecF v2{ 3, b };
    VecF v3{ 3 };
    v3 = v1;            // ���� ������
    cout << v3 << endl;
    v3 = v1.add(v2);    // �̵� ���� ������
    cout << v1 << " + " << v2 << " = ";
    cout << v3 << endl;

    VecF vec1(3, a), vec2(3, b);
    cout << vec1 << " " << vec2 << endl;
    swapVecF(vec1, vec2);
    cout << vec1 << " " << vec2 << endl;
    
    return 0;
}