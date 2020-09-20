#include<iostream>
using namespace std;
int hx,hy,bx,by,ans;
bool Map[21][21];
int Move[8][2]=
{
    {-2,1},
    {-2,-1},
    {-1,2},
    {-1,-2},
    {1,2},
    {1,-2},
    {2,1},
    {2,-1}
};
void DFS(int x,int y){
    if(x<0||y<0||x>hx||y>hy)
        return ;
    if(!Map[x][y]){
        cout<<x<<" "<<y<<" "<<ans<<endl;
        if(x==hx&&y==hy){
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
	    if(bx+Move[i][0]>=0&&by+Move[i][1]>=0&&bx+Move[i][0]<=hx&&by+Move[i][1]<=hy){
		    Map[Move[i][0]+bx][Move[i][1]+by]=1;
            cout<<Move[i][0]+bx<<" "<<Move[i][1]+by<<endl;
	    }
    }
    DFS(0,0);
    cout<<ans<<endl;
    return 0;
}
