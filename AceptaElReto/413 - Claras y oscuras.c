#include <stdio.h>

int main() {
    int i = 0, j, blancas = 0, negras = 0;
    scanf("%d", &i);
    i *= 2;
    int posiciones[i];
    for( j = 0; j < i; j++){
        scanf("%d", &posiciones [j]);
    }

    for( j = 0; j < i; j += 2){
        if ( (posiciones[j] * posiciones[j+1]) % 2 == 0){
            blancas = posiciones[j] * posiciones[j+1]/2;
            negras = blancas;
            printf("%d %d\n", blancas, negras);
        }
        else{
            blancas = posiciones[j] * posiciones[j+1]/2 + 1;
            negras = posiciones[j] * posiciones[j+1]/2;
            printf("%d %d\n", blancas, negras);
        }
    }

    return 0;
}