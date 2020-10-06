#include<iostream>
const int Maxn = 1000002;
using namespace std;
int a[2000000], lbound, rbound, mid, count;
int main(){
    int n, m;
    cin >> n >> m;
    for (register int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (register int i = 1; i <= m; i++){
        int t;
        cin >> t;
        lbound = 1;
        rbound = n;
        while (lbound < rbound){
            mid = lbound + (rbound - lbound) / 2;
            if (a[mid] < t) lbound = mid + 1;
            else rbound = mid;
            //cout << lbound << " " << rbound << endl;
        }
        if (a[lbound] != t) cout << -1 << " ";
        else cout << lbound << " ";
    }
    cout << endl;
    return 0;
}