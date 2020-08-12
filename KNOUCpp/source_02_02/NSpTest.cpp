#include <iostream>
using namespace  std;

namespace myNSp1 { int n = 10; }
namespace myNSp2 { int n = 20; }
int n = 30;

int main()
{
    int n = 40;
    cout << "네임스페이스 myNSp1의 n\t\t\t : " << myNSp1::n << endl;
    cout << "네임스페이스 myNSp2의 n\t\t\t : " << myNSp2::n << endl;
    cout << "전역명칭공간(global namespace)의 n\t : " << ::n << endl;
    cout << "지역변수 n\t\t\t\t : " << n << endl;

    return 0;
}
