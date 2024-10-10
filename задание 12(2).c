#include <stdio.h>
#include <stdlib.h>

// Функция шифрования/дешифрования файла
void xoredData(const char *filename, char key) {
    FILE *file = fopen(filename, "r+b"); // Открытие файла для чтения и записи в бинарном режиме
    if (file == NULL) {
        printf("Ошибка! Файл не открылся");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        long pos = ftell(file) - 1;       // Получаем нынешнюю позицию в файле
        char encryptedCh = ch ^ key;      // Применяем операцию XOR к символу
        fseek(file, pos, SEEK_SET);       // Возвращаемся на позицию символа
        fputc(encryptedCh, file);         // Записываем изменённый символ обратно в файл
    }

    fclose(file);
}

int main() {
    char key;

    printf("Введите ключ для шифрования (один символ): ");
    scanf(" %c", &key); // Пробел перед %c нужен для правильной обработки символа

    xoredData("1.txt", key);

    printf("Файл успешно зашифрован/расшифрован.\n");

    return 0;
}
