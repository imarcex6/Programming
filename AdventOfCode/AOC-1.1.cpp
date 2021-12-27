#include <bits/stdc++.h>

int main() {
    int N, oldN = -1, count = 0;

    while(scanf("%d", &N) != EOF) {
        if (oldN != -1) if (N > oldN) count++;
        oldN = N;
    }
    printf("%d", count);
    return 0;
}
