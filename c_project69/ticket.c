#include <stdio.h>
#include <stdbool.h>

int main() {
   int n;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter %d elements: ", n);
   for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   int max = arr[0], count = 0;
   for(int i = 1; i < n; i++) {
      if(arr[i] >= max) {
         max = arr[i];
         count = 0;
      } else {
         count++;
      }
   }

   if(count == 0) {
      printf("true\n");
   } else {
      printf("false\n");
   }

   return 0;
}
