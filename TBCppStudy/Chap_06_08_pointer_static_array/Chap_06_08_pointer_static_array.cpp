#include <iostream>

using namespace std;

struct MyStruct {
    int array[5] = { 9, 7, 5, 3, 1 };
};

void printArray(int array[])
{
    cout << sizeof(array) << endl;
    cout << "array in printArray function : " << array << endl;
}

void printAddress(MyStruct *ms)
{
    cout << sizeof((*ms).array) << endl;
    cout << "*ms.array : " << (*ms).array << endl;
}

int main()
{
    MyStruct ms;

    int array[5] = { 9, 7, 5, 3, 1 };

    cout << sizeof(array) << endl;

    int* ptr = array;

    cout << sizeof(ptr) << endl;
    cout << "array in main : " << ptr << endl;

    printArray(ptr);

    cout << "&ms : " << &ms << endl;
    printAddress(&ms);

    return 0;

}