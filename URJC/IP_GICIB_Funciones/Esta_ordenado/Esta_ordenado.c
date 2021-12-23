#include<stdio.h>
#include<stdlib.h>

void ordenado(int n, int lista [n]);

int main() {

    int N;

    scanf("%d", &N);

    int p[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &(p[i]));
    }

    ordenado(N, p);
    
    return 0;
}

void ordenado(int n, int lista [n]){
    int ord = 1, i = 0, suma = 0;
    while ( (i < n - 1) && ord ) {
        if (lista[i] > lista[i + 1]) {
            ord = 0;
        }
        suma += lista[i];
        i++;
    }

    if (ord) {
        printf("SI %d", suma + lista[n - 1]);
    } else {
        printf("NO %d", i);
    }
}
