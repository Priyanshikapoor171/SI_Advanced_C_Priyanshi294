//PYRAMID
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= 2 * n; i++) {

        for(j = 1; j <= (2 * n - i); j++)
            printf(" ");

        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

/*OUTPUT
Enter number of rows: 3
     *
    ***
   *****
  *******
 *********
*********** */

