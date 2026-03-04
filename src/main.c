/* Yauheni Kazlouski */

/*
* Функция main выводит коды символов строки, переданной в качестве аргумента командной строки
* Если аргумент не передан, то выводится сообщение об правильном использовании программы
*/

#include <stdio.h>
#include "printcode.h"

int main (int argc, char *argv[])
{
	if (argc != 2) {
		printf("Использование: %s строка\n", argv[0]);
		return 1;
	}

	print_codes(argv[1]);
	printf("\n");
	return 0;
}
