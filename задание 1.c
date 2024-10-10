#include <stdio.h>

int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("The last bit of your number: %d\n", a % 2);
    return 0;
}