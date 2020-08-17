#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	int number;
	double x;
};
bool cmp(file a,file b){
	return a.x>b.x;
}
int main(){
	int k,n;
	cin>>n>>k;
	file node[101];
	for(int i=0;i<n;i++){
		cin>>node[i].number>>node[i].x;
	}
	sort(node,node+n,cmp);
	cout<<node[k-1].number<<" "<<node[k-1].x;
}
