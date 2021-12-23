#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[100];
    float precio;
    int calidad, puedo;
} objeto;

int main() {

    objeto * regalo;
    int T; scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        float cuenta = 0;
        int comprados = 0;
        int N, M, P; scanf("%d %d %d", &N, &M, &P);
        regalo = (objeto *) malloc(sizeof(objeto) * N);
        for (int j = 0; j < N; ++j) {
            scanf("%s %f %d", regalo[j].nombre, &regalo[j].precio, &regalo[j].calidad);
            if (cuenta + regalo[j].precio <= P && M <= regalo[j].calidad) {
                cuenta += regalo[j].precio;
                regalo[j].puedo = 1;
                comprados++;
            } else regalo[j].puedo = 0;
        }
        float calmed = 0;
        for (int j = 0; j < N; ++j) {
            if (regalo[j].puedo == 1) {
                printf("%s\n", regalo[j].nombre);
                calmed += regalo[j].calidad;
            }
        }
        printf("%.1f %.1f\n", cuenta, calmed/comprados);
        free(regalo);
    }

    return 0;
}
