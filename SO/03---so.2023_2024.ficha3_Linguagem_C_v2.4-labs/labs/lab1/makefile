#makegile para programa vowels_v2

vowels_v2: main.o string_utils.o
	gcc -o vowels_v2 main.o string_utils.o

main.o: main.c
	gcc -c -Wall -Wextra main.c

string_utils.o: string_utils.c
	gcc -c -Wall -Wextra string_utils.c
