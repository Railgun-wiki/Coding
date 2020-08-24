#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t0,t1,ans=1;
    cin>>t0;
    for(int i=1;i<n;i++){
        cin>>t1;
        ans=ans+(t0^t1);
        t0=t1;
    }
    cout<<ans;
    return 0;
}