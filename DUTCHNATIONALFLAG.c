//DUTCH NATIONAL FLAG
#include <stdio.h>

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, mid = 0, high = n - 1;
    int temp;

    while (mid <= high) {
        if (arr[mid] == 0) {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {  // arr[mid] == 2
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT
Sorted Array: 0 0 0 1 1 1 2 2 2*/

