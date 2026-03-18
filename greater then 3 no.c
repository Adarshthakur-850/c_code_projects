#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
        printf("a=%d",a);
    else if (a>=c && b>=c)
        printf("b=%d",b);
    else
        printf("c=%d",c);
}
