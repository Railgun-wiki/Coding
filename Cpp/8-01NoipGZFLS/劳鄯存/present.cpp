#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
long long n;
long long ans=-5000000000;
long long a[100100];
int main(){
    //此题急需急支糖浆优化
    freopen("present.in","r",stdin);
    freopen("present.out","w",stdout);
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(long long i=n-1;i>0;i--){
        for(long long j=i-1;j>=0;j--){
            //cout<<a[i]<<" "<<a[j]<<" "<<(a[i]+a[j])%2<<endl;
            if(abs((a[i]+a[j])%2)==1){
                ans=max(ans,a[i]+a[j]);
                //cout<<ans<<" ";
            }
        }
    }
    cout<<ans;
    return 0;
}