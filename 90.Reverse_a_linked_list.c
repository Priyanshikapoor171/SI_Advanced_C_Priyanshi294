//Reverse_a_linked_list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void reverse()
{
    struct Node *prev = NULL, *curr = head, *next;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void display()
{
    struct Node *p = head;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;
    printf("Original: ");
    display();
    reverse();
    printf("\nReversed: ");
    display();
    return 0;
}


/*output
Original: 10 20 30 
Reversed: 30 20 10 */