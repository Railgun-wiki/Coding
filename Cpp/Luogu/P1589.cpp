#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int j,l;
    /* data */
};
int ans,t;
bool cmp(node x,node y){
    return x.l<y.l;
}
int maxax(int q,int p){
    if(q>p) return q;
    else return p;
}
int main(){
    int n,lw;
    node a[10010];
    cin>>n>>lw;
    for(int i=1;i<=n;i++){
        cin>>a[i].j>>a[i].l;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;i++){
        t=maxax(t,a[i].j);
        while (t<a[i].l){
            t=t+lw;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
