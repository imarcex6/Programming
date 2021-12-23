#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[256];
    int x, y, z, tam, sobra;
} dim;

int main() {
    int N;
    dim * regalo;
    while (scanf("%d", &N) != EOF) {
        regalo = (dim *) malloc(sizeof(dim) * N);
        int ocupado = 0;
        for (int i = 0; i < N; ++i) {
            scanf("%s %d %d %d", regalo[i].nombre, &regalo[i].x, &regalo[i].y, &regalo[i].z);
            regalo[i].tam = regalo[i].x * regalo[i].y * regalo[i].z;
        }

        int espacio, flag = 0; scanf("%d", &espacio);
        for (int i = 0; i < N; ++i) {
                if (espacio >= ocupado+regalo[i].tam) {
                    ocupado += regalo[i].tam;
                    regalo[i].sobra = 0;
                }
                else {
                    regalo[i].sobra=1;
                    flag++;
                }
        }

        if (flag) {
            printf("SOBRAN %d REGALOS\n", flag);
            for (int i = 0; i < N; ++i) {
                if (regalo[i].sobra == 1) printf("%s\n", regalo[i].nombre);
            }
        } else {
            printf("CONSEGUIDO\n");
        }
        free(regalo);
    }
    return 0;
}
