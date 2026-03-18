#include<stdio.h>
int main(){

    char a = 'h';
    //char str[] ="Hello World";
    char str[20];
    //gets(str); /// hello world
    scanf("%s", &str); /// Hello {only}/// it is sring " " is null char
    puts (str);


    printf("size of str is : %d", sizeof(str));
    printf("\nsize of a is : %d", sizeof(a));


}
