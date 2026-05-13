#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *ptr = NULL;
    int v[5];
    int *w = malloc(sizeof(v));
    if(w == NULL){
        exit(1);
    }
    memcpy(w,v, sizeof(v));

    printf("sizeof(v[5])=%zu\n", sizeof(v));
    printf("sizeof(*ptr)=%zu\n", sizeof(*ptr));
    printf("sizeof(ptr) =%zu\n", sizeof(ptr));
    printf("sizeof(char)=%zu\n", sizeof(char));
    printf("sizeof(char *) =%zu\n", sizeof(char *));
    printf("sizeof(short)=%zu\n", sizeof(short));
    printf("sizeof(int) =%zu\n", sizeof(int));
    printf("sizeof(long)=%zu\n", sizeof(long));
    printf("sizeof(float) =%zu\n", sizeof(float));
    printf("sizeof(double) =%zu\n", sizeof(double));

    return 0;
}
