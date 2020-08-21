#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
vector<int>Map[100100];
vector<int>ans;
queue<int>q;
bool vis[100100];
void DFS(int v){
    vis[v]=true;
    ans.push_back(v);
    for(int i=0;i<Map[v].size();i++){
        int t=Map[v][i];
        if(!vis[t]){
            DFS(t);
            //cout<<1;
        }
        //cout<<ans.size();
    }
}
bool vis1[100100];
void BFS(int v){
    ans.clear();
    q.push(v);
    vis1[v]=1;
    for(;!q.empty();){
        int t=q.front();
        q.pop();
        ans.push_back(t);
        for(int i=0;i<Map[t].size();i++){
            int qwq=Map[t][i];
            if(!vis1[qwq]){
                vis1[qwq]=1;
                q.push(qwq);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        Map[x].push_back(y);
    }
    for(int i=1;i<=n;i++) sort(Map[i].begin(),Map[i].end());
    DFS(1);
    //cout<<ans.size();
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    BFS(1);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}