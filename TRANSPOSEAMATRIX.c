//TRANSPOSE A MATRIX
#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10];
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("\nTranspose of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*OUTPUT
Enter number of rows and columns: 5 3
Enter elements of matrix:
2 5 9 6 3
4 8 7 9 3
1 2 9 7 5

Transpose of matrix:
2 6 8 3 9
5 3 7 1 7
9 4 9 2 5*/


