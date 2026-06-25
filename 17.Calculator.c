//Calculator
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error: Division by zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

/*output
Enter an operator (+, -, *, /): +
Enter two numbers: 15
20
Result = 35.00*/