#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a=0;
	int n;
	cin>>n;
	double ans;
	for(int i=0;i<n;i++){
		double temp;
		cin>>temp;
		a=a+temp;
	}
	ans=a/(n*1.0);
	printf("%.4lf",ans);
}
