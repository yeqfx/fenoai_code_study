#include <iostream>


void foo()
{
    int a = 1;
    int b = 2;
    std::cout << "foo's a address : " << (uintptr_t)&a << std::endl;
    std::cout << "foo's b address : " << (uintptr_t)&b << std::endl;


    std::cout << "foo's address : " << (uintptr_t)foo << std::endl;
}

void bar()
{
    int a = 3;
    int b = 4;

    std::cout << "bar's address : " << (uintptr_t)bar << std::endl;
}

void foobar()
{
    int a = 3;
    int b = 4;

    std::cout << "foobar's address : " << (uintptr_t)foobar << std::endl;
}


int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    std::cout << "main's a address : " << (uintptr_t)&a << std::endl;
    std::cout << "main's b address : " << (uintptr_t)&b << std::endl;
    std::cout << "main's c address : " << (uintptr_t)&c << std::endl;
    std::cout << "main's d address : " << (uintptr_t)&d << std::endl;

    //int* main_ptr;
    std::cout << "main's address : " << (uintptr_t)main << std::endl;
    foo();
    bar();
    foobar();

    return 0;
}