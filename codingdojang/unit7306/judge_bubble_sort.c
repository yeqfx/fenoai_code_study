//ǥ�� �Է����� int�� ���� 10���� �Էµ˴ϴ�(�ߺ� ���� �����ϴ�).
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ������ ������������ ���ĵǰ� ���弼��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int numArr[], int count)
{
    int temp;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
            if (numArr[j] < numArr[j + 1])
            {
                temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
    }
}


int main()
{
    int numArr[10];

    scanf("%d %d %d %d %d %d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]
    );

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}