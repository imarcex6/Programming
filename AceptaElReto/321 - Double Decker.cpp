#include <bits/stdc++.h>

using namespace std;

int main() {
    int A; scanf("%d", &A);
    for (int i = 0; i < A; ++i) {
        int u,d; scanf("%d %d", &u, &d);
        int pos = u+d;
        printf("%d\n", pos*(pos+1)/2 + u + 1);
    }
    return 0;
}
