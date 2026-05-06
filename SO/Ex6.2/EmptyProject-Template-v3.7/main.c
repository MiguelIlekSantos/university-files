/**
 * @file main.c
 * @brief Description
 * @date 2018-1-1
 * @author name of author
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "debug.h"
#include "memory.h"

/*
Extrair zip EmptyProject
Alterar no makefile PROGRAM=conta_letra


Escreva o programa conta_letra que deve receber dois parâmetros: 
uma string e uma letra, respetivamente. O programa deverá mostrar na
saída padrão o número de vezes que a letra ocorre na string. Caso o
programa seja lançado sem os dois parâmetros (por exemplo, apenas é
indicado um parâmetro), o programa deve apresentar uma mensagem de 
erro no canal de erro padrão. O código fonte do programa deve estar 
organizado nos ficheiros main.c e conta_letra.{c,h}. A gestão da 
compilação deve ser feita através da adaptação do ficheiro de Makefile 
empregue na unidade curricular.

*/

int conta_letra(char *palavra, char letra){
    int counter = 0;
    int plvStrlen = strlen(palavra);
    for(int i = 0; i < plvStrlen;i++){
        if(palavra[i] == letra){
            counter++;
        }
    }
    return counter;
}

int main(int argc, char *argv[]) {
    
    if(argc != 3 || (argv[2][0] == '\0')){
        fprintf(stderr, "usage %s <palavra> <letra> \n", argv[0]);
        return 1; 
    }

    char *palavra = argv[1];
    char letra = argv[2][0];
    int res = conta_letra(palavra, letra);

    printf("%c ocorre %d vezes em '%s' \n", letra, res, palavra);


    return 0;
}
