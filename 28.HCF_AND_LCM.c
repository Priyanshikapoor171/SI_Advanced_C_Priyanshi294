//HCF_AND_LCM
#include <stdio.h>

int main()
{
    int a, b, i, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    lcm = (a * b) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d", lcm);

    return 0;
}
/*OUTPUT
Enter two numbers: 250 120
HCF = 10
LCM = 3000*/