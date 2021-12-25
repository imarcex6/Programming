#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int PV, PA, PM;
} stats;

int main (){

    stats * equipos;

    equipos = (stats *) malloc(sizeof(stats) * 3);

    int contador = 0;

    for (int i = 0; i < 3; ++i)
        scanf("%d %d %d", &equipos[i].PV, &equipos[i].PA, &equipos[i].PM);

    int M; scanf("%d", &M);

    int matado = 1;

    int i = 0;
    while (i < M && (equipos[0].PV > 0 || equipos[1].PV > 0 || equipos[2].PV > 0) && matado) {
        int EV, EA;
        float EF, EM;
        scanf("%d %d %f %f", &EV, &EA, &EF, &EM);
        int A;
        scanf("%d", &A);

        for (int k = 0; k < 3; ++k) {
            if (equipos[k].PV > 0) EV -= equipos[k].PA * EF + equipos[k].PM * EM;
        }

        for (int j = 0; j < A; ++j) {
            int atacado;
            scanf("%d", &atacado);
            if (EV > 0) equipos[atacado].PV -= EA;
        }

        if (EV <= 0) {
            contador++;
        } else matado = 0;
        i++;
    }

    printf("%d", contador);

    free(equipos);

    return 0;
}
