#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double ans=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
    printf("%.3lf",ans);
}