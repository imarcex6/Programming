#include <bits/stdc++.h>

using namespace std;

int main() {

    long long f, b;

    while(scanf("%d %d", &f, &b) == 2 && (f != 0 && b != 0)) {
        long long trepado = ((f-b+1) * (f-b+2)) / 2;
        long long total = (f * (f + 1)) / 2;
        printf("%lld\n", total - trepado);
    }

    return 0;
}