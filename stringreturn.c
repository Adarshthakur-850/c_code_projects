#include<stdio.h>
void lower_string(char[]);
int main()
{
    char string[100];
    printf("enter a string to uppper into lower case\n");
    gets(string);
    lower_string(string);
    printf("enter string in lower case is \"%s\'\n",string);
    return 0;
}
void lower_string(char s[])
{
    int c =0;
    while(s[c]!='\0'){
        if (s[c]>='A'&&s[c]<='Z')
        {
            s[c] =s[c] +32;
        }

        c++;
    }
}
