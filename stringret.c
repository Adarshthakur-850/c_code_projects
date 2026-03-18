#include<stdio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("enter the first string= ");
    gets(a);
    printf("\nenter the second string=");
    gets(b);
    if (strcmp(a,b)==0)
    printf("enter the string are equal.\n");
    else if (strcmp(a,b)>0)
    {
        printf("enter string are not equal.\n");
        printf("\n a is greater ");

    }
    else
    {
        printf("enter string are not equal.\n");
        printf("\n b is greater ");

    }
}
