#include<stdio.h>

int busqueda_binaria(int, int, int *, int);

int main(){

    int n, buscados, vandalo;

    scanf("%d", &n);

    int enemigos[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &enemigos[i]);
    }

    scanf("%d", &buscados);

    for (int i = 0; i < buscados; ++i) {
        scanf("%d", &vandalo);
        printf("%d\n", busqueda_binaria(0, n, enemigos, vandalo));
    }

    return 0;
}

int busqueda_binaria (int inicio, int final, int * enemigos, int buscado){
    int medio = (inicio + final) / 2;
    if (enemigos[medio] == buscado){
        return medio;
    } else if (enemigos[medio] > buscado){
        busqueda_binaria(inicio, medio, enemigos, buscado);
    } else {
        busqueda_binaria(medio, final, enemigos, buscado);
    }
}