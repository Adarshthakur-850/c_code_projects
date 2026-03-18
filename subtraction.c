#include <stdio.h>

int main() {
    int num1, num2, diff;
    printf("Enter two two-digit integers: ");
    scanf("%d %d", &num1, &num2);

    diff = num1 - num2;

    printf("Difference = %d\n", diff);

    return 0;
}
