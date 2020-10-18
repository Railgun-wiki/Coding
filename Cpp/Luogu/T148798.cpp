#include <iostream>
using namespace std;

long long n;
long long ans = 6;
long long n2 = 1;

int main(){
    cin >> n;
    int i;
    for (i = 1; n2 <= n;i++){
        n2*=2;
    }
    i--;
    for (int j = 2; j < i; j++){
        ans = 2*(ans +1);
    }
    cout << ans << endl;//屁都不是
    return 0;
}