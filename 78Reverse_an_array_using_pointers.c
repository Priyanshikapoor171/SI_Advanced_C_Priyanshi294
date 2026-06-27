//Reverse_an_array_using_pointers
#include <stdio.h>
int main()
{
    int arr[5];
    int *start, *end;
    int temp, i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    start = arr;
    end = arr + 4;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reversed array:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}

/*output
Enter 5 elements:
58 25 48 79 10
Reversed array:
10 79 48 25 58 */