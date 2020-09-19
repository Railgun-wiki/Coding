#include<iostream>
using namespace std;
int main(){
    int n,m,p[4000],ans=500;
    cin>>n>>m;
    cin>>p[1]>>p[2];
    for(int i=m;i<=n;i++){
        cin>>p[i];
        int tans=0;
        for(int j=i-m+1;j<=i;j++){
            tans=tans+p[j];
        }
        ans=min(ans,tans);
    }
    cout<<ans<<endl;
    return 0;
}