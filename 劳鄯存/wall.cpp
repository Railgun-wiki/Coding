#include<iostream>
#include<queue>
#include<cstdio>
#include<vector>
using namespace std;
int move[2][4]={{-1,0,1,0},{0,1,0,-1}};
int b[1100][1100];
int t=0;
int m,n,k,ans;
bool a[1100][1100];
int tx,ty;
vector<int>aans;
struct node{
    int x,y;
    int lastx,lasty;
};
queue<node>q;
bool cmp=1;
void BFS(){
    cmp=1;
    if(b[ty][tx]){
        ans=aans[b[q.front().y][q.front().x]-1];
        //cout<<aans[b[ty][tx]-1]<<" "<<endl;
        q.pop();
        cmp=0;
        return ;
    }else{
        t++;
        b[q.front().y][q.front().x]=t;
    }
    while(!q.empty()){
        node bi=q.front();
        q.pop();
        //cout<<bi.y<<" "<<bi.x<<"(y,x)"<<endl;
        if(bi.x<=0||bi.y<=0||bi.x>=m+1||bi.y>=n+1){
            continue;
        }else{
            for(int i=0;i<4;i++){
                node New=bi;
                New.lastx=bi.x;
                New.lasty=bi.y;
                New.x=New.x+move[0][i];
                New.y=New.y+move[1][i];
                //cout<<move[1][i]<<move[0][i]<<New.lasty<<New.lastx<<endl;
                if(!a[New.y][New.x]){
                    //cout<<a[New.y][New.x]<<" "<<New.y<<" "<<New.x<<endl;
                    ans++;
                }
                else if(New.x!=bi.lastx||New.y!=bi.lasty){
                    //cout<<New.y<<" "<<New.x<<"(New)"<<endl;
                    b[New.y][New.x]=t;
                    q.push(New);
                }
            }
        }
    }
}
int main(){
    freopen("wall.in","r",stdin);
    freopen("wall.out","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char temp;
            cin>>temp;
            if(temp=='.'){
                a[i][j]=1;
            }else a[i][j]=0;
        }
    }
    for(int j=1;j<=k;j++){
        //cout<<q.front().x;
        ans=0;
        cin>>ty>>tx;
        node qwq;
        qwq.lastx=qwq.lasty=-1;
        qwq.x=tx;
        qwq.y=ty;
        q.push(qwq);
        BFS();
        if(cmp) aans.push_back(ans);
        //for(int o=1;o<=n;o++){
        //    for(int u=1;u<=m;u++){
        //       cout<<b[o][u];
        //   }
        //    cout<<endl;
        //}
        //for(int w=0;w<t;w++) cout<<aans[w]<<" ";
        //cout<<aans[b[ty][tx]-1];
        cout<<ans<<endl;
    }
    return 0;
}