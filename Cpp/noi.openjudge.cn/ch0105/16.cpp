#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double jg=200;
	int n,k,m=1;
	cin>>n>>k;
	while(m++){
		jg=jg*(1.0+k/100.0);
		//cout<<jg<<endl;
		if(jg<=n*m){
			cout<<m;
			return 0;
		}else if(m>20){
			cout<<"Impossible";
			return 0;
		}
	}
}
