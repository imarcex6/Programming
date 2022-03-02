#include <bits/stdc++.h>

using namespace std;

int main() {

    int N,M;
    while(scanf("%d %d", &N, &M) == 2 && N >= 0 && M >= 0) {
        printf("%d\n", N*2 + M*2);
    }

    return 0;
}
