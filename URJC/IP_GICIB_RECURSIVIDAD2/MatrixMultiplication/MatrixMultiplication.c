#include<stdio.h>

void calcMat(int n1, int m1, int n2, int m2, int fil, int col, int matriz1[n1][m1], int matriz2[n2][m2]);

int main() {
    int n1, m1, n2, m2;

    scanf("%d %d", &n1, &m1);

    int matriz1[n1][m1];

    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m1; ++j) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    scanf("%d %d", &n2, &m2);

    int matriz2[n2][m2];

    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < m2; ++j) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    calcMat(n1, m1, n2, m2, 0, 0, matriz1, matriz2);

    return 0;
}

void calcMat(int n1, int m1, int n2, int m2, int fil, int col, int matriz1[n1][m1], int matriz2[n2][m2]){
    int resultado = 0;
    for (int i = 0; i < m1; ++i){
        resultado += matriz1[fil][i] * matriz2[i][col];
    }
    printf("%d\t", resultado);

    if(col == m2-1 && !(col == m2 - 1 && fil == n1 - 1)){
        printf("\n");
        calcMat(n1, m1, n2, m2, fil + 1, 0, matriz1, matriz2);
    }
    if (col != m2 - 1 && !(col == m2 - 1 && fil == n1 - 1)){
        calcMat(n1, m1, n2, m2, fil, col + 1, matriz1, matriz2);
    }
}