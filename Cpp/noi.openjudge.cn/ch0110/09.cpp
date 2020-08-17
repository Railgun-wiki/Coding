#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	int n,t=0;
	cin>>n;
	int a[110];
	for(int i=0;i<n;i++){
		int te;
		bool iif=1;
		cin>>te;
		for(int j=0;j<i;j++){
			if(te==a[j]){
				iif=0;
				break;
			}
		}
		if(iif){
			a[t]=te;
			t++;
		}
	}
	sort(a,a+t);
	cout<<t<<endl;
	for(int i=0;i<t;i++){
		if(a[i]) cout<<a[i]<<" ";
	}
	return 0;
}
