#include<iostream>
#include<algorithm>
using namespace std;
int j,i,w[200000],v[200000],f[200000];
int main(){
    int n,W;
    cin>>W>>n;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    for(i=1;i<=n;i++)
        for(j=w[i];j<=W;j++)
            f[j]=max(f[j],f[j-w[i]]+v[i]);
    cout<<f[W]<<endl;
    return 0;
}