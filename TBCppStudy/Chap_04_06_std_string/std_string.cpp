#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    const char my_strs[] = "Hello, World";
    const string my_hello = "Hello, World";
    string my_ID = "123";

    cout << my_hello << endl;
    cout << my_strs << endl;
    cout << my_ID << endl;

    cout << my_hello.length() << endl;
    //cout << my_strs.length() << endl;
    cout << my_ID.length() << endl;

    cout << "Your age ? : ";
    int age;
    cin >> age;
    //std::getline(std::cin, age);

    //std::cin.ignore(32767, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    cout << "Your name ? : ";
    string name;
    std::getline(std::cin, name);
    //cin >> name;

    cout << name << " " << age << endl;
    return 0;
}