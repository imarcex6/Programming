#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[256];
    int space, benefit;
} stats;

int main() {
    int N, M; scanf("%d %d", &N, &M);
    stats fantasmas[N];
    for (int i = 0; i < N; ++i)
        scanf("%s %d %d", fantasmas[i].name, &fantasmas[i].space, &fantasmas[i].benefit);

    int R; scanf("%d", &R);
    for (int i = 0; i < R; ++i) {
        printf("Ruta %d\n", i);
        int n, currentSpace = 0, currentBenefit = 0;
        while (scanf("%d", &n) == 1 && n != -1) {
            if (currentSpace + fantasmas[n].space < M) {
                currentBenefit += fantasmas[n].benefit;
                currentSpace += fantasmas[n].space;
                printf("%s ", fantasmas[n].name);
            } else {
                printf("%d\n%s ", currentBenefit, fantasmas[n].name);
                currentBenefit = 0; currentBenefit += fantasmas[n].benefit;
                currentSpace = 0; currentSpace += fantasmas[n].space;
            }
        }
        printf("%d\n", currentBenefit);
    }

    return 0;
}