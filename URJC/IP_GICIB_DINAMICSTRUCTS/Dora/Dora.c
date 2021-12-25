#include<stdio.h>
#include<stdlib.h>

int main (){
    int tam = 1, n, i = 0;
    int * expedientes = (int *) malloc(sizeof(int));
    while(scanf("%d", &n) == 1 && n != -1) {
        expedientes[i] = n;
        tam++;
        expedientes = (int *) realloc(expedientes, sizeof(int) * tam);
        i++;
    }

    while(scanf("%d", &n) == 1 && n != -1) {
        int flag = 1, j = 0;
        while (j < tam && flag) {
            if (n == expedientes[j]) {
                printf("%d\n", j);
                flag = 0;
            }
            j++;
        }
    }

    free(expedientes);

    return 0;
}
