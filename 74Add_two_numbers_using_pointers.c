//Add_two_numbers_using_pointers
#include <stdio.h>
int main()
{
    int a, b, sum;
    int *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("Sum = %d", sum);
    return 0;
}

/*output
Enter two numbers: 56 25
Sum = 81*/