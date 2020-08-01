#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person* p[5];
    int age = 0;
    int index = 0;

    //printf("%zd\n", sizeof(p));
    //printf("%zd\n", sizeof(struct Person));
    //printf("%zd\n", sizeof(struct Person*));
    //printf("%zd\n", offsetof(struct Person, name));
    //printf("%zd\n", offsetof(struct Person, age));

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        p[i] = malloc(sizeof(struct Person));
    }

    scanf("%s %d %s %d %s %d %s %d %s %d",
        &p[0]->name, &p[0]->age,
        &p[1]->name, &p[1]->age,
        &p[2]->name, &p[2]->age,
        &p[3]->name, &p[3]->age,
        &p[4]->name, &p[4]->age);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        if (p[i]->age > age)
        {
            age = p[i]->age;
            index = i;
        }
    }
    printf("%s\n", p[index]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        free(p[i]);
    }

    return 0;
}