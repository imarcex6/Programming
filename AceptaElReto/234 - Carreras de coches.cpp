#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases; cin >> cases;
    for (int l = 0; l < cases; ++l) {
        int N, V; cin >> N >> V;
        int arr[N];
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+N);
        int contador = 0;
        int i = 0, k = N-1;
        while (i < k) {
            if (arr[i] + arr[k] >= V) {
                contador++;
                i++; k--;
            } else i++;
        }
        printf("%d\n", contador);
    }

    return 0;
}