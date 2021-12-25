#include<stdio.h>

void mov(int n, int ori, int des, int aux);

char posicion(int n);

int main() {

    int n;

    scanf("%d", &n);

    mov(n, 1, 2, 3);

    return 0;
}

void mov(int n, int ori, int des, int aux){
    if (n > 0) {
        mov(n-1, ori, aux, des);

        printf("MUEVO EL DISCO %d DESDE %c HASTA %c\n", n, posicion(ori), posicion(des));

        mov(n-1, aux, des, ori);
    }
}

char posicion(int n){
    switch(n){
        case 1:
            return 'A';
            break;
        case 2:
            return 'B';
            break;
        case 3:
            return 'C';
            break;
    }
}

