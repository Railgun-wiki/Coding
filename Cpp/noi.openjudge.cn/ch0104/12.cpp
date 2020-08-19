#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int s;
    scanf("%d",&s);
    double b=27+23+s/3.0;
    double w=s/1.2;
    if(b>w) printf("Walk");
    else if(b<w) printf("Bike");
    else printf("All");
    return 0;
}
