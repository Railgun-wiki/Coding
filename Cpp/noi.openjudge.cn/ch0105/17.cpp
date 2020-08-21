#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	long long n,f0=1,f1=1;
	cin>>n;
	if(n<3){
		cout<<1;
		return 0;
	}
	for(int i=0;i<n-2;i++){
		long long temp=f0;
		f0=f1+f0;
		f1=temp;
		//cout<<f0<<endl;
	}
	cout<<f0;
}
