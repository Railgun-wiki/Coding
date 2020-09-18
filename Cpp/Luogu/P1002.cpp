#include<iostream>
using namespace std;
int hx,hy,bx,by,ans;
bool Map[21][21];
int Move[8][2]=
{
    {-1,2},
    {-2,1},
    {2,1},
    {1,2},
    {-1,-2},
    {-2,-1},
    {2,-1},
    {1,-2}
};
void DFS(int x,int y){
    if(x<0||y<0||x>20||y>20)
        return ;
    if(!Map[y][x]){
        if(x==bx&&y==by){
            ans++;
            return ;
        }
        DFS(y+1,x);
        DFS(y,x+1);
    }
    else return ;
    
}
int main(){
    cin>>hx>>hy>>bx>>by;
    for(int i=0;i<8;i++){
        if(hx+Move[i][1]>=0&&hy+Move[i][0]>=0&&hx+Move[i][1]<21&&hy+Move[i][0]<21)
            Map[hy+Move[i][0]][hx+Move[i][1]]=1;
    }
    DFS(0,0);
    cout<<ans<<endl;
    return 0;
}