// Call by reference
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside Function: x = %d, y = %d\n", *a, *b);
}

int main()
{
    int x = 10, y = 20;

    printf("Before Function: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Function: x = %d, y = %d\n", x, y);

    return 0;
}

/*output
Before Function: x = 10, y = 20
Inside Function: x = 20, y = 10
After Function: x = 20, y = 10*/