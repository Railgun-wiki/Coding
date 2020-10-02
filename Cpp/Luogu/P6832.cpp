#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
bool vis[26];
int Imax(int a,int b){
    if(a>b)
        return a;
    else return b;
}
int main(){
    string s;
    int ans=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(!vis[s[i]-'a']){
            vis[s[i]-'a']=1;
            char x=s[i];
            int tans=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==x){
                    tans++;
                }
            }
            ans=Imax(tans,ans);
        }
    }
    cout<<ans<<endl;
    return 0;
}