#include <stdio.h>
#include <conio.h>

int main()
{

int arr[100], n;

printf("Enter number of elements: ");
scanf("%d", &n);

for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

int pos;
printf("Enter a position to delete: ");
scanf("%d", &pos);

for (int i = pos - 1; i < n - 1; i++)
{
arr[i] = arr[i + 1];
}

for (int i = 0; i < n - 1; i++)
{
printf("%d ", arr[i]);
}
return 0;
}
