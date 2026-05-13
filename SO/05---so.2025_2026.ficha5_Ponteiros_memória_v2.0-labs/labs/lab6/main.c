#include <stdlib.h>
#include <string.h>

void f1(void);
void f2(void);
void f3(void);
void f4(void);
void f5(void);

int main(void) {
    f5();
    f4();
    f3();
    f2();
    f1();

    return 0;
}

void f1(void) {
// tentativa de escrita de 4 bytes em endereço de memoria aleatorio
// 2 possiblidades
// endereço esta em pagina de memoria nao alocada -> segmentation fault
// esta em pag alocada -> corrupcao da memoria
// solucao : usar malloc

    int *ptr;
    ptr[0] = 1;
}

void f2(void) {
// tentativa de libertar memoria usando endereço de memoria aleatorio, erro no free
// solucao : usar malloc

    int *ptr;
    free(ptr);
}

void f3(void) {
// free duas vezes causa erro, o primeiro free tira o endereço da tabela o segundo não sabe qual deve tirar 
// solucao : não fazer duas vezes

    int *ptr = malloc(sizeof(int));
    free(ptr);
    free(ptr);
}

void f4(void) {
// não alocamos memoria suficiente \0   buffer overrun 
// solucao : strlen(ola) + 1

    char ola[] = "ola mundo";
    char *str = malloc(strlen(ola));
    strcpy(str, ola);
}

void f5(void) {
// sizeof retorna o tamanho do tipo do ponteiro 8 + 1
// solucao : usar strlen 


    char *ola = "ola mundo";
    char *str = malloc(sizeof(ola) + 1);
    strcpy(str, ola);
}
