#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF && n != 0){
        map <int, int> m;
        int * v = (int *) malloc(sizeof(int) * n);

        for (int i = 0; i < n; ++i) {
            scanf("%d", &v[i]);
        }

        int resta;
        for (int i = n - 1; i > 0; --i) {
            for (int j = i - 1; j >= 0; --j) {
                resta = v[i] - v[j];
                if (resta < 0) resta *= -1;
                m[resta] = 1;
            }
        }

        bool first = true;
        for(auto mi : m){
            if (!first) printf(" ");
            first = false;
            int key = mi.first;
            printf("%d", key);
        }
        printf("\n");

    }

    return 0;
}