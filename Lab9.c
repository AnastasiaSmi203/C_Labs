#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Input: ");
    gets(str);

    int sum = 0; // Переменная для хранения суммы чисел
    char* word = strtok(str, " "); // Разделение строки на слова по пробелам с использованием функции strtok()

    if (str[0] == '\n') return 0; // Проверка на пустую строку (если первый символ - символ новой строки, то возвращаем 0 и завершаем программу)

    while (word != NULL) { // Цикл обработки каждого слова
        char* endptr;
        long num = strtol(word, &endptr, 10); // Преобразование текущего слова в число с использованием функции strtol()

        if (endptr == word || *endptr != '\0' || (num == 0 && !isdigit(word[0]))) {
            // Проверка на успешное преобразование и наличие пробелов перед и после числа, а также исключение случаев, когда слово содержит другие символы помимо чисел
            // (в данном случае ничего не делаем, пропускаем это слово)
        } else if (num > 0) {
            sum += num; // Добавление числа к сумме, если оно положительное
        }
        word = strtok(NULL, " "); // Получение следующего слова
    }

    if (sum > 0) {
        printf("Output: %d\n", sum); // Вывод суммы положительных чисел
    } else {
        printf("String is empty or doesn't have numbers\n"); // Вывод сообщения, если строка пустая или не содержит чисел
    }

    return 0;
}
