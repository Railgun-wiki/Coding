#include <iostream>

using namespace std;

const int Maxn = 30000;
int n;
int l[Maxn], r[Maxn];
int f[Maxn][2];
int ans;

int Minx(int x, int y) {
    return x>y? y:x;
}

int Abs(int x) {
    return x>0? x:0-x;
}

int main() {
    cin >> n;
    ans = n-1;
    for (int i = 1; i <= n; i++){
        cin >> l[i] >> r[i];
        ans = ans + r[i] - l[i];
    }
    f[1][0] = r[1] - 1;
    f[1][1] = l[1] - 1;
    for (int i = 2; i <= n; i++){
        f[i][0] = Minx(f[i-1][1]+Abs(r[i-1]-r[i]),f[i-1][0]+Abs(l[i-1]-r[i]));
        f[i][1] = Minx(f[i-1][1]+Abs(r[i-1]-l[i]),f[i-1][0]+Abs(l[i-1]-l[i]));
    }
    ans = ans + Minx(f[n][0]+n-l[n],f[n][1]+n-r[n]);
    cout << ans << endl;
    return 0;
}