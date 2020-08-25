#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int A[2100][2100];
int F[2100][2010];
int main(){
    int x;
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        memset(F[i],-1,sizeof(F[i]));
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin>>A[i][j];
            if(i==x){
                F[i][j]=A[i][j];
            }
        }
    }
    for (int i = x-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            F[i][j]=A[i][j]+max(F[i+1][j],F[i+1][j+1]);
        }
    }
    cout<<F[1][1]<<endl;
    return 0;
}
