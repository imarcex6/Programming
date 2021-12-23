#include<stdio.h>

void imprimir (int i, int punt){
    switch (i){
        case 0: printf("%d POWDER\n", punt);
            break;
        case 1: printf("%d VI\n", punt);
            break;
        case 2: printf("%d MYLO\n", punt);
            break;
        case 3: printf("%d CLAGGOR\n", punt);
    }
}

void imprimirmayor (int i, int punt){
    switch (i){
        case 0: printf("POWDER %d\n", punt);
            break;
        case 1: printf("VI %d\n", punt);
            break;
        case 2: printf("MYLO %d\n", punt);
            break;
        case 3: printf("CLAGGOR %d\n", punt);
    }
}


void ranking(int k, int l, int contador[]){
    int resultados[4], min = 10001, max = 0, mini = 0, maxi = 0;
    for (int i = 0; i < 4; i++){
        scanf("%d", &(resultados[i]));
        contador[i] += resultados[i];
    }
    for (int i = 0; i < 4; i++){
        if (resultados[i] < min){
            mini = i;
            min = resultados[i];
        }
        if (resultados[i] > max){
            maxi = i;
            max = resultados[i];
        }
    }
    imprimir(mini, min);
    imprimir(maxi, max);

    if (k == l){
        int mayor = 0, mayori = 0;
        for (int i = 0; i < 4; i++){
            if (contador[i] > mayor){
                mayor = contador[i];
                mayori = i;
            }
        }
        imprimirmayor(mayori, mayor);
    }

}

int main(){
    int  n;
    int contador[4] = {0, 0, 0, 0};

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        ranking(i, n, contador);
    }

    return 0;
}