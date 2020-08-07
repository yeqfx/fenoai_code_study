#include <iostream>

int main()
{
    using namespace std;

    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long long>::max() << endl;

    cout << numeric_limits<short>::min() << endl;
    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<long>::min() << endl;
    cout << numeric_limits<long long>::min() << endl;

    cout << numeric_limits<short>::lowest() << endl;
    cout << numeric_limits<int>::lowest() << endl;
    cout << numeric_limits<long>::lowest() << endl;
    cout << numeric_limits<long long>::lowest() << endl;


}
