#include <stdio.h>

void buscar_tesoro(int N, int M, int mapa [N][M], int tesoro);

int main() {

    int N, M, tesoro;

    scanf("%d %d", &N, &M);

    int matriz[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &(matriz[i][j]));
        }
    }

    scanf("%d", &tesoro);

    buscar_tesoro(N, M, matriz, tesoro);

    return 0;
}

void buscar_tesoro(int N, int M, int mapa [N][M], int tesoro) {
    int i = 0, j, flag = 1;
    while (i < N && flag) {
        j = 0;
        while (j < M && flag) {
            if (mapa[i][j] == tesoro){
                printf("%d %d", i, j);
                flag = 0;
            }
            j++;
        }
        i++;
    }
}