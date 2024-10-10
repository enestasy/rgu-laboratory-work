#include <stdio.h>

int main() {
    int a, k, i;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter bit's number: ");
    scanf("%d", &k);

    if (k < sizeof(int) * 8) {
    for (i = 0; i < k; i ++) {
        a = a / 2;
    }

    printf("Your bit is:%d\n", a % 2);
    }

    else {
        printf("Error! Index out of range");
    }
    printf("\n");
    return 0;
}