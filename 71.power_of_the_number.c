// Calculate_the_power_of_a_number_using_Recursion.
#include <stdio.h>
int power(int base, int exp)
{
    if (exp == 0)        
        return 1;
    else
        return base * power(base, exp - 1);   
}
int main()
{
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    return 0;
}

/*output
Enter the base: 2
Enter the exponent: 4
2^4 = 16*/