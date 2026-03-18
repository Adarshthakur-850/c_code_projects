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

void Add()

{

    time_t ltime;
    time(&ltime);
    FILE *ptr;

    ptr = fopen("new.txt", "a");

    printf("Enter the route from : ");
    scanf(" %[^\n]s", size[0].to);

    printf("Enter the route to : ");
    scanf(" %[^\n]s", size[0].from);


    printf("Enter the date : ");
    scanf(" %[^\n]s", size[0].date);

    printf("Enter the time : ");
    scanf(" %[^\n]s", size[0].time);

    printf("Enter the bus type: ");
    scanf(" %[^\n]s", size[0].busname);
    strcpy(size[0].time, ctime(&ltime));
    fwrite(&size[0], sizeof(E_Bus), 1, ptr);
    fclose(ptr);
    printf("===================================================================================================================\n");

    printf("%-45s%s", "", "ADDED SUCCESSFULLY\n");
    printf("===================================================================================================================\n");
}

void Update()
{
    time_t ltime;
    time(&ltime);

    FILE *ptr;
    ptr = fopen("new.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("temp.txt", "w");

    char srch[10];
    printf("Enter number plate to search: ");
    scanf("%s", &srch);
    int flag = 0;

    while (fread(&size, sizeof(E_Bus), 1, ptr))
    {

        if (strcmp(srch, size->time) == 0)
        {

            flag = 1;
            printf("Enter the route to : ");
            scanf(" %[^\n]s", size[0].to);

            printf("Enter the route to : ");
            scanf(" %[^\n]s", size[0].from);

            printf("Enter the date : ");
            scanf(" %[^\n]s", size[0].date);

            printf("Enter fthe time : ");
            scanf(" %[^\n]s", size[0].time);

            printf("Enter the bus type: ");
            scanf(" %[^\n]s", size[0].busname);
            strcpy(size[0].time, ctime(&ltime));
        }
        fwrite(&size, sizeof(E_Bus), 1, ptr2);
    }
    fclose(ptr);
    fclose(ptr2);
    if (flag == 0)
    {
        printf("===================================================================================================================\n");

        printf("%-50s%s", "", "Not Found\n");
        printf("===================================================================================================================\n");
    }
    else
    {
        ptr2 = fopen("temp.txt", "r");
        ptr = fopen("new.txt", "w");

        while (fread(&size, sizeof(E_Bus), 1, ptr2))
        {

            fwrite(&size, sizeof(E_Bus), 1, ptr);
        }
        fclose(ptr);
        fclose(ptr2);
        printf("===================================================================================================================\n");

        printf("%-45s%s", "", "UPDATED SUCCESSFULLY\n");
        printf("===================================================================================================================\n");
    }
}

void Delete()
{
    FILE *ptr;
    ptr = fopen("new.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("temp.txt", "w");

    char srch[10];
    printf("Enter number plate to delete: ");
    scanf("%s", &srch);
    int flag = 0;

    while (fread(&size, sizeof(E_Bus), 1, ptr))
    {

        if (strcmp(srch, size->time) == 0)
        {
            flag = 1;
        }
        else
        {
            fwrite(&size, sizeof(E_Bus), 1, ptr2);
        }
    }
    fclose(ptr);
    fclose(ptr2);
    if (flag == 1)
    {
        ptr2 = fopen("temp.txt", "r");
        ptr = fopen("new.txt", "w");

        while (fread(&size, sizeof(E_Bus), 1, ptr2))
        {
            fwrite(&size, sizeof(E_Bus), 1, ptr2);
        }
        fclose(ptr);
        fclose(ptr2);
        printf("===================================================================================================================\n");

        printf("%-45s%s", "", "DELETED SUCCESSFULLY\n");
        printf("===================================================================================================================\n");
    }
    else
    {
        printf("===================================================================================================================\n");

        printf("%-50s%s", "", "Not Found\n");
        printf("===================================================================================================================\n");
    }
}


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
        case 6:
            clnAll();
            break;
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
