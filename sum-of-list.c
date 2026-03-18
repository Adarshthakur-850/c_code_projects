#include <stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    int tempnum=num;

    while(1){
        int sum=0;
        while(tempnum!=0){
            int rem=tempnum%10;
            sum+=rem;
            tempnum/=10;

        }
        if (sum>10){
            tempnum=sum;

        }
        else{
            printf("number is less than 10:%d",sum);
            break;
        }
    }
    return 0;
}
