// WAP to check whether sum of diagonals is equal to sum of boundary elements
#include <stdio.h>
int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 4},
        {3, 2, 1}
    };
    int i, j;
    int diagSum = 0, boundarySum = 0;
    for(i = 0; i < 3; i++) {
        diagSum += a[i][i];         
        diagSum += a[i][2 - i];     
    }
    diagSum -= a[1][1];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == 0 || i == 2 || j == 0 || j == 2)
                boundarySum += a[i][j];
        }
    }
    printf("Diagonal Sum = %d\n", diagSum);
    printf("Boundary Sum = %d\n", boundarySum);
    if(diagSum == boundarySum)
        printf("Both sums are equal.\n");
    else
        printf("Both sums are not equal.\n");
    return 0;
}

/*Output
Diagonal Sum = 13
Boundary Sum = 20
Both sums are not equal.*/