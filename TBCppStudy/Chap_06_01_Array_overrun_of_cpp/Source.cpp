#include <iostream>

int main()
{
    using namespace std;

    int sc[3];

    sc[0] = 100;
    sc[1] = 90;
    sc[2] = 80;
    //sc[3] = 70;

    cout << sc[0] << endl;
    cout << sc[1] << endl;
    cout << sc[2] << endl;
    //cout << sc[3] << endl;

    const int num_students = 5;

    int students_scores[num_students];

    students_scores[0] = 100;
    cout << sc[0] << endl;

    return 0;
}