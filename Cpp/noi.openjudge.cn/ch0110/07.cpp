#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct file{
	double high;
	int xy;
};
bool cmp(file a,file b){
	if(a.xy==b.xy){
		if(a.xy==0){
			return a.high<b.high;
		}else return a.high>b.high;
	}else return a.xy<b.xy;
}
int main(){
	int n;
	cin>>n;
	file node[50];
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp>>node[i].high;
		if(temp=="male"){
			node[i].xy=0;
		}else node[i].xy=1;
	}
	sort(node,node+n,cmp);
	for(int i=0;i<n;i++){
		printf("%.2lf ",node[i].high);
	}
}
