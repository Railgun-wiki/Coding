#include<iostream>
#include<cstdio>
using namespace std;
long long a,b,x,y,ans;
int main(){
    freopen("dating.in","r",stdin);
    freopen("dating.out","w",stdout);
    cin>>a>>b>>x>>y;
    for(long long i=x;i<=y;i++){
        if(i%a==0&&i%b==0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}