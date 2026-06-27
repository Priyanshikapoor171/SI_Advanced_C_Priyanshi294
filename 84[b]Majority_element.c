// Majority_element
#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n / 2)
        {
            printf("Majority Element = %d", arr[i]);
            return 0;
        }
    }
    printf("No Majority Element");
    return 0;
}

/*output
Enter size: 7
Enter elements:
2 2 1 2 3 2 2
Majority Element = 2*/