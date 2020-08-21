#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double a,n,b;
	cin>>a>>n>>b;
	for(int i=0;i<b;i++){
		n=n*(1.0+a/100);
	}
	long long x=n;
	printf("%d",x);
}
