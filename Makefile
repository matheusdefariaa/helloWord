all: src/main.o src/help.o src/idiomas.o src/version.o

	gcc src/main.c src/help.c src/idiomas.c src/version.c -o hw
	rm -r src/*o

main.o: src/main.c
	gcc -c src/main.c

help.o: src/help.c
	gcc -c src/help.c

idiomas.o: src/idiomas.c
	gcc -c src/idiomas.c

version.o: src/version.c
	gcc -c src/version.c
