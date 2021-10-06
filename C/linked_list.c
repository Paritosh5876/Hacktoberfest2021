#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node NODE;
NODE *start = NULL;
NODE *create_ll(NODE *start)
{
    NODE *newnode, *ptr;
    int num;
    printf("\n ENTER 0 TO END : ");
    printf("\n ENTER DATA : ");
    scanf("%d", &num);
    while (num != 0)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data = num;
        if (start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = newnode;
            newnode->next = NULL;
        }
        printf("Enter 0 to end :");
        printf("\n ENTER DATA :");
        scanf("%d", &num);
    }
    return start;
}
NODE *display_ll(NODE *start)
{
    NODE *ptr = start;
    while (ptr != NULL)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

int main()
{
    start = create_ll(start);
    printf("LL :");
    display_ll(start);
}
