#include<stdio.h>
const int max=3;
int main()
{
    int var[]=[10,100,200];
    int i,*ptr;
    ptr=var;
    for (i=0;i<max;i++){
        printf("addresss of var[%d]=%d/n",i,ptr);
        print("address of var(%d)=%d/n",i,*ptr);
        ptr++;

    }
    return 0;
}
