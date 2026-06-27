// Missing_number
#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0, expectedSum, missing;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d numbers:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;
    printf("Missing Number = %d", missing);
    return 0;
}

/*output
Enter value of n: 5
Enter 4 numbers:
1 2 3 5
Missing Number = 4*/
