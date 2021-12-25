#include<stdio.h>
#include<stdlib.h>

int max(int N, int ** mayor);
int mvp(int N,int ** mayor, int winner);
int ** createMatrix(int N,int M);
void freeMatrix(int ** matrix, int n);
void inicializarArray(int N, int M, int ** array);
int twin(int ** mayor, int N, int max);

int main (){

    int N; scanf("%d", &N);

    int ** matrix = createMatrix(2, N);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &(matrix[i][j]));
        }
    }

    int M; scanf("%d", &M);

    int * ronda = (int *) malloc(sizeof(int) * N);

    int ** mayor;
    mayor = createMatrix(2, N);

    inicializarArray(N, M, mayor);

    for (int i = 0; i < M; ++i) {
        scanf("%d %d %d", &ronda[0], &(ronda[1]), &ronda[2]);
        mayor[ronda[0]][ronda[1]] += matrix[ronda[0]][ronda[1]];
    }

    int Grande = max(N, mayor);
    int EGanador = twin(mayor, N, Grande);
    int Ganador = mvp(N, mayor, EGanador);

    printf("%d %d %d",EGanador, Grande, Ganador);

    freeMatrix(matrix, 2);
    freeMatrix(mayor, 2);
    free(ronda);

    return 0;
}

int twin(int ** mayor, int N, int max) {
    int max0 = 0;
    for (int i = 0; i < N; ++i) {
        max0 += mayor[0][i];
    }
    if (max0 == max) {
        return 0;
    }else return 1;

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

int max(int N, int ** mayor) {
    int max0 = 0, max1 = 0;
    for (int i = 0; i < N; ++i) {
        max0 += mayor[0][i];
        max1 += mayor[1][i];
    }
    if (max0 > max1) return max0;
    else return max1;
}

int mvp(int N, int ** mayor, int winner) {
    int ganador = 0, max = 0;
    for (int i = 0; i < N; ++i) {
        if (mayor[winner][i] > max) {
            ganador = i;
            max = mayor[winner][i];
        }
    }
    return ganador;
}

void inicializarArray(int N, int M, int ** array) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            array[i][j] = 0;
        }
    }
}