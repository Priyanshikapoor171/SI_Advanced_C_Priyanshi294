// LEADERS IN ARRAY
 #include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    printf("Leaders are: ");

    int max_from_right = arr[n - 1];
    printf("%d ", max_from_right);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

/*OUTPUT:
Leaders are: 2 5 17*/
