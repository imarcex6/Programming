#include<stdio.h>

void crear_aro(int N, int matriz[N][N], int aro, int num);

void imprimir_matriz(int N, int matriz[N][N]);

int main (){

    int n, i = 0, j = 0;

    scanf("%d", &n);

    int matriz[n][n];

    crear_aro(n, matriz, 0, n/2 + 1);

    imprimir_matriz(n, matriz);

    return 0;
}

void crear_aro(int N, int matriz[N][N], int aro, int num){
    for (int i = 0 + aro; i < N - aro; ++i) {
        for (int j = 0 + aro; j < N - aro; ++j) {
            matriz[i][j] = num;
        }
    }
    if (num > 1){
        crear_aro(N, matriz, aro+1, num-1);
    }
}

void imprimir_matriz(int N, int matriz[N][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}