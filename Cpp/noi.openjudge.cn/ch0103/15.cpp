#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    double temp=y*1.0/x*1.0;
    int ans=n-ceil(temp);
    cout<<ans;
    //cout<<ceil(9*1.0/4*1.0);
}
