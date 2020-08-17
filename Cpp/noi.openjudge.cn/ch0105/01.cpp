#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double n,ans=0,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        ans=ans+temp;
    }
    ans=ans/n;
    printf("%.2lf",ans);
    return 0;
}