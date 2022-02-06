#include <bits/stdc++.h>

using namespace std;

int balanced(int pi, int di, int pd, int dd) {
    if (pi == 0) {
        int pi2, di2, pd2, dd2;
        cin >> pi2 >> di2 >> pd2 >> dd2;
        pi += balanced(pi2, di2, pd2, dd2);
    }
    if (pd == 0) {
        int pi2, di2, pd2, dd2;
        cin >> pi2 >> di2 >> pd2 >> dd2;
        pd += balanced(pi2, di2, pd2, dd2);
    }
    if (pi * di == pd * dd && pi != -1 && pd != -1) return pi + pd;
    else return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int pi, di, pd, dd;
    while (cin >> pi >> di >> pd >> dd && pi != 0 || di != 0 || pd != 0 || dd != 0) {
        if (balanced(pi, di, pd, dd) != -1) {
            printf("SI\n");
        } else printf("NO\n");
    }

    return 0;
}