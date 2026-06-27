// Find the GCD of two numbers using Recursion.
#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)       
        return a;
    else
        return gcd(b, a % b);   
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
/*output
Enter two numbers: 10 20
GCD of 10 and 20 = 10*/