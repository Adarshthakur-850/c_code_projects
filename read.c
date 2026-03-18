#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("abc.txt","a");
    fseek(fp,1,SEEK_CUR);
    printf("\n%ld",ftell(fp));
    fseek(fp,1,SEEK_END);
    printf("\n%ld",ftell(fp));
    fseek(fp,10,SEEK_SET);
    printf("\n%ld",ftell(fp));
    fputc("L",fp);
    printf("\n%ld",ftell(fp));
    return 0;
}
