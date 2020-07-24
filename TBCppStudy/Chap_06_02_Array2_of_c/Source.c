#include <stdio.h>

void doSomething(int students_score[])
{
    printf("%d\n", (size_t)&students_score);
    printf("%d\n", (size_t)&students_score[0]);
    printf("%d\n", (size_t)&students_score[1]);
    printf("%d\n", (size_t)&students_score[2]);
}

int main()
{
    const int num_students = 20;

    int students_score[20] = { 1, 2, 3, 4, 5, };

    printf("%d\n", (size_t)&students_score);
    printf("%d\n", (size_t)&students_score[0]);
    printf("%d\n", (size_t)&students_score[1]);
    printf("%d\n", (size_t)&students_score[2]);

    printf("---------------------------\n");

    doSomething(students_score);
}