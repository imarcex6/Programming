#include <bits/stdc++.h>
using namespace std;

int used [20500];

void addEdge(vector<int> adj[], int u, int v);
int checkLargest(vector<int> adj[], int V);
void sumaCont (vector<int> adj[], int n, int &currentSum);

int main() {

    int n; scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int maxSum = 0;
        memset(used, 0, sizeof(used));
        int V, N; scanf("%d %d", &V, &N);
        vector<int> adj[V+1];
        for (int j = 0; j < N; ++j) {
            int a, b; scanf("%d %d", &a, &b);
            addEdge(adj, a, b);
        }
        maxSum = checkLargest(adj, V);
        if (N == 0) maxSum = 1;
        printf("%d\n", maxSum);
    }
    return 0;
}

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int checkLargest(vector<int> adj[], int V) {
    int maxSum = INT_MIN;
    for (int i = 1; i <= V; ++i) {
        int currentSum = 0;
        sumaCont (adj, i, currentSum);
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

void sumaCont (vector<int> adj[], int n, int &currentSum) {
    for (auto x : adj [n]) {
        if (used[x] == 0) {
            used [x] = 1;
            currentSum++;
            sumaCont(adj, x, currentSum);
        }
    }
}