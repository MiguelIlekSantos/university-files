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
    /* Disable warnings */
    (void)argc;
    (void)argv;

    /* Main code */
    DEBUG("Main is empty -- add code here");
    printf("%d", conta_letra("Hello", 'o'));

    return 0;
}
