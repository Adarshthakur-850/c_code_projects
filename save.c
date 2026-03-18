#include <stdio.h>

int main() {
   FILE *fp;
   char ch;

   // Open the file for reading
   fp = fopen("example.txt", "r");
   if(fp == NULL) {
      printf("Error opening file");
      return 1;
   }

   // Read the file character by character
   while((ch = fgetc(fp)) != EOF) {
      printf("%c", ch);
   }

   // Close the file
   fclose(fp);

   return 0;
}
