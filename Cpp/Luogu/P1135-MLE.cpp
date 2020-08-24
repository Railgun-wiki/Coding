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
    //cout<<vis[x];
    if(go){
        if(x==b){
            cout<<y;
            go=0;
            return 0;
        }else{
            int tx=x+q[x];
            if(tx>0&&tx<=n&&!vis[tx]){
                vis[tx]=1;
                cout<<tx<<" "<<vis[tx]<<endl;
                DFS(tx,y+1);
            }
            tx=x-q[x];
            if(tx>0&&tx<=n&&!vis[tx]){
                vis[tx]=1;
                //cout<<tx<<" "<<vis[tx]<<endl;
                DFS(tx,y+1);
            }
            return 0;
        }
    }
    return 0;
//    if(x<1||x>n) return 1000000000;
//    if(x==b) return y;
//    else return min(DFS(x+q[x],y+1),DFS(x-q[x],y+1));
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
    DFS(a,0);
    if(go) cout<<-1<<endl;
    return 0;
}