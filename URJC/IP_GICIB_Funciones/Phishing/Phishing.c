#include<stdio.h>
#include<string.h>

int checkPhising(int N, int M, char restricted[N][256], char phrase[M][256]);

int main() {

    int N, M;

    scanf("%d", &N);

    char restricted[N][256];

    for (int i = 0; i < N; ++i) {
        scanf("%s", restricted[i]);
    }

    scanf("%d", &M);

    char frase [M][256];

    for (int i = 0; i < M; ++i) {
        scanf("%s", frase[i]);
    }

    if(checkPhising(N, M, restricted, frase)) {
        printf("PHISHING DETECTADO");
    } else {
        printf("CORREO LEGITIMO");
    }

    return 0;
}

int checkPhising(int N, int M, char restricted[N][256], char phrase[M][256]){
    int contador = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (strcmp(restricted[i], phrase[j]) == 0){
                contador++;
            }
        }
    }
    if (contador >= M/2){
        return 1;
    } else {
        return 0;
    }
}