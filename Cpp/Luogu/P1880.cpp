#include <iostream>
#include <cstring>
#define re register int
using namespace std;

const int Maxn = 250;
int n, ansmin = 2147483646, ansmax = -1, f0[Maxn][Maxn], f1[Maxn][Maxn], a[Maxn];
int sum[Maxn];

int main(){
    cin >> n;
    for (re i = 1; i <= n; i++){
        cin >> a[i];
        a[n+i] = a[i]; 
    }
    int len = (n<<1)-1;
    for(re i = 1; i <= len; i++){
        sum[i] = sum[i-1] +a[i];
    }
    memset(f1,0x7f,sizeof(f1));
    for(re i = 0; i <= 249; i++) f1[i][i] = 0;
    for(re i = 2; i <= n; i++){
        for(re j = 1; j <= len-i+1; j++){
            for(re k = j; k <= i+j-2; k++){
                f0[j][i+j-1] = max(f0[j][i+j-1],f0[j][k]+f0[k+1][j+i-1]);
                f1[j][i+j-1] = min(f1[j][i+j-1],f1[j][k]+f1[k+1][j+i-1]);
            }
            f0[j][i+j-1] += sum[j+i-1] - sum[j-1];
            f1[j][i+j-1] += sum[j+i-1] - sum[j-1];
        }
    }
    for(re i=1;i<=n;i++){
        ansmax = max(ansmax,f0[i][i+n-1]);
        ansmin = min(ansmin,f1[i][i+n-1]);
    }
    cout << ansmin << endl << ansmax << endl;
    return 0;
}