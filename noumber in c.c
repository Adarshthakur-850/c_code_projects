#include <stdio.h>
int main()
{
    int num , rev = 0, i,rem , driginalnum;
    printf("Enter Number : ");
    scanf("%d", &num);
    driginalnum = num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("Reverse num = %d", rev);

    if (driginalnum==rev)
        printf("\nPalndrome");



}
