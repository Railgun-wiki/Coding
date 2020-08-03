#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    double temp=y/x;
    int ans=n-ceil(temp);
    cout<<ans;
    //cout<<floor(9/4);
}