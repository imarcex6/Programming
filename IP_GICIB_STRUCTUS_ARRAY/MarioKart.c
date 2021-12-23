#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    char playername[100], vehiclename[100];
    int speed;
} best;

typedef struct {
    char nombre[100];
    int velocidad, aceleracion;
} vehiculo;

typedef struct {
    char nombre[100];
    int peso;
    float habilidad;
} personaje;

int main() {
    int N, M;
    personaje *player;
    vehiculo *coche;
    best mejor;
    scanf("%d %d", &N, &M);
    player = (personaje *) malloc(sizeof(personaje) * N);
    coche = (vehiculo *) malloc(sizeof(vehiculo) * M);
    mejor.speed = 0;
    for (int i = 0; i < N; ++i) {
        scanf("%s %d %f", player[i].nombre, &player[i].peso, &player[i].habilidad);
    }
    for (int i = 0; i < M; ++i) {
        scanf("%s %d %d", coche[i].nombre, &coche[i].velocidad, &coche[i].aceleracion);
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int velocidad = coche[j].velocidad / player[i].peso;
            int aceleracion = ceil(coche[j].aceleracion * player[i].habilidad);
            if (mejor.speed < velocidad + aceleracion) {
                mejor.speed = velocidad + aceleracion;
                strcpy(mejor.playername, player[i].nombre);
                strcpy(mejor.vehiclename, coche[j].nombre);
            }
        }
    }
    printf("%s %s %d\n", mejor.playername, mejor.vehiclename, mejor.speed);
    free(player);
    free(coche);

    return 0;
}
