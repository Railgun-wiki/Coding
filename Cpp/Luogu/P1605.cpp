#include<iostream>
#include<cstring>
using namespace std;
int n,m,t,sx,sy,ex,ey;
bool vis[10][10],go[10][10];
int ans,Move[4][2]={
    {-1,0},
    {0,1},
    {1,0},
    {0,-1}
};
int DFS(int x,int y){
    if(x==ex&&y==ey){
        ans++;
        return 0;
    }else{
        for(int i=0;i<4;i++){
            int tx=x+Move[i][0],ty=y+Move[i][1];
            if(tx<=n&&ty<=m&&tx>0&&ty>0&&vis[tx][ty]&&go[tx][ty]){
                vis[tx][ty]=0;
                DFS(tx,ty);
                vis[tx][ty]=1;
            }
        }
    }
    
}
int main(){
    memset(vis,true,sizeof(vis));
    memset(go,true,sizeof(go));
    cin>>n>>m>>t>>sx>>sy>>ex>>ey;
    for(int i=0;i<t;i++){
        int tx,ty;
        cin>>tx>>ty;
        go[tx][ty]=false;
    }
    vis[sx][sy]=0;
    DFS(sx,sy);
    cout<<ans;
    return 0;
}