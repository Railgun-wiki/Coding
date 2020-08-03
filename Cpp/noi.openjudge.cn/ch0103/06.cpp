#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c;
	cin>>b>>a;
	c=a/b*100;
	cout<<fixed<<setprecision(3)<<c<<"%"; 
	return 0;
}