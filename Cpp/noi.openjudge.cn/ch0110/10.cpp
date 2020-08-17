#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	int t=0;
	string a;
	string ans[110];
	getline(cin,a);
	if(a[0]!=' ') ans[0]=ans[0]+a[0];
	for(int i=1;i<a.size();i++){
		if(a[i]!=' ') ans[t]=ans[t]+a[i];
		else if(a[i-1]!=' ') t++;
	}
	sort(ans,ans+t+1);
	cout<<ans[0]<<endl;
	for(int i=1;i<=t;i++){
		if(ans[i]!=ans[i-1]) cout<<ans[i]<<endl;
	}
	return 0;
}
/*int main(){
	string a="I'm a pig";
	string b="I'm a pig";
	return a!=b;
}*/
