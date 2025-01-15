#include <stdio.h>
#include <stdlib.h>

struct li
{
    int data;
    struct li *next;
} typedef node;

node *create()
{
    node *p;
    p = (node *)malloc(sizeof(node));
    return p;
}

node *LL(node *head)
{
    node *p, *ptr;

    p = create();
    printf("Enter elements of sorted singly linked list (Enter 0 for stop) - ");
    scanf("%d", &(p->data));
    ptr = p;
    head = p;

    while (p->data != 0)
    {
        ptr = p;
        p = create();
        ptr->next = p;
        scanf("%d", &(p->data));
    }

    ptr->next = NULL;

    return head;
}

void traversal(node *head)
{
    node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d ", (p->data));
        p = p->next;
    }
}

node *insertInSortedLL(node *head, int n)
{
    int flag = 0;
    node *p, *new;
    p = head;

    new = create();
    new->data = n;

    if (p->next != NULL)
    {
        while (p->next != NULL)
        {
            if (p->next->data > n)
            {
                flag = 1;
                break;
            }
            p = p->next;
        }

        if (flag == 0)
        {
            p->next = new;
            new->next = NULL;

            return head;
        }

        new->next = p->next;
        p->next = new;

        return head;
    }
    else
    {
        if (p->data > n)
        {
            new->next = p;
            return new;
        }
        else
        {
            p->next = new;
            new->next = NULL;
            return head;
        }
    }
}

int main()
{
    int n;
    node *head;

    head = LL(head);

    traversal(head);

    printf("\n");

    printf("Enter element you want to add - ");
    scanf("%d", &n);

    head = insertInSortedLL(head, n);

    traversal(head);

    return 0;
}