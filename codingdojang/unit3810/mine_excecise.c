#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int m = 5, n = 5;
    char matrix[][6] = { "*....\0", ".*.**\0", ".*...\0", ".....\0", ".....\0" };


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

    return 0;
}