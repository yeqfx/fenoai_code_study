//표준 입력으로 정수 두 개와 세 개가 입력됩니다.
//다음 소스 코드를 완성하여 입력된 정수 두 개의 합과 세 개의 합이 출력되게 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...)
{
    int result = 0;
    va_list ap;
    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        result += va_arg(ap, int);
    }

    return result;
}

int main()
{
    int num1, num2;
    int num3, num4, num5;

    scanf("%d %d", &num1, &num2);
    scanf("%d %d %d", &num3, &num4, &num5);

    printf("%d\n", sum(2, num1, num2));
    printf("%d\n", sum(3, num3, num4, num5));

    return 0;
}