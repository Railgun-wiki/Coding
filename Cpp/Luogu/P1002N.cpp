#include<iostream>
using namespace std;//先y后x
int dis[8][2]=
{
    {1,-2},
    {1,2},
    {2,-1},
    {2,1},
    {-2,-1},
    {-2,1},
    {-1,-2},
    {-1,2}
};
long long bx,by,hx,hy,ans;
long long anss[30][30];
bool Map[30][30];
long long DFS(int y,int x){
    if(y>by||x>bx){
        return 0;
    }
    if(!Map[y][x]){
        //cout<<y<<" "<<x<<" "<<ans<<endl;
        if(y==by&&x==bx){
            ans++;
            return 1;
        }
        else{
            if(!anss[y][x]) return anss[y][x]=DFS(y+1,x)+DFS(y,x+1);
            else return anss[y][x];
        }
    }
    else return 0;
}
int main(){
    //int bx,by,hx,hy;
    cin>>by>>bx>>hy>>hx;
    Map[hy][hx]=1;
    for(int i=0;i<8;i++){
        int mx,my;
        mx=hx+dis[i][1];
        my=hy+dis[i][0];
        if(mx>=0&&mx<=bx&&my>=0&&my<=by){
            Map[my][mx]=1;
        }
    }
    ans=DFS(0,0);
    cout<<ans<<endl;
    return 0;
}