#include <stdio.h>
#include <time.h>
#include <string.h>
typedef struct Toll_Data
{
    char time[40];
    char name[30];
    char noPlate[10];
    char dateofreg[15];
    char vehModel[20];
} T_Data;
T_Data size[15];

void Add()

{

    time_t ltime;
    time(&ltime);
    FILE *ptr;

    ptr = fopen("new.txt", "a");

    printf("Enter name of owner: ");
    scanf(" %[^\n]s", size[0].name);

    printf("Enter date of registration of vehicle: ");
    scanf(" %[^\n]s", size[0].dateofreg);

    printf("Enter number plate of vehicle: ");
    scanf(" %[^\n]s", size[0].noPlate);

    printf("Enter vehicle model: ");
    scanf(" %[^\n]s", size[0].vehModel);
    strcpy(size[0].time, ctime(&ltime));
    fwrite(&size[0], sizeof(T_Data), 1, ptr);
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

    while (fread(&size, sizeof(T_Data), 1, ptr))
    {

        if (strcmp(srch, size->noPlate) == 0)
        {

            flag = 1;
            printf("Enter new name of owner: ");
            scanf(" %[^\n]s", size[0].name);

            printf("Enter updated date of registration of vehicle: ");
            scanf(" %[^\n]s", size[0].dateofreg);

            printf("Enter updated number plate of vehicle: ");
            scanf(" %[^\n]s", size[0].noPlate);

            printf("Enter updated vehicle model: ");
            scanf(" %[^\n]s", size[0].vehModel);
            strcpy(size[0].time, ctime(&ltime));
        }
        fwrite(&size, sizeof(T_Data), 1, ptr2);
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

        while (fread(&size, sizeof(T_Data), 1, ptr2))
        {

            fwrite(&size, sizeof(T_Data), 1, ptr);
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

    while (fread(&size, sizeof(T_Data), 1, ptr))
    {

        if (strcmp(srch, size->noPlate) == 0)
        {
            flag = 1;
        }
        else
        {
            fwrite(&size, sizeof(T_Data), 1, ptr2);
        }
    }
    fclose(ptr);
    fclose(ptr2);
    if (flag == 1)
    {
        ptr2 = fopen("temp.txt", "r");
        ptr = fopen("new.txt", "w");

        while (fread(&size, sizeof(T_Data), 1, ptr2))
        {

            fwrite(&size, sizeof(T_Data), 1, ptr);
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
void Search()
{
    FILE *ptr;
    ptr = fopen("new.txt", "r");

    char srch[10];
    printf("Enter number plate to search: ");
    scanf("%s", &srch);
    int flag = 0;

    while (fread(&size, sizeof(T_Data), 1, ptr))
    {

        if (strcmp(srch, size->noPlate) == 0)
        {

            flag = 1;
            printf("%-50s%s", "", "Match Found!\n");
            printf("===================================================================================================================\n");
            printf("%-20s%-20s%-25s%-25s%s", "Name", "Number Plate", "Date of Registration", "Vehicle Model", "Time\n");
            printf("===================================================================================================================\n");
            printf("%-20s%-20s%-25s%-25s%s", size->name, size->noPlate, size->dateofreg, size->vehModel, size->time);
            printf("===================================================================================================================\n");
            return;
        }
    }
    if (flag == 0)
    {
        printf("===================================================================================================================\n");

        printf("%-50s%s", "", "Not Found\n");
        printf("===================================================================================================================\n");
    }

    fclose(ptr);
}
void Display()
{
    FILE *ptr;
    ptr = fopen("new.txt", "r");
    printf("===================================================================================================================\n");
    printf("%-20s%-20s%-25s%-25s%s", "Name", "Number Plate", "Date of Registration", "Vehicle Model", "Time\n");
    printf("===================================================================================================================\n");

    while (fread(&size, sizeof(T_Data), 1, ptr))
    {

        printf("%-20s%-20s%-25s%-25s%s", size->name, size->noPlate, size->dateofreg, size->vehModel, size->time);
    }

    printf("===================================================================================================================\n");

    fclose(ptr);
}
void clnAll()
{
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("new.txt", "w+");
    ptr2 = fopen("temp.txt", "w+");

    fprintf(ptr, "%s", "");
    fprintf(ptr2, "%s", "");

    printf("===================================================================================================================\n");

    printf("%-50s%s", "", "CLEANED SUCCESSFULLY\n");
    printf("===================================================================================================================\n");

    fclose(ptr);
    fclose(ptr2);
}
int main()
{

    int act;
    printf("===================================================================================================================\n");

    printf("%-35s%s", "", "Welcome to Toll Management System\n");
    printf("===================================================================================================================\n");
    do
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

    } while (act != 7);

    return 0;
}
