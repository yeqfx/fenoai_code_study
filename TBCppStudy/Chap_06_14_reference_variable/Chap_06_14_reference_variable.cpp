#include <iostream>

using namespace std;

void doWithVariable(int value)
{
    //value = 10;
    cout << "in doWithVariable, Variable value : " << value << endl;
    cout << "in doWithVariable, Variable value address : " << (uintptr_t)&value << endl;
}

void doWithPointer(int *value)
{
    cout << "in doWithPointer, Pointer value(*value) : " << *value << endl;
    cout << "in doWithPointer, Pointer value(value) :" << (uintptr_t)value << endl;
    cout << "in doWithPointer, Pointer value address of address(&value) : " << (uintptr_t)&value << endl;

}
void doWithReference(int &value)
{
    //value = 10;
    cout << "in doWithReference, Reference value : " << value << endl;
    cout << "in doWithReference, Reference value address : " << (uintptr_t)&value << endl;

}


int main()
{
    int value = 5;
    int* ptr = &value;
    int& ref = value;

    cout << "in main, Variable value : " << value << endl;
    cout << "in main, Variable value address : " << (uintptr_t)&value << endl;
    doWithVariable(value);
    
    cout << endl;
    
    cout << "in main, Pointer ptr value(*ptr) : " << *ptr << endl;
    cout << "in main, Pointer ptr address(ptr) : " << (uintptr_t)ptr << endl;
    cout << "in main, Pointer ptr address of address(&ptr) : " << (uintptr_t)&ptr << endl;
    doWithPointer(ptr);

    cout << endl;
    
    cout << "in main, Reference ref value : " << ref << endl;
    cout << "in main, Reference ref address : " << (uintptr_t)&ref << endl;
    doWithReference(ref);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
