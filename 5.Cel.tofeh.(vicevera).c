//Convert temperature from Celsius to Fahrenheit (and vice versa).
#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9.0 / 5.0) * c + 32;

    printf("Temperature in Fahrenheit = %.2f\n", f);
//vice cersa


    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperature in Celsius = %.2f", c);

  
    return 0;
}

/*output
Enter temperature in Celsius: 50
Temperature in Fahrenheit = 122.00
Enter temperature in Fahrenheit:122
Temperature in Celsius = 50.00*/
