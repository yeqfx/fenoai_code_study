//표준 입력으로 정수 16개가 입력됩니다.
//다음 소스 코드를 완성하여 행렬의 전치행렬이 출력되게 만드세요.
//
//전치행렬은 왼쪽 위부터 오른쪽 아래까지의 대각선(주대각선)을 기준으로 
//값을 뒤집은 행렬을 말합니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int transpose(int matrix[4][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)

        {
            int temp;
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }

        printf("\n");
    }
}


int main()
{
    int matrix[4][4];

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3],
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3],
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3],
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]
    );

    int n = sizeof(matrix[0]) / sizeof(int);

    transpose(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}