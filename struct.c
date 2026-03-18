#include<stdio.h>
main()
{
    char  name [3];
    float price[3];
    int pages[3],i;

printf("\n Enter name,price and no of pages of 3 book \n");
for (i=0;i<=2;i++)
{

    scanf("%c%f%d",&name[i],&price[i],&pages[i]);

}
printf("\n and this is what you entered");
for (i=0;i<=2;i++)
{
     printf("%c%f%d",&name[i],&price[i],&pages[i]);
}
}
