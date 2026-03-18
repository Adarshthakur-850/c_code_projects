#include <stdio.h>
#include <string.h>

int main()
{

	printf("Enter the String: ");

	char ss[] = "geeks";

	printf("%s\n", ss);

	// print size after removing null char.
	printf("Length of Str is %ld", sizeof(ss) - 1);

	return 0;
}
