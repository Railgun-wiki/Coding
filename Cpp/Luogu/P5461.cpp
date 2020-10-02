#include<iostream>
#include<cstdio>
using namespace std;
const int Maxn=1025;
int a[Maxn][Maxn];
int main(){
    int n;
    cin>>n;
    n=(1<<n);
    a[0][n+1]=1;
    for(register int i=1;i<=n;i++){
        for(register int j=1;j<=n;j++){
            a[i][j]=a[i-1][j]^a[i-1][j+1];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}