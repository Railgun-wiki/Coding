#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x,a,b,c,d;
	cin>>x>>a>>b>>c>>d;
	cout<<fixed<<setprecision(7)<<a*x*x*x+b*x*x+c*x+d; 
	return 0;
}