#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,I;
		cin>>a>>I;
		int ans=1;
		for(int k=1;k<a;k++){
			if(I%2==0){
				ans=ans*2+1;
				I=I/2;
			}else{
				ans=ans*2;
				I=(I+1)/2;
			}
		}
		cout<<ans<<endl;
	}
}
