#include<iostream>
using namespace std;
int ans;
int in;
int gcd(int q){
	if(q==in){
		ans++;
		return 0;
	}else if(q>=in){
		return 0;
	}else for(int j=q;j<=in;j++){
		gcd(j);
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ans=0;
		cin>>in;
		gcd(1);
		cout<<ans<<endl;
	}
	return 0;
}
