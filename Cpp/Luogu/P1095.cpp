#include <iostream>

using namespace std;

const int Maxn = 310000;
int blue, n, T;
int f[Maxn];

int main() {
    cin >> blue >> n >> T;
    for (int i = 1; i <= T; i++){
        if (blue >= 10){
            f[i] = f[i-1] + 60;
            blue = blue - 10;
        }
        else
        {
            blue = blue + 4;
            f[i] = f[i-1];
        }
    }
    bool have = 0;
    for (int i = 1; i <= T; i++){
        f[i] = f[i]>(f[i-1]+17)? f[i]:(f[i-1]+17);
        if (f[i] >= n && !have){
            cout << "Yes" << endl << i << endl;
            have = 1;
        }
    }
    if(!have)
        cout << "No" << endl << f[T] << endl;
    return 0;
}