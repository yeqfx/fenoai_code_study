#include <stdio.h>

#define NUM_STUDENTS 5

int main()
{
    int sc[3];

    sc[0] = 100;
    sc[1] = 90;
    sc[2] = 80;
    //sc[3] = 70;

    printf("%d\n", sc[0]);
    printf("%d\n", sc[1]);
    printf("%d\n", sc[2]);
    //printf("%d\n", sc[3]);

    const int num_students = 5;

    int students_scores[NUM_STUDENTS];

    students_scores[0] = 100;
    printf("%d\n", sc[0]);

    return 0;
}