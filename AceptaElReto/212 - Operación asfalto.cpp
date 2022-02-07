#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, I;
    while (cin >> N && N != 0) {
        cin >> I;
        int arr[I+1];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < N; ++i) {
            int x, y; cin >> x >> y;
            arr[x]++;
            arr[y]++;
        }
        int contTotal = 0, contOdd = 0;
        for (int i = 1; i <= I; ++i) {
            if (arr[i] != 0) {
                contTotal++;
            }
            if (arr[i] % 2 != 0 && arr[i] != 0) contOdd++;
        }
        if (contTotal == I && (contOdd == 0 || contOdd == 2)) printf("SI\n");
        else printf("NO\n");
    }

    return 0;
}