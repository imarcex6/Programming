#include <bits/stdc++.h>

using namespace std;

int N, M;
char arr[105][105];
bool vis[105][105];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int DFS() {
    queue<pair<int, int>> q;
    int maximum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (!vis[i][j]) {
                vis[i][j] = true;
                int cont = 1;
                q.push(make_pair(i, j));
                while (!q.empty()) {
                    pair<int, int> current = q.front(); q.pop();
                    int a = current.first, b = current.second;
                    for (int k = 0; k < 4; ++k) {
                        int I = a + dx[k];
                        int J = b + dy[k];
                        if (I >= 0 && I < N && J >= 0 && J < M && !vis[I][J]) {
                            vis[I][J] = true;
                            cont++;
                            q.push(make_pair(I, J));
                        }
                    }
                }
                maximum = max(maximum, cont);
            }
        }
    }
    return maximum;
}

int main() {
    while (scanf("%d %d", &N, &M) == 2) {
        cin.ignore();
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin.get(arr[i][j]);
                if (arr[i][j] == ' ') vis[i][j] = true;
                else vis[i][j] = false;
            }
            cin.ignore();
        }

        cout << DFS() << "\n";
    }

    return 0;
}