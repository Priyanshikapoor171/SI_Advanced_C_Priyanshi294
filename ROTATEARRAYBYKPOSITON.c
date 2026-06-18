// ROTATE ARRAY BY K POSITON
#include <stdio.h>

int main()
 {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    int temp[n];

    k = k % n;

    for(int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    printf("Rotated Array: ");
    for(int i = 0; i < n; i++)
 {
        printf("%d ", temp[i]);
    }

    return 0;
}

/*OUTPUT
Rotated Array: 5 6 7 1 2 3 4*/
