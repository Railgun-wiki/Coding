#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	int number;
	int x;
};
bool cmp(file a,file b){
	if(a.x==b.x) return a.number<b.number;
	else return a.x>b.x;
}
int main(){
	int m,n;
	cin>>n>>m;
	file node[6000];
	for(int i=0;i<n;i++){
		cin>>node[i].number>>node[i].x;
	}
	sort(node,node+n,cmp);
	int ans=m*1.5;
	int p=node[ans-1].x;
	for(int i=m*1.5;i<n;i++){
		if(node[i].x==node[i-1].x){
			ans++;
		}else break;
	}
	cout<<p<<" "<<ans<<endl;
	for(int i=0;i<ans;i++){
		cout<<node[i].number<<" "<<node[i].x<<endl;
	}
}
