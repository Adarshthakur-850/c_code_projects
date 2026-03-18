#include <stdio.h>

int main()
{
    int a = 10;   // add: 1000
    char b = 'a'; // add: 2000
    void *ptr;
    ptr = &a;
    printf("%d\n", *(int *)ptr); //for value after going to the address
    void *ptr2;
    ptr2 = &b;
    printf("%pd", *(char *)ptr2);      //for address
   
}
