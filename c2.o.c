#include <stdio.h>
int main()
{
    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c" , &op);
    printf("Enter two operands; ");
    scanf("%1f %1f" , &first, &second);
     
     switch (op)
     {
        case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
        case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator dosen't match any case constant
        default:
        printf("Error! operator is not correct");

     }
     return 0;
}