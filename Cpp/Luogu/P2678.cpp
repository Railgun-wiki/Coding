#include<iostream>
#include<string>
using namespace std;
const int Maxn = 1100000000;
const int Maxm = 60000;
int len[Maxm], a[Maxm], a2[Maxm], n, m, mid, count, lbound, rbound, Len;
int main() {
    ios::sync_with_stdio(false);
    cin >> Len >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> len[i];
        a[i] = len[i] - len[i-1];
    }
    lbound = 1;
    rbound = Maxn;
    while (lbound < rbound){
        mid = (lbound + rbound + 1) / 2;
        count = 0;
        for (int i = 1; i <= n; i++){
            if (a[i] <= mid){
                //count++;
                int temp = 0, te = 0;
                while (temp < mid){
                    temp += a[i+te];
                    te++;
                    count++;
                }
                i += te - 1;
            }
        }
        if (count > m)
            rbound = mid - 1;
        else lbound = mid;
    }
    cout << lbound << endl;
    return 0;
}
