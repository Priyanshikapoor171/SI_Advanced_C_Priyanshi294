//INVERSIONCOUNTINARRAY
#include <stdio.h>

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;
    int count = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }

    printf("Inversion Count = %d", count);

    return 0;
}

/*OUTPUT
Inversion Count = 3*/

