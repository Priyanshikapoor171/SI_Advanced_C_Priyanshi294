//Fine_middle_of_linked_list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void middle()
{
    struct Node *slow = head, *fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Middle = %d", slow->data);
}
int main()
{
    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = malloc(sizeof(struct Node));
    head->next->next->next->data = 40;
    head->next->next->next->next = malloc(sizeof(struct Node));
    head->next->next->next->next->data = 50;
    head->next->next->next->next->next = NULL;
    middle();
    return 0;
}


/*output
Middle = 30*