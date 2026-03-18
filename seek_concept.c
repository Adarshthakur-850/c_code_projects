#include<stdio.h>
int main()
{

    FILE* fp=fopen("example.txt","w+");
    char ch;
    fput("abhay 25 india",fp);
    rewind(fp);
    printf("name; ");
    while((ch=fgetc(fp))!=' ')
        putchar(ch);
    putchar("\n");
    printf("\n%ld\n",ftell(fp));
    printf("age; ");
    fseek(fp,6,SEEK_SET);
    while((ch=fgetc(fp))!=' ')
        putchar(ch);
    putchar("\n");
    printf("\n%ld\n",ftell(fp));
    printf("country;") ;
    fseek(fp,9,SEEK_SET);
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);
    putchar("\n");
    fclose(fp);
}
