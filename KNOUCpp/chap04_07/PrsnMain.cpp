#include <Iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person p1("��ö��", "����� ���α�");
    Person p2("������", "������ ���ؽ�");
    p1.print();
    p2.print();
    cout << endl << "�ּ� ���� : ";
    p2.chAddr("������ ����");
    p2.print();
    //delete p1;
    //delete p2;
    return 0;
}