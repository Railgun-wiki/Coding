#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,b,ans=0;
	cin>>n>>b;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp==b) ans++;
	}
	cout<<ans;
}
