#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int>ansx;
vector<int>ansy;
int main(){
    int n,ans=0;
    while(scanf("%d",&n)!=EOF){
        ansx.push_back(0);
        ansy.push_back(0);
        for(int y=1;y<=2*n;y++){
            int temp=y-n;
            if((temp>0&&(y*n)%temp==0)||temp==1){
                ansx.push_back(y*n/temp);
                ansy.push_back(y);
                ans++;
            }
        }
        cout<<ans<<endl;
        for(int i=1;i<ansx.size();i++){
            cout<<"1/"<<n<<" = 1/"<<ansx[i]<<" + 1/"<<ansy[i]<<endl;
        }
        ansx.clear();
        ansy.clear();
        ans=0;
    }
    return 0;
}