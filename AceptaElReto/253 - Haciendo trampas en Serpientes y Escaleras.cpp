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

int N,K,S,E;
int arr[10150];
bool vis[10150];

int BFS(int start, int target)
{
    queue<pair<int,int>> q;
    q.push(make_pair(start,0));
    while(!q.empty())
    {
        pair<int,int> current = q.front(); q.pop();
        if (current.first == target) return current.second;
        for (int i = 1; i <= K; ++i) {
            int newPos = current.first + i;
            if (newPos <= target && !vis[newPos])
            {
                vis[newPos] = true;
                if (arr[newPos])
                {
                    newPos = arr[newPos];
                    vis[newPos] = true;
                }
                q.push(make_pair(newPos, current.second + 1));
            }
        }
    }
    return -1;
}

int main()
{
    while (scanf("%d %d %d %d", &N, &K, &S, &E) == 4 && (N != 0 || K != 0 || S != 0 || E != 0))
    {
        memset(arr,0,sizeof(arr));
        memset(vis,false,sizeof(vis));
        for (int i = 0; i < S + E; ++i) {
            int a,b; cin >> a >> b;
            arr[a] = b;
        }
        cout << BFS(1,N*N) << "\n";
    }

    return 0;
}