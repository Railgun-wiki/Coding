#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    float a,b;
    float i;
    cin>>a>>b;
    i=1/(1/a+1/b);
    printf("%.2f",i);
    return 0;
}