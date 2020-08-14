#include <iostream>
#include "Person3.h"
#include "Student3.h"
using namespace std;

//void PrintPerson(const Person* const p[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        p[i]->print();
//        cout << endl;
//    }
//}

int main()
{
    Person* pPrsn1 = new Person("Dudley");
    Student* pStdnt1 = new Student("Harry", "Hogwarts");
    Person* pPrsn2 = pStdnt1;       // upcasting
    Student* pStdnt2 = dynamic_cast<Student*>(pPrsn1);
    if (pStdnt2)
        cout << pStdnt2->getSchool() << endl;
    
    Student* pStdnt3 = dynamic_cast<Student*>(pPrsn2);
    if (pStdnt3)
        cout << pStdnt3->getSchool() << endl;
    return 0;
}