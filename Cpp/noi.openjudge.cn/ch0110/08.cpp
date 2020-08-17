#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct file{
	int number,age;
	string id;
};
int main(){
	int n;
	cin>>n;
	file node[101];
	for(int i=0;i<n;i++){
		cin>>node[i].id>>node[i].age;
		node[i].number=i;
	}
	for(int i = 0;i<n;i++){
        for(int j =1;j<n-i;++j){
            if((node[j].age>=60&&node[j-1].age<60)||((node[j-1].age>=60&&node[j].age>=60)&&node[j-1].age<node[j].age)){
            	swap(node[j-1],node[j]);
			}
        }
    }
	for(int i=0;i<n;i++){
		cout<<node[i].id<<endl;
	}
}
