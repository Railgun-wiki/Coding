#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//vector<int>q;
int q[300];
int n,a,b;
bool vis[300];
bool go=1;
int DFS(int x,int y){
    if(x<1||x>n) return 1000000000;
    if(x==b) return y;
    else{
        if(vis[x]==1){
            return -1;
        }
        else {
            vis[x]=1;
            return min(DFS(x+q[x],y+1),DFS(x-q[x],y+1));
            //vis[x]=0;
        }
    }
}
int main(){
    cin>>n>>a>>b;
    q[0]=0;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        q[i]=k;
        if(i==a&&k==0){
            cout<<-1;
            return 0;
        }
    }
    vis[1]=1;
    cout<<DFS(a,0);
    return 0;
}