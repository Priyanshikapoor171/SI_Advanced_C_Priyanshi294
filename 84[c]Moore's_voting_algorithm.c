// Moore's_voting_algorithm
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int candidate = arr[0];
    int count = 1;
    for(i = 1; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
        else
            count--;
        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }
    count = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
    }
    if(count > n / 2)
        printf("Majority Element = %d", candidate);
    else
        printf("No Majority Element");
    return 0;
}

/*output
Enter size: 7
Enter elements:
2 2 1 2 3 2 2
Majority Element = 2*/
