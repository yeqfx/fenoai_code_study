#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand((unsigned)time(nullptr));

    vector<int> iv1(5);
    cout << "º¤ÅÍ1 : ";
    for (auto& i : iv1)
    {
        i = rand() % 100;
        cout << i << " ";
    }
    sort(iv1.begin(), iv1.end());
    cout << endl << "Á¤·ÄµÈ º¤ÅÍ1 : ";
    for (auto i : iv1)
        cout << i << " ";
    cout << endl << endl;

    vector<int> iv2(5);
    cout << "º¤ÅÍ2 : ";
    for (auto& i : iv2)
    {
        i = rand() % 100;
        cout << i << " ";
    }
    sort(iv2.begin(), iv2.end());
    cout << endl << "Á¤·ÄµÈ º¤ÅÍ2 : ";
    for (auto i : iv2)
        cout << i << " ";
    cout << endl << endl;

    vector<int> iv3(iv1.size() + iv2.size());

    merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
    cout << "º¤ÅÍ1°ú º¤ÅÍ2¸¦ ÇÕº´ÇÑ °á°ú : ";
    for (auto i : iv3)
        cout << i << " ";
    cout << endl << endl;

    return 0;
}