#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double y,x;
    scanf("%lf",&x);
    if(x>=0&&x<5) y=2.5-x; 
	else if(x>=5&&x<10) y=2-1.5*(x-3)*(x-3);
	else if(x>=10&&x<20) y=x/2-1.5;
    printf("%.3lf",y);
}
