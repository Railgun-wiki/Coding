#include<iostream>
#include<algorithm>
using namespace std;
long long j,i,w[200000],a[200000],f[2000][2000],l[200000],ans=0;
int main(){
    int n,W;
    cin>>n>>W;
    for(int i=1;i<=n;i++){
        cin>>l[i]>>w[i]>>a[i];
    }
    for(i=1;i<=n;i++){
        for(j=W;j>=0;j--){
            if(j>=a[i])
                f[i][j]=max(f[i-1][j]+l[i],f[i-1][j-a[i]]+w[i]);
            else f[i][j]=f[i-1][j]+l[i];
            //cout<<f[i][j]<<" "<<i<<j<<" ";
            //cout<<ans++<<endl;
        }
    }
    for(j=0;j<=W;j++){
        ans=max(ans,f[n][j]);
    }
    cout<<ans*5;
    return 0;
}