#include<stdio.h>
int main()
{
    int a=10,b=20;
    int arr[]={10,20,30,40,50,60,70,80,90};
    int*p1,*P2;
    p1=arr;
    printf("\n%d",*p1);
    printf("\naddress is ; %d",p1);
    ++p1;
    printf("\n%d",*p1);
    printf("\naddress is ; %d",p1);
    p1--;
    printf("\n%d",*p1);
    printf("\naddress is ; %d",p1);


    p1=p1+2;
    printf("\n%d",*p1);
    printf("\naddress is ; %d",p1);
    p1=p1-2;
    printf("\n%d",*p1);
    printf("\naddress is ; %d",p1);

    p2=&arr[4];
    printf("n%d,*p2");
    printf("\nsubtract %d",p2-p1);
    while(p1<=p2)
   {
       printf("\ncompare : %d",*p1);
       p1++;
   }
   printf("\nvalue%d",p1+p2);

    return 0;
}
