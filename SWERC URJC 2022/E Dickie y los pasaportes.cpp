#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

vector<int> graph[2001];
bool visited[2001];

int DFS(int node, int target){
    if(node == target) return 0;
    if(visited[node]) return INF;
    visited[node] = true;
    int best_result = INF;
    for(int i=0;i<graph[node].size();i++){
        int dest = graph[node][i];
        best_result = min(
                best_result,
                DFS(dest, target)+1
        );
    }
    return best_result;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N; cin >> N;
    set<string> pasaportes;
    for (int i = 0; i < N; ++i) {
        string pais; cin >> pais;
        pasaportes.insert(pais);
    }
    int A,B,P,D; cin >> A >> B >> P >> D;
    set<string> aeropuertos[A];
    for (int i = 0; i < A; ++i) {
        int amount; cin >> amount;
        for (int j = 0; j < amount; ++j) {
            string pais; cin >> pais;
            aeropuertos[i].insert(pais);
        }
    }
    memset(visited,true,sizeof(visited));
    for (auto m : pasaportes) {
        for (int i = 0; i < A; ++i)
            if (aeropuertos[i].count(m)) visited[i] = false;
    }
    for (int i = 0; i < B; ++i) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
    }

    int dist = DFS(P,D);
    if (dist != INF) cout << dist << "\n";
    else cout << -1 << "\n";

    return 0;
}
