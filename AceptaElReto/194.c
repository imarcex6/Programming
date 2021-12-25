#include<stdio.h>
#include<string.h>

int main() {

    int n, contador, i;
    scanf("%d", &n);

    char cadena [10000];

    for (i = 0; i < n; i++){
        scanf("%s", cadena);
        contador = 0;
        int k = 0;
        while(k < strlen(cadena)) {
            if (cadena[k] == '.'){
                contador++;
                k+=3;
            } else {
                k++;
            }
        }
        printf("%d\n", contador);
    }

    return 0;
}