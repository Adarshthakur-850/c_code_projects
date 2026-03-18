#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct Electronic_Bus
{
    char username[50];
    char age[30];
    char sex[20];
    char mobile[20];
    char to[30];
    char from[30];
    char time[30];
    char date[30];
    char busname[30];


} E_Bus;
E_Bus size[15];

int main() {
    int phase;
    int act;

    printf("===================================================================================================================\n");

    printf("%-35s%s", "", " Electronic Bus Ticket Generator\n");
    printf("===================================================================================================================\n");


    printf("What action you willl select for login \n");
    printf("1. Admin phase\n");
    printf("2. user phase\n");

        printf("--->Enter Action: ");
    scanf("%d", &phase);


    if(phase % 2 == 0) {
        printf("%d user phase.\n", phase);

    printf("===================================================================================================================\n");

    printf("%-35s%s", "", "Welcome to Toll Management System\n");
    printf("===================================================================================================================\n");

    {
        printf("What action you want to perform?\n");
        printf("1. Add a record\n");
        printf("2. update a record\n");
        printf("3. delete a record\n");
        printf("4. search record\n");
        printf("5. Fetch all records\n");
        printf("6. Clean All records\n");
        printf("7. Exit\n");
        printf("--->Enter Action: ");
        scanf("%d", &act);
        getc(stdin);
        if (act == 7)
        {
            printf("===================================================================================================================\n");

            printf("%-45s%s", "", "THANK YOU FOR USING\n");
            printf("===================================================================================================================\n");




    }



    else {
        printf("%d admin phase.\n", phase);
    }

    return 0;
}
