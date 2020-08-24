#include<iostream>
#include<queue>
using namespace std;
queue<int>q;
bool visit[10010];
int main(){
    int n;
    cin>>n;
    int a[10010];
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        for(int j=1;j<i;j++){
            if((j==1||a[j-1]<num)&&a[j]>=num){
                
            }
        }
    }
}