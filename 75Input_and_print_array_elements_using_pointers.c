//Input_and_print_array_elements_using_pointers
#include <stdio.h>
int main()
{
    int arr[5];
    int *p = arr;
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", p + i);
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    return 0;
}

/*output
Enter 5 elements:
456 657 981 123 678
Array elements are:
456 657 981 123 678 */