// WAP TO PERFROM DUTCH NATIONAL FLAG ALGORTITHM
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements (0, 1, 2 only): ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int low = 0, mid = 0, high = n - 1, temp;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*OUTPUT 
Enter size of array: 5
Enter elements (0, 1, 2 only): 2 0 1 2 0
Sorted array: 0 0 1 2 2 */
