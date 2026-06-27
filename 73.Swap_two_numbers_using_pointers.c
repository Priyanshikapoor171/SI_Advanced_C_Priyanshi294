//Swap_two_numbers_using_pointers
#include <stdio.h>
int main()
{
    int a, b, temp;
    int *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a=%d  b=%d\n",a,b);
    p1 = &a;
    p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

/*output
Enter two numbers: 56
89
Before swapping a=56  b=89
After swapping:
a = 89
b = 56*/