#include<stdio.h>
int main()
{
    char name[10], ch;
    int i = 0;
    printf("Enter name (press enter to stop) : ");
    while(ch != '\n')
    {
        ch = getchar();
        name[i]= ch;
        i++;
    }
    name[i]='\0'; ///inserting null characher at end

    printf("Name: %s", name);
    return 0;
}
