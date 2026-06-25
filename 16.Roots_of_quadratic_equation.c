//Roots_of_quadratic_equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, r1, r2, real, imag;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("Real and different roots:\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f", r1, r2);
    }
    else if (D == 0) {
        r1 = -b / (2*a);
        printf("Real and equal roots:\nRoot = %.2f", r1);
    }
    else {
        real = -b / (2*a);
        imag = sqrt(-D) / (2*a);
        printf("Complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi", real, imag);
    }

    return 0;
}
/*output
Enter values of a, b and c: 2 2 5
Complex roots:
Root 1 = -0.50 + 1.50i
Root 2 = -0.50 - 1.50i*/