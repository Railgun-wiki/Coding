#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double n,ans=0;
	cin>>n;
	ans=n;
	for(int i=0;i<10;i++){
		n=n*0.5;
		ans=ans+n;
	}
	cout<<n<<endl;
	cout<<ans;
}
