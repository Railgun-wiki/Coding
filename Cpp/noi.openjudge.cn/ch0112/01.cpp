#include<iostream>
using namespace std;
int main(){
	string a;
	double x[2]={0,0};
	int t=0;
	char e;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]>='0'&&a[i]<='9'){
			x[t]=x[t]*10+a[i]-'0';
		}else {
			e=a[i];
			t++;
		}
	}
	switch(e){
		case '+':cout<<x[0]+x[1]; break;
		case '-':cout<<x[0]-x[1]; break;
		case '*':cout<<x[0]*x[1]; break;
		case '/':cout<<x[0]/x[1]; break;
		case '%':{
			int temp=x[1];
			int temp1=x[0];
			cout<<temp1%temp;
			break;
		}
	}
	return 0;
}
