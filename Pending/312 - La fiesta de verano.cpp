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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ll N;
    while (cin >> N && N != 0
    ) {
        vector<ll> vec;
        vec.push_back(N);
        long long result = N;
        while (cin >> N && N != 0) {
            vec.push_back(N);
            result = gcd(N, result);
        }
        ll ans = 0;
        for (ll x : vec) {
            ans += x/result;
        }
        cout << ans << "\n";
    }


    return 0;
}
