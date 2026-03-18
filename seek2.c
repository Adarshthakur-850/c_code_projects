
#include <stdio.h>
#include<stdlib.h>
int main()
{
int number, *ptr, i;
printf("How many ints would you like store?");
scanf("%d", &number);///5
ptr = (int *)malloc(number*sizeof(int)); /*allocate memory*/
///5*4 = 20 bytes
if(ptr!=NULL)
{
for(i=0 ; i<number ; i++) {
*(ptr+i) = i;
}
for(i=0 ; i<number ; i++){
printf("%d\n", *(ptr + i));
}}
else
printf("Required memory is not allocated");

return 0;
}
