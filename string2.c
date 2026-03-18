#include<stdio.h>
int main()
{
    char a[]="hello";
    char*ptr;
    ptr=a;
    printf("string is : ");
    while(*ptr!='\0')
        printf("%c",*ptr++);

}
