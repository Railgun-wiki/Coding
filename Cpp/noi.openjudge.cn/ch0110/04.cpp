#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	int number;
	int x;
	int xc;
};
bool cmp(file a,file b){
	if(a.x==b.x){
		if(a.xc==b.xc) return a.number<b.number;
		else return a.xc>b.xc;
	}
	else return a.x>b.x;
}
int main(){
	int n;
	cin>>n;
	file node[315];
	for(int i=0;i<n;i++){
		int temp1,temp2,temp3;
		cin>>temp1>>temp2>>temp3;
		node[i].x=temp1+temp2+temp3;
		node[i].xc=temp1;
		node[i].number=i+1;
	}
	sort(node,node+n,cmp);
	for(int i=0;i<5;i++){
		cout<<node[i].number<<" "<<node[i].x<<endl; 
	}
}
