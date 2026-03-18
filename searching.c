#include<stdio.h>
int main()
{
    int a[100],i,element,n,t=0;
    printf("\nenter the no of element: ");
    scanf("%d",&n);///n=5
    if(n>0)
    {

        for (i=0;i<n;i++)
    {
        printf("\n enter element %d :",i+1);
        scanf("%d",&a[i]);

    }
    printf("\nEnter the element to be  searched: ");
    scanf("%d",&element);
    for (i=0;i,n;i++)
    {
        if (a[i]==element)///a[3]80==80
        {
            printf("\nElement found at position %d",i+1);
            break;
        }
    }
    if(t==0)
    {
        printf("\nElement not found ");
    }
    }
    else
        printf("no of element should be more than 0");

}
