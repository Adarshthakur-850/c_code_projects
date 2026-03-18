#include<stdio.h>

int main()
{
    char a[20];
    int i,count=0;
    printf("enter string= ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of string is  =");
    printf("%d",count);
}
