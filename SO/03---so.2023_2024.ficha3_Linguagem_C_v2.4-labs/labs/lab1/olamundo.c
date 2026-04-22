#include <stdio.h>
//gcc {nome do ficheiro.c}
//-o dar um novo nome ao ficheiro c
//-E ver output do pre-processador
//-S ver codigo Assembly gerado
//-c gerar codigo maquina para cada ficheiro .c gerando um ficheiro .o

// gerar ficheiro objeto olamundo.o
// linkar ficheiro objeto .o gerando o exevutável olamundo
// gcc -o olamundo olamundo.o
// gcc -c -Wall -Wextra olamundo.c commpilar e mostrar erros ou warnings
// -g debug

int main(void) {
    printf("Olá mundo...\n");
    return 0;
}
