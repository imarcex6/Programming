#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    while(scanf("%d", &N) == 1 && N != 0) {
        map<string, int> name;
        for (int i = 0; i < N; ++i) {
            char nombre[21]; scanf("%s ", nombre);
            if (name.count(nombre) == 0) {
                name[nombre] = 1;
            } else {
                name[nombre]++;
            }
        }

        int M; scanf("%d", &M);

        for (int i = 0; i < M; ++i) {
            char nombre[21]; scanf("%s ", nombre);
            name[nombre]++;
            printf("%d\n", name[nombre]);
        }
        printf("\n");
        name.clear();
    }

    return 0;
}