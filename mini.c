#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct Electronic_Bus
{
    char time[40];
    char name[30];
    char noPlate[10];
    char dateofreg[15];
    char vehModel[20];
} E_Bus;
E_Bus size[15];

void Add()

{

    time_t ltime;
    time(&ltime);
    FILE *ptr;

    ptr = fopen("new.txt", "a");

    printf("Enter the route from : ");
    scanf(" %[^\n]s", size[0].name);

    printf("Enter the route to : ");
    scanf(" %[^\n]s", size[0].name);


    printf("Enter the date : ");
    scanf(" %[^\n]s", size[0].dateofreg);

    printf("Enter the time : ");
    scanf(" %[^\n]s", size[0].noPlate);

    printf("Enter the bus type: ");
    scanf(" %[^\n]s", size[0].vehModel);
    strcpy(size[0].time, ctime(&ltime));
    fwrite(&size[0], sizeof(E_Bus), 1, ptr);
    fclose(ptr);
    printf("===================================================================================================================\n");

    printf("%-45s%s", "", "ADDED SUCCESSFULLY\n");
    printf("===================================================================================================================\n");
}


int main()
{

    int act;
    int act1;
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
             scanf("%d", &act1);
             getc(stdin);
             if (act == 6)
        {
            printf("===================================================================================================================\n");

            printf("%-45s%s", "", "THANK YOU FOR USING\n");
            printf("===================================================================================================================\n");

            break;
        }
        switch (act1)
        {
        case 1:
            Add();
            break;


        }
             printf("===================================================================================================================\n");
        }
        if (act == 2)
        {
             printf("What action you want to perform?\n");
             printf("1. Booking  seat\n");
             printf("2. Cancel seat\n");
             printf("3. display route\n");
             printf("4. Back\n");
             printf("--->Enter Action: ");

             scanf("%d", &act);
             getc(stdin);
             printf("===================================================================================================================\n");

        }


        if (act == 3)
        {
            printf("===================================================================================================================\n");

            printf("%-45s%s", "", "THANK YOU FOR USING\n");
            printf("===================================================================================================================\n");

            break;
        }

         } while (act != 3);

    return 0;
}
        }
             printf("===================================================================================================================\n");
        }
        if (act == 2)
        {
             printf("What action you want to perform?\n");
             printf("1. Booking  seat\n");
             printf("2. Cancel seat\n");
             printf("3. display route\n");
             printf("4. Back\n");
             printf("--->Enter Action: ");

             scanf("%d", &act);
             getc(stdin);
             printf("===================================================================================================================\n");

        }


        if (act == 3)
        {
            printf("===================================================================================================================\n");

            printf("%-45s%s", "", "THANK YOU FOR USING\n");
            printf("===================================================================================================================\n");

            break;
        }

         } while (act != 3);

    return 0;
}
