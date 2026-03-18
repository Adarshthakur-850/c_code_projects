#include<stdio.h>
void sum(int ,float );    ///function prototype
int main()
{
    int num1;
    float num2;
    printf("in main function");
    printf("\nenter the value of num1 and num2 ");
    scanf("%d%f",&num1,&num2);
    sum(num1,num2);///function call
    subtract(num1,num2);
    multiple(num1,num2);
    division(num1,num2);
    printf("\nback in main ");
    sum(num1,num2);
    subtract(num1,num2);
    multiple(num1,num2);
    division(num1,num2);
    printf("\nback in main again ");


}
void sum (int x,float y )
{
    float result;
    result=x+y;
    printf("\nsum is : %f ",result);
}

void subtract (int x,float y )
{
    float result;
    result=x-y;
    printf("\nsubtract is : %f ",result);
}

void multiple (int x,float y )
{
    float result;
    result=x*y;
    printf("\nmultiple is : %f ",result);
}

void division (int x,float y )
{
    float result;
    result=x/y;
    printf("\ndivision is : %f ",result);
}
