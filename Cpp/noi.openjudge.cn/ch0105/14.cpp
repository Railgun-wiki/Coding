#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double n,b;
	cin>>n>>b;
	for(int i=0;i<b;i++){
		n=n*1.001;
	}
	printf("%.4lf",n);
}
