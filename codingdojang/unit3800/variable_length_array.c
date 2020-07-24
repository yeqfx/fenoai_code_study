#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
    int size = 5;

    scanf("%d", &size);  // 배열의 크기를 입력받음

    //int numArr[size];    // GCC에서는 사용 가능, Visual Studio 2019에서도 컴파일 에러

    return 0;
}