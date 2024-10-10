#include <stdio.h>

int xorForNumber(int num) { // Побитовая операция xor
    int theCurrentBit, i;
    int result = 0;
    for (i = 0; i < sizeof(int) * 8; i++) {
        theCurrentBit = num >> i & 1;
        result = result ^ theCurrentBit;
    }
    return result;
}



//Вычисление степеней двойки
int degreesOfTwo(unsigned int n) {
    int result = 1;

    if (n == 0) { 
        return 1;
    } else {
        for (int i = 1; i <= n; i++) {
            result = result * 2;
        }
        return result;
    }
}

//Преобразование из строки с двоичным числом в десятичное число
int fromStroketoNum(const char * binaryStroke) {  // const char * указывает на указатель на массив символов
    int decimalNum = 0;
    int length = strlen(binaryStroke);
    
    for (int i = 0; i < length; i++) {
        if (binaryStroke[length - 1 - i] == '1') { //Если символ строки равен "1", то добавляется степень двойки, соответствующая индексу
            decimalNum += degreesOfTwo(i); 
        }
    }

    return decimalNum;
}

int main() {
    int number;
    char binaryStroke[33];

    printf("Enter binary number: ");
    scanf("%32s", &binaryStroke); //Считываение строки с двоичным числом
    number = fromStroketoNum(binaryStroke);
    printf("Result of the xoring is: %d\n", xorForNumber(number));
    return 0;
}