#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n, m;

    printf("Lines : ");
    scanf("%d", &n);
    printf("Rows : ");
    scanf("%d", &m);

    int *p = malloc(sizeof(int) * n * m);
    if(p == NULL){
        exit(1);
    }

    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            int k = i * m + j;
            p[k] = (20*i) + (56 * j * j);
        }
    }

    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            int k = i * m + j;
            printf("Matrix pos(%d, %d) : %d\n",i, j, p[k]);
        }
    }

}