#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int h,r;
    double pi=3.14159;
    cin>>h>>r;
    int ans=ceil(20000/(r*r*pi*h));
    cout<<ans;
}