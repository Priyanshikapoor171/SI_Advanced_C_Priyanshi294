//SIMPLE INTEREST AND COMPOUND INTEREST 
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci, amount;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p * pow(1 + r / 100, t);
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

/*OUTPUT
Enter Principal, Rate and Time: 500 6 1
Simple Interest = 30.00
Compound Interest = 30.00*/