#include<iostream>
#include<vector>
using namespace std;
vector<int>a;
int main(){
	int n=-1,t;
	while(cin>>t&&t!=42){
		a.push_back(t);
		n++;
	}
	for(int i=0;i<=n;i++){
		cout<<a[i]<<endl;
	}
}
