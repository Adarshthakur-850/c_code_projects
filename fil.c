#include <stdio.h>

int main()
{
    char ch;
    char filename[50];
    FILE *ptr;
    printf("Enter the name of file (with extension) : ");
    scanf("%s",&filename);
    printf("File naming %s is created\n",filename);
    ptr = fopen(filename, "r");
    if (ptr == NULL)
    {
        printf("File must be opened or file doesnot exist\n");
    }
    else
    {
        fputc('A', ptr);
        printf("record saved\n");
    }
    ptr=fopen("text1.txt","w+");
    fclose(ptr);


    return 0;
}
