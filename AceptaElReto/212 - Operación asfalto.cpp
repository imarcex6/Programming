#include <bits/stdc++.h>
using namespace std;

bool used [100000];

void addEdge (vector<int> G[], int u, int v) {
    G[u].push_back(v);
    G[v].push_back(u);
}

void DFS(vector<int> G[], int x) {
    used[x] = true;

    for (auto i : G[x]) {
        if (!used[i]) {
            DFS(G, i);
        }
    }
}

bool checkConnection (vector<int> G[], int size) {
    for (int i = 1; i <= size ; ++i) {
        if (!used[i]) return false;
    }
    return true;
}

bool checkOddEdges (vector<int> G[], int size) {
    int countOdd = 0;
    for (int i = 1; i <= size; ++i) {
        if (G[i].size() % 2 != 0) {
            countOdd++;
        }
    }
    if (countOdd == 0 || countOdd == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C;
    while (cin >> C && C != 0) {
        memset(used, false, sizeof(used));
        int V; cin >> V;
        vector<int> G[V+1];
        for (int i = 0; i < C; ++i) {
            int u,v; cin >> u >> v;
            addEdge(G, u, v);
        }
        DFS(G, 1);
        if(checkConnection(G, V) && checkOddEdges(G, V)) {
            printf("SI\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}