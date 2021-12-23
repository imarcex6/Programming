#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[256];
    int anticuerpos;
} vaccine;

void solution(int N, vaccine vacuna1[N]);

int main() {

    int N;
    scanf("%d", &N);
    vaccine vacuna[N];
    for (int i = 0; i < N; ++i) {
        scanf("%s %d", vacuna[i].nombre, &vacuna[i].anticuerpos);
    }
    int M;
    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        solution(N, vacuna);
    }

    return 0;
}

void solution(int N, vaccine vacuna1[N]) {
    int reaccion, suma = 0, flag = 1;
    scanf("%d", &reaccion);
    char vacuna[3][256];
    for (int i = 0; i < 3; ++i) {
        scanf("%s", vacuna[i]);
        if (flag) {
            for (int j = 0; j < N; ++j) {
                if (strcmp(vacuna1[j].nombre, vacuna[i]) == 0) {
                    if (reaccion >= suma + vacuna1[j].anticuerpos) {
                        suma += vacuna1[j].anticuerpos;
                    } else {
                        printf("REACCION %s\n", vacuna[i]);
                        flag = 0;
                    }
                }
            }
        }
    }
    if (flag) {
        printf("SOBREVIVIO A");
        for (int j = 0; j < 3; ++j) {
            printf(" %s", vacuna[j]);
        }
        printf("\n");
    }

}