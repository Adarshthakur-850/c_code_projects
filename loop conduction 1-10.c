#include <stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("enter the value of n=");
    scanf("%d", &n);
    while(i<=n)
    {
        s=s+i;
        i++;

    }

    printf("\nSum= %d",s);

}
