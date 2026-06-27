//Swap_two_arrays_using_pointers
#include <stdio.h>
int main()
{
    int a[5], b[5];
    int *p = a, *q = b;
    int temp, i;
    printf("Enter first array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", p + i);
    printf("Enter second array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", q + i);
    for(i = 0; i < 5; i++)
    {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
    printf("First array after swapping:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\nSecond array after swapping:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(q + i));
    return 0;
}

/*output
Enter first array:
11 22 33 66 55 
Enter second array:
44 99 88 77 58
First array after swapping:
44 99 88 77 58 
Second array after swapping:
11 22 33 66 55*/