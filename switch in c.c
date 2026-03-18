#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;
    printf("enter an opertor (+,-,*,/):");
    scanf("c",&opertion);
    printf("enter two operands:");
    scanf("%lf %lf" ,&n1,&n2);
    switch(operation)
    {
    default:
        printf("error! opertor is not correct");
        break;
    case '+':
        printf("%.1lf+%.1lf =%.1lf",n1,n2,n1+n2);
        break;
    case '-':
        printf("%.1lf-%.1lf =%.1lf",n1,n2,n1-n2);
        break;
    case '*':
        printf("%.1lf*%.1lf =%.1lf",n1,n2,n1*n2);
        break;
    case '/':
        printf("%.1lf/%.1lf =%.1lf",n1,n2,n1/n2);
        break;
    }

return 0;
}
