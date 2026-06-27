//Reverse_a_linked_list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void reverse()
{
    struct Node *first, *second, *temp;
    first = NULL;
    second = head;
    while (second != NULL)
    {
        temp = second->next;
        second->next = first;
        first = second;
        second = temp;
    }
    head = first;
}
void display()
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node *)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;
    printf("Original List: ");
    display();
    reverse();
    printf("\nReversed List: ");
    display();
    return 0;
}



/*output
Original List: 10 20 30 
Reversed List: 30 20 10*/