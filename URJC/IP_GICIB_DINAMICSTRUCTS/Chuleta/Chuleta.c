#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ** createMatrix(int N, int M);
int fillMatrix(char ** matrix);
void invertirFila (char ** matrix, int fila, int len);
void printClave (char ** matrix, int N, int len);
void swapCoord (char ** matrix, int x1, int y1, int x2, int y2);

int main (){

    char str [1100]; scanf("%s", str);
    int len = strlen(str);

    char ** matrix;
    matrix = createMatrix(1100 , len+1);
    strcpy(matrix[0], str);

    int cant = fillMatrix(matrix);

    int N; scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int cases; scanf("%d", &cases);
        if (cases) {
            int fila; scanf("%d", &fila);
            invertirFila(matrix, fila, len);
        } else {
            int x1, y1, x2, y2; scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            swapCoord(matrix, x1, y1, x2, y2);
        }
    }

    printClave(matrix, cant, len);

    for (int i = 0; i < 1100; ++i) {
      free(matrix[i]);
    }
    free(matrix);

    return 0;
}

void printClave (char ** matrix, int N, int len) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < len; ++j) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}

void swapCoord (char ** matrix, int x1, int y1, int x2, int y2) {
    char temp = matrix[x1][y1];
    matrix[x1][y1] = matrix[x2][y2];
    matrix[x2][y2] = temp;
}

void invertirFila (char ** matrix, int fila, int len) {
    char temp;
    for (int izquierda = 0, derecha = len - 1; izquierda < (len / 2);
         izquierda++, derecha--) {
        temp = matrix[fila][izquierda];
        matrix[fila][izquierda] = matrix[fila][derecha];
        matrix[fila][derecha] = temp;
    }
}

char ** createMatrix(int N, int M) {
    char ** Matrix;
    Matrix = (char **)malloc(N * sizeof(char *));
    for (int i = 0; i < N; ++i)
        Matrix[i] = (char *)malloc(M * sizeof(char));
    return Matrix;
}

int fillMatrix(char ** matrix) {
    int i = 1;
    while(scanf("%s", matrix[i]) != EOF && strcmp(matrix[i], "FIN") != 0) {
        i++;
    }
    return i;
}
