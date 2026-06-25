//INVERTED_HALF_PYRAMID_OF_STARS
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
Enter number of rows: 5
* * * * * 
* * * * 
* * * 
* * 
*    */