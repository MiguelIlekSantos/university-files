#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]){
    char  *palavra = argv[1];
    if (argc !=2 ){
        printf("%s wrong number of arguments\n%s<word>\n", argv[0], argv[0]);
        return 1;
    }
    char *array_palavras[] = {"low", "high", "short", "tall", "big", "small"};

    for (int i=0; i<6; i++){
        if(strcmp(palavra, array_palavras[i]) == 0){
            if (i%2 ==0){
                printf("%s\n",array_palavras[i+1]);
                return 0;
            }
            else{
                printf("%s\n",array_palavras[i-1]);
                return 0;
            }
        }
    }

    printf ("'%s' word not found!\n", palavra);

    return 0;
}
