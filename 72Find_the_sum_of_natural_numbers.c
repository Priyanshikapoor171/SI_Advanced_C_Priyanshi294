//Find the sum of natural numbers using Recursion.
#include <stdio.h>
int sum(int n)
{
    if (n == 1)        
        return 1;
    else
        return n + sum(n - 1);   
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d", n, sum(n));
    return 0;
} 
/*output
Enter a positive number: 5
Sum of first 5 natural numbers = 15*/