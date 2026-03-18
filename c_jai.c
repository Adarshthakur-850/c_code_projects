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


int main()
{

    int act;

    printf("===================================================================================================================\n");

    printf("%-35s%s", "", " Electronic Bus Ticket Generator\n");
    printf("===================================================================================================================\n");
    do
    {
        printf("What action you willl select for login \n");
        printf("1. Admin phase\n");
        printf("2. user phase\n");

        printf("--->Enter Action: ");
        scanf("%d", &act);
        getc(stdin);
        printf("===================================================================================================================\n");

        if (act == 1)
        {
             printf("What action you want to perform?\n");
             printf("1. Add a route\n");
             printf("2. Update a route\n");
             printf("3. Delete a route\n");
             printf("4. display a record\n");
             printf("5. Back\n");
             printf("5. Back\n");
             printf("--->Enter Action: ");
             scanf("%d", &act);
             getc(stdin);
             if (act == 6)
        {
            printf("===================================================================================================================\n");

            printf("%-45s%s", "", "THANK YOU FOR USING\n");
            printf("===================================================================================================================\n");

            break;
        }
        switch (act)
        {
        case 1:
            Add();
            break;


        }
             printf("===================================================================================================================\n");
        }


        } while (act != 3);

    return 0;
}

