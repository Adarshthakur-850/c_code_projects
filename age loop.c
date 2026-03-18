#include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b ,&c,&d,&e);
    int mark=(a+b+c+d+e)/5;


    if(mark>=90)
        printf("A");
    else if(mark>=80)
        printf("B");
    else if(mark>=70)
        printf("C");
    else
        printf("F");
}
