#include<stdio.h>
int sum (int a,float b)
{
    return(a+b);
}
int main()
{
    int num1,num2,result;
    printf("in main function");
    printf("\nEnter the value of num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("\nback in main");
    printf("\n sum is ;%d",result);

    return 0;
}
