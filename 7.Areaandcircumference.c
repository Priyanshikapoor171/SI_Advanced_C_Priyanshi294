//Areaandcircumference
#include <stdio.h>

int main() {
    float r, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

/*output
Enter radius: 5
Area = 78.50
Circumference = 31.40*/