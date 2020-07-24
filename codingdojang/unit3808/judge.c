//ǥ�� �Է����� ����� ũ�� m, n�� ����(char) ����� �Էµ˴ϴ�(m�� n�� ������ 3~10).
//�Էµ� m, n�� �������� ���еǸ� ��� �ȿ���* �� �����̰�.�� ���ڰ� �ƴմϴ�.
//���ڰ� �ƴ� ��ҿ��� ������ ������ ������ ����ϴ� ���α׷��� ���弼��
//(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
//
//���� ���� �Է� �������� ������ ���� for �ݺ������� scanf�� �ݺ� ȣ���ϸ� �˴ϴ�.
//for (int i = 0; i < m; i++)
//{
//    scanf("%s", matrix[i]);
//}
//����� ���� �������� ���ڿ��� ���ϴ�.
//���� �޸𸮸� �Ҵ��� ���� n + 1(���� ũ�� + 1)��ŭ �Ҵ��Ͽ� 
//NULL�� �� �������� Ȯ���ؾ� �մϴ�.
//�� �κ��� 'Unit 39 ���ڿ� ����ϱ�'(515��), 
//'Unit 40 �Է� ���� ���ڿ��� �����ϱ�'(527��)���� �ڼ��� �����ϰڽ��ϴ�.

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