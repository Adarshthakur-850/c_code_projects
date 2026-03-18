#include<stdio.h>
int main(){
    int a=10;

    int *ptr=&a;
    printf("Value of a is ;%d",a);
    printf("\nValue of ptr is ;%d",ptr);
    printf("|nAddress of a is ;%d",a);
    printf("\nAddress of ptr is ;%d",ptr);

}
