//Medianofanarray
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    float median;

    if(n % 2 == 0)
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        median = arr[n/2];

    printf("Median = %.2f", median);

    return 0;
}

/*Output
Median = 3.00*/