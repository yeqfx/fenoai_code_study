//표준 입력으로 행렬의 크기 m, n과 문자(char) 행렬이 입력됩니다(m과 n의 범위는 3~10).
//입력된 m, n은 공백으로 구분되며 행렬 안에서* 은 지뢰이고.은 지뢰가 아닙니다.
//지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력하는 프로그램을 만드세요
//(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
//
//여러 줄을 입력 받으려면 다음과 같이 for 반복문으로 scanf를 반복 호출하면 됩니다.
//for (int i = 0; i < m; i++)
//{
//    scanf("%s", matrix[i]);
//}
//행렬의 가로 공간에는 문자열이 들어갑니다.
//따라서 메모리를 할당할 때는 n + 1(가로 크기 + 1)만큼 할당하여 
//NULL이 들어갈 공간까지 확보해야 합니다.
//이 부분은 'Unit 39 문자열 사용하기'(515쪽), 
//'Unit 40 입력 값을 문자열에 저장하기'(527쪽)에서 자세히 설명하겠습니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    char** matrix = malloc(sizeof(char * ) * m);

    for (int i = 0; i < m; i++)
    {
        matrix[i] = malloc(sizeof(char) * (n + 1));
        memset(matrix[i], 0, sizeof(char) * (n + 1));
    }

    //int m = 5, n = 5;
    //char** matrix = malloc(sizeof(char*) * m);
    //for (int i = 0; i < m; i++)
    //{
    //    matrix[i] = malloc(sizeof(char) * (n + 1));
    //    memset(matrix[i], 0, sizeof(char) * (n + 1));
    //}
    //matrix[0] = "*....\0";
    //matrix[1] = ".*.**\0";
    //matrix[2] = ".*...\0";
    //matrix[3] = ".....\0";
    //matrix[4] = ".....\0";

    //matrix[0][0] = '0';
    //printf("%c", matrix[0][0]);
    


    for (int i = 0; i < m; i++)
    {
        scanf("%s", matrix[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (matrix[i][j] == '*') continue;
            else
                matrix[i][j] = '0';
                for (int x = i - 1; x < i + 2; x++)
                {
                    for (int y = j - 1; y < j + 2; y++)
                    {
                        if (x < 0 || x >= m || y < 0 || y >= n) continue;
                        else
                            if (matrix[x][y] == '*') matrix[i][j] += 1;
                            else continue;
                    }
                }

        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%s\n", matrix[i]);
    }

    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}