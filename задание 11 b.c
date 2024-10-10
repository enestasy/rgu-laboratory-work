#include <stdio.h>
#include <string.h>


int main() {
    int i, len, num;
    printf("Enter length of the number: ");
    scanf("%d", &len);

    char strokeNum[len + 1];

    printf("\nEnter number: ");
    scanf("%d", &num);
    printf("\nEnter the number of extreme bits: ");
    scanf("%d", &i);

    char strokeSum[len - 2 * i + 1];

    sprintf(strokeNum, "%d", num); //Перевод числа в строку

    if (i > len) {
        printf("The number of extreme characters is greater than the length of the string!"); // Если количество символов i больше длины строки
        return 1;
    }

    strncpy(strokeSum, strokeNum + i, len - 2 * i); //Запись необходимой частки строки в переменную strokeSum
    
    strokeSum[2 * i] = '\0'; //Завершающий ноль в последнем индексе

    printf("The result is: %s", strokeSum);

    return 0;
}