#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    printf("\n Before swapping a=%d b=%d",*a,*b);
    temp=*a;
    *a=*b;
    *b=temp;

    printf("After swapping a=%d b=%d",*a,*b);

}

int main(){
    int num1,num2;
    printf("Enter the values of num1 and num2 : ");
    scanf("%d %d",&num1,&num2);
    swap(num1,num2);
    printf("\nBefore swapping num1 = %d, num2= %d", num1,num2);
    swap(num1,num2);
    printf("\nAfter swapping num1=%d, num2=%d",num1,num2);
}
