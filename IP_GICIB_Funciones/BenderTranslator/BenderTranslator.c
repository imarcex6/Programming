#include<stdio.h>

void pasarBinario(int i){
    int binario[12];

    int k = 0;

    while (i > 0) {
        binario[k] = i % 2;
        i = i / 2;
        k++;
    }

    for (int j = k - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }
}

int main(){
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &m);
        pasarBinario(m);
        printf("\n");
    }

    return 0;
}