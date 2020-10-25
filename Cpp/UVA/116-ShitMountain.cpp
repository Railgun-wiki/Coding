#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const int Maxn = 200;
const int Maxm = 20;
int n, m, a[Maxn][Maxm];
int dp[Maxn][Maxm];
int ans, mans;
int Next[Maxn][Maxm];
int begin[Maxn][Maxm];

int max3(int i, int a, int b, int c, int j) {
    if (dp[i][a] >= dp[i][b] && dp[i][a] >= dp[i][c]){
        Next[i][a] = j;
        begin[i+1][j] = begin[i][a];
        return dp[i][a];
    }
    else if (dp[i][b] >= dp[i][a] && dp[i][b] >= dp[i][c]){
        Next[i][b] = j;
        begin[i+1][j] = begin[i][b];
        return dp[i][b];
    }
    else if (dp[i][c] >= dp[i][a] && dp[i][c] >= dp[i][b]){
        Next[i][c] = j;
        begin[i+1][j] = begin[i][c];
        return dp[i][c];
    }
    return 0;
}

int findans(int New) {
    if (begin[n][mans] < begin[n][New]){
        mans = New;
        return dp[n][New];
    }
    else
    {
        int a = begin[n][New], b = begin[n][mans];
        for (int i = 1; i <= n; i++){
            if (Next[i][a] == Next[i][b]){
                
            }
        }
    }
}

int max_ans(int New) {
    if (ans > dp[n][New]){
        return ans;
    }
    else {
        if (ans == dp[n][New]){
            return findans(New);
        }
        else
        {
            mans = New;
            return dp[n][New];
        }
    }
    return 0;
}

void DP() {
    for (int i = 1; i <= m; i++){
        dp[1][i] = a[1][i];
        begin[1][i] = i;
    }
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= m; j++){
            int tm = j, tm0 = j - 1, tm1 = j + 1;
            if (j == 1){
                tm0 = m;
            }
            else if (j == m){
                tm1 = 1;
            }
            dp[i][j] = a[i][j] + max3(i-1, tm0, tm1, tm2, j);
        }
    }
    for (int i = 1; i <= m; i++){
    }
}

int main() {
    while (scanf("%d%d",&m,&n) != EOF){
        for (int i = 1; i <= m; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[j][i];
            }
        }
        DP();
    }
    return 0;
}