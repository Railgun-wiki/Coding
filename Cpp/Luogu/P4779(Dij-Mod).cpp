#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
struct node
{
    int v,w;
};
vector<node>m[100010];
int dis[100010];
bool vis[100010];
typedef pair<int,int>pii;
priority_queue<pii,vector<pii>,greater<pii>>q;
void dij(int u){
    memset(dis,0x7f,sizeof(dis));
    dis[u]=0;
    q.push({0,u});
    while(!q.empty()){
        pii cur=q.top();
        q.pop();
        if(vis[cur.second]) continue;
        vis[cur.second]=1;
        for(int i;i<cur.second;i++){
            node e=m[i];
            if(dis[e.v]>dis[cur.second]+e.w){
                dis[e.v]=dis[cur.second]+e.w;
                q.push({dis[e.v],e.v});
            }
        }
    }
}
int main(){
}