#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int tmin=0,tmax=0;
    int n,L;
    cin>>L>>n;
    for(int i=0;i<n;i++){
        int temp,ttmin,ttmax;
        cin>>temp;
        ttmin=min(temp,L+1-temp);
        ttmax=max(temp,L+1-temp);
        tmin=max(tmin,ttmin);
        tmax=max(tmax,ttmax);
    }
    cout<<tmin<<" "<<tmax<<endl;
    return 0;
}