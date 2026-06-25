// PASCAL TRIANGLE
#include <stdio.h>
int main()
{
    int n, i, j, space, no = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("  ");
        }
for (j = 0; j <= i; j++)
        {
              if (j == 0 || i == 0)
                no = 1;
            else
                no = no * (i - j + 1) / j;
            printf("    %d", no);
        }
        printf("\n");
    }
    return 0;
}


/*OUTPUT
Enter number of rows: 5
              1
            1    1
          1    2    1
        1    3    3    1
      1    4    6    4    1*/