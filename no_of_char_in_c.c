#include<stdio.h>
int main()
{

    char str1[]="adarsh09890   123";
    int i=0,count=0;
    while (str1[i]!='\0')
    {
        count++;
        i++;
    }
    printf("total number of character in string %d ",count);
    return 0;
}
