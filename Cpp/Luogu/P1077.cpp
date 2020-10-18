#include <iostream>

using namespace std;

const int Maxn=110;
int n, m, a[Maxn], f[Maxn][Maxn];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
       for (int j = 0; j<= m; j++)
           for (int k = 0; k <= min(a[i],j); k++)
              f[i][j] = (f[i][j] + f[i-1][j-k]) % 1000007;
    cout << f[n][m] << endl;
    return 0;
}