#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    int mark;
    int number;
};
bool cmp(node x,node y){
    if(x.mark==y.mark)
        return x.number<y.number;
    else return x.mark>y.mark;
}
int main(){
    node a[6000];
    int n,m,count;
    cin>>n>>m;
    m=m*1.5;
    for(int i=1;i<=n;i++){
        cin>>a[i].number>>a[i].mark;
    }
    sort(a+1,a+n+1,cmp);
    cout<<a[m].mark<<" ";
    for(count=1;count<=n;count++){
        if(a[count].mark<a[m].mark){
            count--;
            break;
        }
    }
    cout<<count<<endl;
    for(int i=1;i<=count;i++){
        cout<<a[i].number<<" "<<a[i].mark<<endl;
    }
    return 0;
}