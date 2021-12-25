#include<stdio.h>

int contar_mov(int inx, int iny, int finx, int finy, int tam);

int main (){
    int n, inicio[2], fin[2], mov = 0;

    scanf("%d", &n);

    scanf("%d %d %d %d", &inicio[0], &inicio[1], &fin[0], &fin[1]);

    mov = contar_mov(inicio[0], inicio[1], fin[0], fin[1], n);

    printf("%d", mov);

    return 0;
}

int contar_mov(int inx, int iny, int finx, int finy, int tam){
    if (inx + finx < 0 || iny + finy < 0 || inx + finx >= tam || iny + finy >= tam){
        return 0;
    }
    inx += finx;
    iny += finy;
    return 1 + contar_mov(inx, iny, finx, finy, tam);
}