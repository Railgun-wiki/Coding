#include<iostream>
using namespace std;
const int Maxn = 100000000;
int len[2000000], n, m, mid, lbound, rbound, count;
long long all;
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> len[i];
        all = all + len[i];
    }
    lbound = 1;
    rbound = Maxn;
    while (lbound < rbound){
        mid = (rbound + lbound + 1) / 2;
        count = 0;
        for (int i = 1; i <= n; i++)
            count += len[i] / mid;
        if (count < m)
            rbound = mid - 1;
        else lbound = mid;
    }
    if (all < m && lbound == 1){
        cout << 0 << endl;
        return 0;
    }
    else cout << lbound << endl;
    return 0;
}