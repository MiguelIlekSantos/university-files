#!/usr/bin/env bash
#permissões (apenas uma vez)
#chmod u+x compile.sh 

#Compila todos os ficheiros .c na CWD para .o
#linka todos os ficheiros para o executavel
execname="opposites "
copts="-Wall -Wextra -g"
echo "Script de compilação de programa C"

#gcc -c -Wall -Wextra -g main.c
for file in *.c 
do 
    echo "Compiled $file"
    gcc -c $copts "$file"
done

#Linkar os ficheiros .o criando o executavel
# a biblioteca das funções matemáticas está separada da stdc e tem o nome libm
#retira-se o "lib" e coloca-se o resto a seguir a "-l"
gcc -o "$execname" *.o -lm
echo linked *.o into $execname
#gcc -o lab3 *.0
