#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[2000],s=0,ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	s=s/n;
	for(int i=1;i<=n;i++){
		if(a[i]!=s){
			a[i+1]=a[i+1]+a[i]-s;
			ans++;
		}
	}
	cout<<ans;
    return 0;
}