#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a=0;
	double ans;
	for(int i=0;i<12;i++){
		double temp;
		cin>>temp;
		a=a+temp;
	}
	ans=a/12.0;
	printf("$%.2lf",ans);
}
