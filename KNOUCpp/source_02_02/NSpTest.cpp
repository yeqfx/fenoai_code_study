#include <iostream>
using namespace  std;

namespace myNSp1 { int n = 10; }
namespace myNSp2 { int n = 20; }
int n = 30;

int main()
{
    int n = 40;
    cout << "���ӽ����̽� myNSp1�� n\t\t\t : " << myNSp1::n << endl;
    cout << "���ӽ����̽� myNSp2�� n\t\t\t : " << myNSp2::n << endl;
    cout << "������Ī����(global namespace)�� n\t : " << ::n << endl;
    cout << "�������� n\t\t\t\t : " << n << endl;

    return 0;
}
