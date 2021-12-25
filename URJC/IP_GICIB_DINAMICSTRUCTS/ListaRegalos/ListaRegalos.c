#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nombre [256];
    int precio;
    int cantidad;
} Gifts;

int main (){

    int N; scanf("%d", &N);

    Gifts * regalos;

    regalos = (Gifts *) malloc(sizeof (Gifts ) * N);

    for (int i = 0; i < N; ++i) {
        scanf("%s %d %d", &regalos[i].nombre, &regalos[i].precio, &regalos[i].cantidad);
    }

    int M; scanf("%d", &M);

    int dinGastado = 0;
    for (int i = 0; i < M; ++i) {
        int cant; scanf("%d", &cant);
        for (int j = 0; j < cant; ++j) {
            int regalo; scanf("%d", &regalo);
            if (regalos[regalo].cantidad > 0) {
                printf("%s\n", regalos[regalo].nombre);
                regalos[regalo].cantidad--;
                dinGastado += regalos[regalo].precio;
            }
        }
    }

    printf("%d", dinGastado);

    free(regalos);

    return 0;
}
