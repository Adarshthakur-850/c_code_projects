#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char name[100];
char description;
strcpy(name, "Hello");///name = "Hello"
/// allocate memory dynamically /
description = (char *)malloc(10*sizeof(char));
if( description == NULL ) {
fprintf(stderr, "Error - unable to allocate required memory\n");
}
else {
strcpy( description, "Hello World.");
} /// suppose you want to store bigger description /
description=realloc( description, 100*sizeof(char) );
if( description == NULL ) {
fprintf(stderr, "Error - unable to allocate required memory\n");
}
else {
strcat( description, "Let the world Smile with you...");
}
printf("Name = %s\n", name );
printf("Description: %s\n", description );
/// release memory using free() function */
free(description);
printf("\nDescription: %s\n", description );
description = 0;
printf("\nDescription: %s\n", description );
}
