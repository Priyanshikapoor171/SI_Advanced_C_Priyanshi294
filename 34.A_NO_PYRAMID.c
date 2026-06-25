//A_NO_PYRAMID
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
Enter number of rows: 5
1
12
123
1234
12345*/