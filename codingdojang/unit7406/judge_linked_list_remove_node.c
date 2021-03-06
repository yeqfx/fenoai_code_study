//표준 입력으로 정수 10개와 정수 1개가 각 줄에 입력됩니다.
//여기서 정수 10개는 연결 리스트에 저장되고, 정수 1개는 삭제할 정수입니다.
//다음 소스 코드에서 removeNode 함수를 완성하여 
//연결 리스트에서 특정 숫자가 저장된 노드를 삭제하세요.
//단, 머리 노드 삭제 기능은 구현하지 않아도 됩니다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE {
    struct NODE* next;
    int data;
};

void addFirst(struct NODE* target, int data)
{
    struct NODE* newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;
    target->next = newNode;
}

void removeNode(struct NODE* node, int data)
{
    if (node == NULL)
        return;

    struct NODE* curr = node;
    struct NODE* prev = NULL;
    while (curr != NULL)
    {
        if (curr->data == data)
        {
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }

}

int main()
{
    int numArr[10] = { 0, };
    int removeNum;

    scanf("%d %d %d %d %d %d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]
    );

    scanf("%d", &removeNum);

    struct NODE* head = malloc(sizeof(struct NODE));
    head->next = NULL;

    for (int i = 0; i < 10; i++)
    {
        addFirst(head, numArr[i]);
    }

    removeNode(head, removeNum);

    struct NODE* curr = head->next;

    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    curr = head->next;

    while (curr != NULL)
    {
        struct NODE* next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);

    return 0;
}