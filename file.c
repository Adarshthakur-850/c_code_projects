#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If num is divisible by 2, it's even
    if(num % 2 == 0) {
        printf("%d is even.\n", num);
    }
    // Otherwise, it's odd
    else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
