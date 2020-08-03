#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	cin>>a;
	cout<<fixed<<setprecision(2)<<4.0/3.0*3.14*a*a*a;
}