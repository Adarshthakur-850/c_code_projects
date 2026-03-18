#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("enter positive integer; ");
    scanf("%d",&n); ///n=5
    printf("factiol of %d=%1d",n,fact(n));
    return 0;

}
long int fact(int n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1 ;
}
