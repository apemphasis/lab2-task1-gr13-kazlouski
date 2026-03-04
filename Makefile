# Makefile для task1

build: obj/main.o obj/printcode.o
	gcc -o bin/labrabota2-1 obj/main.o obj/printcode.o

obj/main.o: src/main.c include/printcode.h
	gcc -c src/main.c -o obj/main.o -Iinclude

obj/printcode.o: src/printcode.c include/printcode.h
	gcc -c src/printcode.c -o obj/printcode.o -Iinclude

clean:
	rm -f obj/*.o bin/labrabota2-1