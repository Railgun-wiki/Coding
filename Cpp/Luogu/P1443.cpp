#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
struct node
{
    /* data */
    int thx,thy,thstep;
};
queue<node>q;
bool vis[500][500];
int ans[500][500];
int Move[8][2]={
    {-2,1},
    {-1,2},
    {1,2},
    {2,1},
    {-2,-1},
    {-1,-2},
    {1,-2},
    {2,-1}
};
int n,m,a,b;
int BFS(int x,int y,int step){
    node ab;
    ab.thstep=step;
    ab.thx=x;
    ab.thy=y;
    q.push(ab);
    while(!q.empty()){
        node This=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            node New=This;
            New.thx+=Move[i][0];
            New.thy+=Move[i][1];
            int tx=New.thx,ty=New.thy;
            if(tx<1||ty<1||tx>n||ty>m) continue;
            else
            {
                if(!vis[tx][ty]){
                    vis[tx][ty]=1;
                    ans[tx][ty]=New.thstep;
                    New.thstep++;
                    q.push(New);
                }
            }
            
        }
    }
    return 0;
}
int main(){
    cin>>n>>m>>a>>b;
    ans[a][b]=0;
    vis[a][b]=1;
    BFS(a,b,1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!vis[i][j]) printf("%-5d",-1);
            else printf("%-5d",ans[i][j]);
        }
        cout<<endl;
    }
    return 0;
}