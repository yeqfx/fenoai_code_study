#include <iostream>
using namespace std;

int main()
{
    int max;
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

    max = data[0];
    cout << "������ : " << data[0];
    for (int i = 1; i < 10; i++)
    {
        cout << "  " << data[i];
        if (max < data[i]) max = data[i];
    }
    cout << "\n\n�迭�� �ִ밪 : " << max << endl;
    return 0;
}