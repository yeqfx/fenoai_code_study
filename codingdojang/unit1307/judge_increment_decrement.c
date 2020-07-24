//표준 입력으로 정수, 실수, 문자가 입력됩니다.
//다음 소스 코드를 완성하여 입력된 정수와 실수는 1 증가시키고, 
//문자는 알파벳 순서에서 바로 앞 문자가 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char c1;

    scanf("%d %f %c", &num1, &num2, &c1);

    ++num1;
    ++num2;
    --c1;

    printf("%d %f %c\n", num1, num2, c1);

    return 0;
}