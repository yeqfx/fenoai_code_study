#include <iostream>
#include <typeinfo>

enum Color // user-defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_YELLOW,
};

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{ COLOR_RED };

    cout << paint << " " << COLOR_BLACK << endl;
    cout << house << " " << COLOR_BLUE << endl;
}

