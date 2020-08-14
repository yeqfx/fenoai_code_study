#include <iostream>
#include "Person2.h"
#include "Student2.h"
using namespace std;

int main()
{
    Student harry("Harry", "Hogwarts");
    std::cout << harry.getName() << " goes to " << harry.getSchool() << std::endl;

    return 0;
}