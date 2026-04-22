#include <stdio.h>

//char *argv[]
// argv é um vetor de ponteiros para charl
int main(int argc, char *argv[]) {
    printf("\n\n");
    printf("Numero de argumentos: %d\n", argc);
    printf("\n");
    printf("Listagem dos argumentos\n");

    for (int i = 0; i < argc; i++) {
        printf("\tArgumento[%d]= %s\n", i, argv[i]);
    }
    printf("\n");

    return 0;
}