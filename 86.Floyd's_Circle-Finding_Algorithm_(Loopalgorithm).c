//Floyd's_Circle-Finding_Algorithm_(Loop_Detection)
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int detectLoop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return 1;
    }
    return 0;
}
int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    second->data = 20;
    third->data = 30;
    head->next = second;
    second->next = third;
    third->next = second;
    if(detectLoop(head))
        printf("Loop Found");
    else
        printf("No Loop");
    return 0;
}


/*output
Loop Found*/