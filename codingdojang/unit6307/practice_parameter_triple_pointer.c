#include <stdio.h>
#include <stdlib.h>

void allocMatrix(void*** matrix, int m, int n, int size)
{
    *matrix = malloc(sizeof(void*) * m);
    for (int i = 0; i < m; i++)
    {
        (*matrix)[i] = malloc(size * n);
    }
}

void freeMatrix(void*** matrix, int m)
{
    for (int i = 0; i < m; i++)
    {
        free((*matrix)[i]);
    }
    free(*matrix);
}

int main()
{
    short** matrix;

    allocMatrix(&matrix, 3, 3, sizeof(short));

    matrix[0][2] = 10;
    matrix[1][1] = 20;
    printf("%d %d\n", matrix[0][2], matrix[1][1]);

    freeMatrix(&matrix, 3);

    return 0;
}