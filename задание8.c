#include <stdio.h>
#include <math.h>

int main() {
    int number, divider;
    
    printf("Enter number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The number cannot be zero.\n");
    }
    // Узнаём максимальную степень двойки на которую делится число
    divider = number & (-number);
    printf("The divider of your number is: %d\n", divider);
    
    if (divider != 0) { //аргумент логарифма не может быть равен 0
        printf("The degree of the divisor is: %.0f\n", log2(divider));
    }

    return 0;
}
