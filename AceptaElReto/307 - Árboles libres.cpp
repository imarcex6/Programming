#include<bits/stdc++.h>

using namespace std;

int used [10000];

void addEdge(int u, int v, vector<int> V[]) {
    V[u].push_back(v);
    V[v].push_back(u);
}

void BFS(int x, vector<int> V[]) {
    if (used[x] == 0) {
        used[x] = 1;
        for (auto i : V[x]) {
            BFS(i, V);
        }
    }
}

int main(void) {
    int V, A;
    while (cin >> V) {
        memset(used, 0, sizeof(used));
        vector<int> G[V];
        cin >> A;
        for (int i = 0; i < A; ++i) {
            int u, v; cin >> u >> v;
            addEdge(u,v,G);
        }
        BFS(0,G);
        bool connected = true;
        for (int i = 0; i < V; ++i) {
            if (!used[i]) connected = false;
        }
        if (connected && A == V-1) printf("SI\n");
        else printf("NO\n");
    }

    return 0;
}