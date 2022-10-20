#include <stdio.h>
int main()
{
int dividend, divisior, quotient, remainder;
printf("Enter dividend: ");
scanf("%d", &dividend);
printf("Enter divisor");
scanf("%d", &divisor);

//Computer quotient
quotient = dividend/divisor; 

//Computer remainder
remainder = dividend%divisor;

printf("quotient = %d/n", quotient);
printf("remainder = %d", remainder);
return 0;
}