#include<stdio.h>
int main ()
{
    int a[100],i,n,pos,index;
    printf("how many no to store in array\n");
    scanf("%d",&n);///n=5
        printf("enter the \n");
        for (i=0;i<=n-1;i++)
            scanf("%d",&arr[i]);
    printf("enter position to delete");
    scanf("%d",&pos);///pos=4
    index=pos-1;///3
    ///for (i=3;i,5;i++)
    for (i=index;i<n-1;i++)
    {
        a[i]=a[i+1];

    }
    printf("contents of the array\n");
    for (i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
        printf("\t");
    }
    return 0;
}
