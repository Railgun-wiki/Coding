#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,m;
	double x;
	char b;
	cin>>a>>b;
	if(a<=1000)
	{
		m=8;
	}
	else{
		x=(a*1.0-1000)/500.0;
		//cout<<x;
		m=8+4*ceil(x);
	} 
	//cout<<(a-1000)/500;
	if(b=='y')
	 m=m+5;
	cout<<m;
	return 0;
}
