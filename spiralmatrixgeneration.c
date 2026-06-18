//spiralmatrixgeneration
#include <stdio.h>

int main() {
    int n = 4, a[10][10];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1, i, j;

    while (num <= n * n) {

        for (j = left; j <= right; j++) a[top][j] = num++;
        top++;

        for (i = top; i <= bottom; i++) a[i][right] = num++;
        right--;

        for (j = right; j >= left; j--) a[bottom][j] = num++;
        bottom--;

        for (i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }

    return 0;
}
/*Output
  1  2  3  4
 12 13 14  5
 11 16 15  6
 10  9  8  7*/