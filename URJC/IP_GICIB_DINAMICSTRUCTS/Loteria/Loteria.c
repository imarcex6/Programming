#include<stdio.h>
#include<stdlib.h>

int ** createMatrix(int N,int M);
void freeMatrix(int ** matrix, int n);
void fillMatrix(int ** matrix, int n, int m);

int main (){

    int n, m; scanf("%d %d", &n, &m);
    int ** tablero = createMatrix(n, m);

    fillMatrix(tablero, n, m);

    int i, j, suma = 0;
    while(scanf("%d %d", &i, &j) == 2 && (i >= 0) && (j >= 0)) {
        suma += tablero[i][j];
    }

    printf("%d\n", suma);

    freeMatrix(tablero, n);

    return 0;
}

void fillMatrix(int ** matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void freeMatrix(int ** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}

int ** createMatrix(int N, int M) {
    int ** Matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; ++i)
        Matrix[i] = (int *)malloc(M * sizeof(int));
    return Matrix;
}