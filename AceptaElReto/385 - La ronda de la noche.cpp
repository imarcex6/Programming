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

int dir_Row[4] = { -1, 0, 1, 0 };
int dir_Col[4] = { 0, 1, 0, -1 };
char tablero[1020][1020];
bool visited[1020][1020];
int r,c;
typedef struct{
    int x,y;
} point2d;

void sensores(int a, int b, int range)
{
    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i <= range; ++i) {
            int I = a + (dir_Row[j] * i);
            int J = b + (dir_Col[j] * i);
            if (I < 0 || I >= r || J < 0 || J >= c || tablero[I][J] == '#'){
                break;
            } else visited[I][J] = true;
        }
    }
}

int BFS(point2d start, point2d end){
    queue<pair<point2d, int>> q;
    q.push(make_pair(start,0));
    while (!q.empty())
    {
        pair<point2d, int> current = q.front(); q.pop();
        int a = current.first.x, b = current.first.y;
        if (a == end.x && b == end.y) return current.second;
        for (int i = 0; i < 4; ++i) {
            int I = a + dir_Row[i];
            int J = b + dir_Col[i];
            if (!visited[I][J] && I >= 0 && I < r && J >= 0 && J < c) {
                visited[I][J] = true;
                point2d t_current {
                    t_current.x = I,
                    t_current.y = J
                };
                q.push(make_pair(t_current, current.second + 1));
            }
        }
    }
    return -1;
}

int main()
{
    unsigned int cases; cin >> cases;
    while (cases--) {
        memset(visited,false,sizeof(visited));
        point2d inicio, fin;
        scanf("%d %d", &c, &r);
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) cin >> tablero[i][j];

        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
            {
                char currentChar = tablero[i][j];
                if (currentChar != '.')
                {
                    if (currentChar == '#') visited[i][j] = true;
                    else if (currentChar >= '0' && currentChar <= '9') sensores(i,j,currentChar-'0');
                    else if (currentChar == 'E') { inicio.x = i; inicio.y = j;}
                    else if (currentChar == 'P') { fin.x = i; fin.y = j;}
                }
            }

        if (visited[inicio.x][inicio.y] || visited[fin.x][fin.y]) {cout << "NO\n";}
        else
        {
            int res = BFS(inicio,fin);
            if (res != -1) cout << res << "\n";
            else cout << "NO\n";
        }
    }

    return 0;
}