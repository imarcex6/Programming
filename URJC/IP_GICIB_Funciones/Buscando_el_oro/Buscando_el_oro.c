#include <stdio.h>

void buscar_tesoro(int N, int M, int mapa [N][M], int tesoro, int localizacion[2]);

int main() {

    int N, M, tesoro, resultado [2] = {-1,-1};

    scanf("%d %d", &N, &M);

    int matriz[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &(matriz[i][j]));
        }
    }

    scanf("%d", &tesoro);

    buscar_tesoro(N, M, matriz, tesoro, resultado);

    printf("%d %d", resultado[0], resultado[1]);

    return 0;
}

void buscar_tesoro(int N, int M, int mapa [N][M], int tesoro, int localizacion[2]) {
    int i = 0, j;
    while (i < N) {
        j = 0;
        while (j < M) {
            if (mapa[i][j] == tesoro){
                localizacion [0] = i; localizacion [1] = j;
                return;
            }
            j++;
        }
        i++;
    }
}
