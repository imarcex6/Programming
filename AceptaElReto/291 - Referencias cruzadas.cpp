#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    while(scanf("%d", &N) == 1 && N != 0) {
        map<string, vector<int>> refcru;
        int i = 0;
        char espacio;
        while (scanf("%c", &espacio) == 1) {
            if(espacio == '\n') {
                i++;
                if (i > N) break;
            }
            char palabra [11]; scanf("%s", palabra);
            if (strlen(palabra) > 2) {
                for (int j = 0; j < strlen(palabra); ++j) {
                    if (palabra[j] < 91) palabra[j] += 32;
                }
                int dentro = 1;
                for(auto num : refcru[palabra]) {
                    if (num == i) dentro = 0;
                }
                if (dentro) refcru[palabra].push_back(i);
            }
        }
        for(auto mi : refcru) {
            cout << mi.first;
            for (auto vi : mi.second) {
                printf(" %d", vi);
            }
            printf("\n");
        }
        printf("----\n");
    }

    return 0;
}