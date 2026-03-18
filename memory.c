#include<stdio.h>
int main()
{
    int*ptr=(int*)malloc(sizeof(int));
    free (ptr);
    ptr=NULL;
}
