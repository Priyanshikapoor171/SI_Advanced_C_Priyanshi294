//Expression_evaluator
#include <stdio.h>
int main()
{
    int a, b, result;
    char op;
    printf("Enter expression ");
    scanf("%d%c%d", &a, &op, &b);
    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid Operator");
            return 0;
    }
    printf("Result = %d", result);
    return 0;
}
/*output
Enter expression 5+6
Result = 11*/