#include<bits/stdc++.h>
using namespace std;
bool vis[1100][1100];
int x,y=1;
void Mo(int d){
    switch (d)
    {
        case 0:y=y+2;vis[x][y-1]=1;break;
        case 1:x=x+2;vis[x-1][y]=1;break;
        case 2:y=y-2;vis[x][y+1]=1;break;
        case 3:x=x-2;vis[x+1][y]=1;break;
    }
    vis[x][y]=1;
}
void hil(int a,int d,int f){
    if(f==0) return ;
    d=(d+a+2)%4;
    hil(0-a,d,f-1);
    Mo(d);
    d=(d-a+2)%4;
    hil(a,d,f-1);
    Mo(d);
    hil(a,d,f-1);
    d=(d-a+2)%4;
    Mo(d);
    hil(0-a,d,f-1);
    d=(d+a+2)%4;
}
int main(){
    memset(vis,false,sizeof(vis));
    int floor;
    cin>>floor;
    x=(2<<floor)-1;
    vis[x][1]=1;
    hil(1,0,floor);
    for(int i=(2<<floor)-1;i>0;i--)
	{
		for(int j=1;j<(2<<floor);j++)
			printf("%d",vis[j][i]);
		printf("\n");
	}
    return 0;
}