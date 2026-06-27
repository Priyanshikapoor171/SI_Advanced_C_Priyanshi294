// Call by value
#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside Function: a = %d, b = %d\n", a, b);
}

int main()
{
    int x = 10, y = 20;

    printf("Before Function: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After Function: x = %d, y = %d\n", x, y);

    return 0;
}
/*output
Before Function: x = 10, y = 20
Inside Function: a = 20, b = 10
After Function: x = 10, y = 20*/