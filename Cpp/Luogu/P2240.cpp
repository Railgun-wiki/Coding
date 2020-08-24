#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node
{
    int w,v;
}A[300];
bool cmp(node a,node b){
    return a.w*b.v<=a.v*b.w;
}
int main(){
    int n,t;
    double ans=0;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>A[i].w>>A[i].v;
    }
    sort(A+1,A+n+1,cmp);
    for(int i=1;i<=n;i++){
        if(A[i].w<=t){
            ans=ans+A[i].v*1.0;
            t=t-A[i].w;
        }else{
            ans=ans+(A[i].v*1.0/A[i].w*1.0)*(t*1.0);
            t=0;
            break;
        }
    }
    printf("%.2lf",ans);
    return 0;
}