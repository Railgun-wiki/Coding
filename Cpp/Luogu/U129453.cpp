#include<iostream>
using namespace std;
long long n, k, i, ln;
int main() {
    cin >> n >> k;
    while (n > k){
        i++;
        n = (n + 1) / 2;
    }
    cout << i << endl;
    return 0;
}