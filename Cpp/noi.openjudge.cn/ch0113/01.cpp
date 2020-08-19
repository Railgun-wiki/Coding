#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	string n;
	int a,b;
	cin>>a>>n>>b;
	int ans=0;
	for(int i=n.size()-1;i>=0;i--){
		int temp=0;
		if(n[i]>='a'&&n[i]<='z'){
			temp=n[i]-'a'+10;
		}else if(n[i]>='A'&&n[i]<='Z'){
			temp=n[i]-'A'+10;
		}else temp=n[i]-'0';
		//cout<<temp*pow(a,n.size()-i-1)<<" ";
		ans=ans+temp*pow(a,n.size()-i-1);
		//cout<<ans<<endl;
	}
	string anss;
	if(ans==0){
		cout<<0;
		return 0;
	}
	while(ans!=0){
		char temp;
		int t=ans%b;
		if(t>=10) temp=t-10+'A';
		else temp=t+'0';
		ans=ans/b;
		anss=temp+anss;
	}
	cout<<anss;
}
