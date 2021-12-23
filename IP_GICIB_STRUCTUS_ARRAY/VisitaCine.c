#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre [256];
    int edad, tiempo;
} movies;

int main() {
    int N; scanf("%d", &N);
    movies pelis[N];

    for (int i = 0; i < N; ++i) {
        scanf("%s %d %d", pelis[i].nombre, &pelis[i].edad, &pelis[i].tiempo);
    }

    int M; scanf("%d", &M);
    int mayor = 1, edad[M];
    for (int i = 0; i < M; ++i) {
        scanf("%d", &edad[i]);
    }

    char ver [256]; scanf("%s", ver);

    int k = 0, flag = 1;

    while (flag) {
        if (strcmp(pelis[k].nombre, ver) == 0) flag = 0;
        if (flag) k++;
    }

    for (int i = 0; i < M; ++i) {
        if (mayor && pelis[k].edad > edad[i]) {
            mayor = 0;
        }
    }

    if (mayor) {
        printf("PUEDES VER LA PELICULA %s %d\n", ver, pelis[k].tiempo);
    } else {
        printf("NO PUEDES VER LA PELICULA %s: ES PARA MAYORES DE %d\n", ver, pelis[k].edad);
    }

    return 0;
}