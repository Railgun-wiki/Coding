#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int n;
    int anss=0;
    bool last=0;
    while (scanf("%d",&n)!=0){
        if(!n) return 0;
        bool a[10];
        bool ans=0;
        memset(a,false,sizeof(a));
        if(last) cout<<endl<<endl;
        anss++;
        for(int i=01234;i<=98765;i++){
            int temp=i*n;
            int ttemp=temp;
            int ti=i;
            bool iff=0;
            if(temp<=99999) for(int j=0;j<5;j++){
                int tt=ttemp%10;
                int tti=ti%10;
                if((!a[tt])&&(!a[tti])&&(tt!=tti)){
                    a[tt]=1;
                    a[tti]=1;
                    ttemp=ttemp/10;
                    ti=ti/10;
                    //cout<<tt<<" "<<tti<<endl;
                }
                else{
                    iff=1;
                    break;
                }
            }else{
                iff=1;
            }
            if(iff==0){
                if(anss!=0&&!last) cout<<endl;
                ans=1;
                if(temp<10000) cout<<0;
                cout<<temp<<" / ";
                if(i<=10000) cout<<0;
                cout<<i<<" = "<<n;
            }
            memset(a,false,sizeof(a));
        }
        last=0;
        if(!ans){
            cout<<"There are no solutions for "<<n<<".";
            last=1;
        }
    }
}