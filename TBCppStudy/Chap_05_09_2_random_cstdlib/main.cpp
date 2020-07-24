#include <iostream>
#include <cstdlib>  // std::rand(), std::srand()
#include <ctime>    // std::time()
#include <random>

using namespace std;

int main()
{
    std::random_device rd; // random device �� �����
    // random device�� �־ �����⸦ �����
    std::mt19937 mersenne(rd());  //create a mersenne twister, 
    // �����Ⱑ � ������ �������� ���ؼ� ������ �����
    std::uniform_int_distribution<> dice(1, 6);
    //std::normal_distribution<> dice(1, 6);
    
    for (int count = 1; count <= 20; ++count)
        // ������ ������� ������ �����.
        cout << dice(mersenne) << endl;

    return 0;
}