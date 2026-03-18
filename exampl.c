#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        case 2:
            Update();
            break;
        case 3:
            Delete();
            break;
        case 4:
            Search();
            break;
        case 5:
            Display();
            break;


        }
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
