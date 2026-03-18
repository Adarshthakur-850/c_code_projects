#include<stdio.h>
int main()
{
    int var1=0,var2=1000;
    int*const ptr=&var1;
    printf("d\n",*ptr);
    var1=10;
    printf("%d\n",*ptr);
    return 0;
}
