#include<stdio.h>
void sum();    ///function prototype
int main()
{
    printf("in main function");
    sum(); ///function call
    printf("\nback in main");

}
void sum()
{
    int num1,num2,result;
    printf("\nenter the value of num1 and num2 ");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("\nsum is : %d ",result);

}
