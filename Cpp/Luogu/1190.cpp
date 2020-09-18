#include<iostream>
#include<algorithm>
using namespace std;
int ans,j[10010],s[200];
bool cmp(int x,int y){
    return x>y;
}
int main(){
    int n,m,maxa=1,mina=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>j[i];
    for(int i=1;i<=n;i++){
        mina=1;
        for(int x=2;x<=m;x++){
            if(s[mina]>s[x]) mina=x;
            //cout<<x<<endl;
        }
        //cout<<i<<" "<<s[mina]<<" ";
        s[mina]=s[mina]+j[i];
        //cout<<s[mina]<<" "<<mina<<endl;
    }
    sort(s+1,s+m+1,cmp);
    cout<<s[1]<<endl;
    return 0;
}