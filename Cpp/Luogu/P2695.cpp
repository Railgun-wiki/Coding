#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,a[30000],b[30000],tmax=-1,qmax=-1,tans=0,qans=0,ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        tmax=max(tmax,a[i]);
        tans=tans+a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
        qmax=max(qmax,b[i]);
        qans=qans+b[i];
    }
    if(tmax>qmax||n>m||tans>qans){
        cout<<"you died!";
        return 0;
    }
    sort(a,a+n+1);
    sort(b,b+m+1);
    int i=1,j=1;
    while(i<=n&&j<=m){
        if(a[i]<=b[j]){
            ans=ans+b[j];
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(i<=n){
        cout<<"you died!";
        return 0;
    }
    cout<<ans;
    return 0;
}