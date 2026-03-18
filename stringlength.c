#include<stdio.h>
#include<string.h>
int main()
 {
     char s1[10],s2[20];
     printf("enter string : ");
     gets(s2);
     strcpy(s1,s2);
     printf("\ncopied string=%s",s1);
     printf("\noriginal string =%s",s2);
 }
