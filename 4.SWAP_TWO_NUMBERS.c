// Swap two numbers without using a temporary variable
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\nb = %d", a, b);

    return 0;
}

/*output
a = 20
b = 10*/