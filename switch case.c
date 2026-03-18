#include<stdio.h>
int main ()
{
char operation;
double n1, n2;
printf("Enter an operator(+, -, *, /): ");
scanf("%c", &operation);
printf("Enter two operation: ");
scanf(" %lf %lf", &n1, &n2);
switch(operation)
{
default:
printf("Error! operator is not correct");
break;
case'+':
printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
break;
case'-':
printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
break;
case'*':
printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
break;
case'/':
printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
break;
}
return 0;
}
