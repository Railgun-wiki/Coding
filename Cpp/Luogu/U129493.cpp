#include <iostream>
using namespace std;
const int Maxn = 4000;
long long f[Maxn][Maxn];
long long n, m;
long long Map[Maxn][Maxn];
bool vis[Maxn][Maxn];
long long DFS(int x, int y, bool l) {
    if (vis[x][y]) return f[x][y];
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            cin >> Map[i][j];
        }
    }
    f[1][1] = Map[1][1];
    DFS(1, 1, 0);
    return 0;
}