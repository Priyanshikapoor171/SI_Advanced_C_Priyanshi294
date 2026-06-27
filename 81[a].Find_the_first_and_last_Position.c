// Find_the_first_and_last_Position 
#include <stdio.h>
int firstOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int first = -1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            first = mid;
            high = mid - 1;   // Search on left side
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}
int lastOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int last = -1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            last = mid;
            low = mid + 1;    // Search on right side
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}
int main()
{
    int n, i, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);
    if(first == -1)
        printf("Element not found.");
    else
    {
        printf("First Position = %d\n", first);
        printf("Last Position = %d\n", last);
    }
    return 0;
}


/*output
Enter the size of array: 5
Enter 5 sorted elements:
1 2 3 4 5 
Enter element to search: 2
First Position = 1
Last Position = 1*/