#include<stdio.h>
void process(int[],int);
int main()
{
int a[5] = {15, 3, 10, 4, 6};
process(a,5);
printf("%d",a[0]+a[1]);
return 0;
}
void process(int x[],int z)
{
    int i;
    for(i=0;i<z;i++)
    {
        if(x[i]%5==0)
        {
            x[i]=-1;
        }
    }
}
