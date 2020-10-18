#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int n, t;
int ans;
const int Maxn = 20000;
const int Maxm = 1000010;
long long f[Maxn], top;
int w[Maxn], c[Maxn], p[Maxn];
long long wc[Maxm], cc[Maxm];

int Max(int x, int y) {
    return x>y? x:y;
}

inline void qwq() {
	for (int i = 1; i <= n; i++){
		int q = 1;
		while (p[i]){
			wc[++top] = w[i] * q;
			cc[top] = c[i] * q;
			p[i]-=q;
			q*=2;
			if (p[i]<q){
				wc[++top] = w[i] * p[i];
				cc[top] = c[i] * p[i];
				break;
			}
		}
	}
}

int main(){
    freopen("a.in","r",stdin);
    int h0,h1,m0,m1;
    scanf("%d:%d%d:%d%d",&h0,&m0,&h1,&m1,&n);
    t = (h1*60 + m1) - (h0*60 + m0);
    //cout << t << endl;
    for (int i = 1; i <= n; i++){
        cin >> w[i] >> c[i] >> p[i];
        if (!p[i])
            p[i]=999999;
    }
    qwq();
    //for (int i = 1; i <= top; i++)
    //   cout << wc[i] << " " << cc[i] << endl;
    //cout << top << endl;
    for (int i = 1; i <= top; i++)
    	for (int j = t; j >= wc[i]; j--)
    		f[j] = max(f[j], f[j-wc[i]] + cc[i]);
    cout << f[t] << endl;
    return 0;
}