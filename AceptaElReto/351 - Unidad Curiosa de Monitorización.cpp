#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int id;
    int periodo;
} Alumnos;

int main() {

    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        Alumnos alumno[N];
        int arr[N];

        for (int i = 0; i < N; ++i) {
            scanf("%d %d", &alumno[i].id, &alumno[i].periodo);
            arr[i] = alumno[i].periodo;
        }

        int envios;
        scanf("%d", &envios);

        int lower, lowerid;
        for (int i = 0; i < envios; ++i) {
            lower = INT_MAX, lowerid = INT_MAX;
            for (int j = 0; j < N; ++j) {
                if (lower > arr[j]) {
                    lower = arr[j];
                    lowerid = j;
                }
                if (lower == arr[j] && alumno[lowerid].id > alumno[j].id) {
                    lower = arr[j];
                    lowerid = j;
                }
            }
            arr[lowerid] += alumno[lowerid].periodo;
            printf("%d\n", alumno[lowerid].id);
        }
        printf("----\n");
    }

return 0;
}