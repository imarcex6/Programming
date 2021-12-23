#include<stdio.h>

int suma_impar(int * v, int pos);

int main() {

    int array[20];

    for (int i = 0; i < 20; i++){
        scanf("%d", &array[i]);
    }

    printf("%d", suma_impar(array, 1));

    return 0;
}

int suma_impar(int * v, int pos){
    if (pos > 19){
        return 0;
    }
    return v[pos] + suma_impar (v, pos + 2);
}