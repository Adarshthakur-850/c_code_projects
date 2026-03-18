#include<stdio.h>

int main()
{
    char c[]="hello world!";
    printf("\nc=%s",c);
    printf("\nSize of c is :%d",sizeof(c));
    char d[50];
    printf("\nEnter the value of d:");
    ///scanf("%s",&d);
    gets(d);
    ///scanf("%[^\n]*c",&d);
    printf("\nValue entered is :d",d);
    printf("\n size of d: %d",sizeof(d));
}
