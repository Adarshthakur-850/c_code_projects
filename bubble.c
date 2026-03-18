#include <stdio.h>
#include <conio.h>

int main()
{
int n;
printf("Enter size of array:");
scanf("%d", &n);
int arr[n];

for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

for (int i = 0; i < n; i++)
{
int check = 1;

for (int j = 0; j < n - i; j++)
{
if (arr[j] > arr[j + 1])
{
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
check = 0;
}
}
if (check == 1)
{
break;
}
}
printf("Sorted array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}

return 0;
}
