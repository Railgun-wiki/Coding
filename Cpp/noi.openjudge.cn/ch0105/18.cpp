#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int n;
	double x,y;
	double temp0,temp1;
	cin>>n>>temp0>>temp1;
	x=temp1/temp0;
	for(int i=0;i<n-1;i++)
		cin>>temp0>>temp1;
		y=temp1/temp0;
		if(x-y>0.05){
			cout<<"worse"<<endl;
		}else if(y-x>0.05){
			cout<<"better"<<endl;
		}else{
			cout<<"same"<<endl;
		}
	} 
}
