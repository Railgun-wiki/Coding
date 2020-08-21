#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>a[200010];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		for(int j=0;j<y;j++){
			int temp0,temp1;
			cin>>temp0>>temp1;
			a[temp0].push_back(temp1);
			a[temp1].push_back(temp0);
		}
		for(int j=1;j<=x;j++){
			sort(a[j].begin(),a[j].end());
			for(int q=0;q<a[j].size();q++){
				cout<<a[j][q]<<" ";
			}
			cout<<endl;
			a[j].clear();
		}
	}
	return 0;
}
