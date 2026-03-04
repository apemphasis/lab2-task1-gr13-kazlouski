/* Yauheni Kazlouski */

/*
* Функция print_codes выводит коды символов строки str
* параметр: str строка, которую нужно обработать
* возвращаемое значение: void

* strlen() - функция, которая возвращает длину строки
*/

#include <stdio.h>
#include <string.h>

#include "printcode.h"

void print_codes(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        printf("%c %d ", str[i], str[i]);
    }
}