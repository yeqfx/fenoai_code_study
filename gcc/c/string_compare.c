#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];

    printf("문자열 두 개를 입력하세요: ");
    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);    // 입력된 문자열 비교
	printf("반환값: %d\n", ret);

	if (ret == 0)
	{
		printf("두 문자열이 같음");
	}
	else if (ret > 0)
	{
		printf("%s보다 %s 가 큼\n", s2, s1);
	}
	else
	{
		printf("%s보다 %s 가 큼\n", s1, s2);
	}

    return 0;
}
