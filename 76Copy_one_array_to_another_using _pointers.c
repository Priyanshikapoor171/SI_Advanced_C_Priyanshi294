//Copy_one_array_to_another_using _pointers. 
#include <stdio.h>
int main()
{
    int a[5], b[5];
    int *p = a, *q = b;
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", p + i);
    for(i = 0; i < 5; i++)
        *(q + i) = *(p + i);
    printf("Copied array:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(q + i));
    return 0;
}

/*output
Enter 5 elements:
56 48 59 35 82
Copied array:
56 48 59 35 82 */