#include <iostream>

using namespace std;

int card[5];
int Sc[500];
int n, m;
int f[50][50][50][50];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> Sc[i];
    }
    for (int i = 1; i <= m; i++){
        int x;
        cin >> x;
        card[x]++;
    }
    f[0][0][0][0] = Sc[1];
    for (int i = 0; i <= card[1]; i++){
        for (int j = 0; j <= card[2]; j++){
            for (int k = 0; k <= card[3]; k++){
                for(int l = 0; l <= card[4]; l++){
                    int ans = 1 + i*1 + j*2 + k*3 + l*4;
                    if (i) f[i][j][k][l] = max(f[i-1][j][k][l]+Sc[ans],f[i][j][k][l]);
                    if (j) f[i][j][k][l] = max(f[i][j-1][k][l]+Sc[ans],f[i][j][k][l]);
                    if (k) f[i][j][k][l] = max(f[i][j][k-1][l]+Sc[ans],f[i][j][k][l]);
                    if (l) f[i][j][k][l] = max(f[i][j][k][l-1]+Sc[ans],f[i][j][k][l]);
                }
            }
        }
    }
    cout << f[card[1]][card[2]][card[3]][card[4]] << endl;
    return 0;
}