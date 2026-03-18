#include<stdio.h>
main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    printf("Zrray subscript : %d", arr[4]);
    printf("\npointer subscrew to array %d ",*(ptr + 4));
    printf("\npointer subscrew to array %d ",*(ptr + 4));
    printf("\nupdate pointer subscrew to array %d ",*(ptr + 4));


}
