// Find the factorial of a number using Recursion.
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)   
        return 1;
    else
        return n * factorial(n - 1);   
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}

/*output
Enter a number: 30
Factorial of 30 = 1409286144*/