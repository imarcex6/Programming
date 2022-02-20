#include <bits/stdc++.h>
#define oo 0x3f3f3f3f3f3f3f3fLL
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define FOR(i, a, b) for(int i = (a); i < int(b); i++)
#define trav(i, v) for(auto &i : v)
#define has(c, e) ((c).find(e) != (c).end())
#define sz(c) int((c).size())
#define all(c) c.begin(), c.end()
#define debug(x) cerr << #x << ": " << x << endl;

int main(){

    int cases; scanf("%d", &cases);
    while (cases--) {
        int sizeWindow; cin >> sizeWindow;
        int arr[sizeWindow];
        for (int i = 0; i < sizeWindow; ++i) {
            cin >> arr[i];
        }
        int maximum = INT_MIN;
        for (int i = 0; i < sizeWindow - 1; ++i) {
            for (int j = i+1; j < sizeWindow; ++j) {
                int current = arr[i]-arr[j];
                maximum = max(current,maximum);
            }
        }
        cout << maximum << "\n";
    }

    return 0;
}
