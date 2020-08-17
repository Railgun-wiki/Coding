#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	string number;
	int x;
};
bool cmp(file a,file b){
	if(a.x==b.x) return a.number<b.number;
	else return a.x>b.x;
}
int main(){
	int n;
	cin>>n;
	file node[30];
	for(int i=0;i<n;i++){
		cin>>node[i].number>>node[i].x;
	}
	sort(node,node+n,cmp);
	for(int i=0;i<n;i++){
		cout<<node[i].number<<" "<<node[i].x<<endl; 
	}
}
