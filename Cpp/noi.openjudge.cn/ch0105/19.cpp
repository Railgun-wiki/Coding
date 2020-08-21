#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double n,x,y,num;
	double ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>num;
		double temp;
		temp=2.0*sqrt(x*x+y*y)/50.0+1.5*(num*1.0);
		ans=ans+temp;
	}
	ans=ceil(ans);
	cout<<ans;
}
