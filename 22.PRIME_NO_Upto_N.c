//PRIME_NO_Upto_N
#include <stdio.h>

int main()
{
    int n, i, j, flag;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        flag = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}

/*OUTPUT
Enter n: 30

2 3 5 7 11 13 17 19 23 29 */