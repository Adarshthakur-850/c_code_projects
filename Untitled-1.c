#include<stdio.h>
int main ()
{

int principal,time_period;
    float interest,Simple_interest,Amount;

    printf("Enter your 'PRINCIPL' Amount: \n");
    scanf("%d", &principal);

    printf("Enter Rate Of Interest: \n");
    scanf("%f", &interest);

    printf("Enter Time Period: \n");
    scanf("%d", &time_period);

    Simple_interest=(principal*interest*time_period)/100;
    Amount=(principal*interest*time_period)/100+principal;
    printf("THE SI IS: %f\n", Simple_interest);
    printf("THE AMOUNT IS: %f\n", Amount);



return 0;
}