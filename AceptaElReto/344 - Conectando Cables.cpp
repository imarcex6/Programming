#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases; scanf("%d", &cases);
    char cable[3];
    while(cases--) {
        int N, lH = 0, rH = 0, lM = 0, rM = 0; cin >> N;
        for (int i = 0; i < N; ++i) {
            scanf("%s", cable);
            if(cable[0] == 'H') lH++;
            else lM++;
            if(cable[1] == 'H') rH++;
            else rM++;
        }
        if (lH == rM && rH == lM) printf("POSIBLE\n");
        else printf("IMPOSIBLE\n");
    }

    return 0;
}
