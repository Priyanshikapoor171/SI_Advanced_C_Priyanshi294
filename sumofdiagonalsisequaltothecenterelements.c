// WAP to check whether sum of diagonals is equal to the central element
#include <stdio.h>
int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 4},
        {3, 2, 1}
    };
    int i;
    int diagSum = 0;
    int center;
    for(i = 0; i < 3; i++) {
        diagSum += a[i][i];
        diagSum += a[i][2 - i];
    }
    diagSum -= a[1][1];
    center = a[1][1];
    printf("Diagonal Sum = %d\n", diagSum);
    printf("Central Element = %d\n", center);
  if(diagSum == center)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}

/*output
Diagonal Sum = 13
Central Element = 5
Not Equal*/
