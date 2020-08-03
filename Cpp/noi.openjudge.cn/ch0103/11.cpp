#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double a,b,k,ans;
	cin>>a>>b;
	k=floor(a/b);
	ans=a-k*b;
	printf("%g",ans);
}