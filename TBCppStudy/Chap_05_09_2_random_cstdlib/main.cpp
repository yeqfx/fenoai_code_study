#include <iostream>
#include <cstdlib>  // std::rand(), std::srand()
#include <ctime>    // std::time()
#include <random>

using namespace std;

int main()
{
    std::random_device rd; // random device 를 만들고
    // random device를 넣어서 생성기를 만들고
    std::mt19937 mersenne(rd());  //create a mersenne twister, 
    // 생성기가 어떤 분포를 따르는지 정해서 분포를 만들고
    std::uniform_int_distribution<> dice(1, 6);
    //std::normal_distribution<> dice(1, 6);
    
    for (int count = 1; count <= 20; ++count)
        // 분포가 생성기로 난수를 만든다.
        cout << dice(mersenne) << endl;

    return 0;
}