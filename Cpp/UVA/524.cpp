#include<bits/stdc++.h>
using namespace std;
int A[20];
bool B[20];
int x;
bool s(int x){
    if(x==2||x==3||x==5||x==7||(x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0)){
        return true;
    }else return false;
}
int DFS(int step){
    if(step==x+1){
        if(s(A[1]+A[step-1])){
            for(int i=1;i<=x-1;i++){
                cout<<A[i]<<" ";
            }
            cout<<A[x];
            cout<<endl;
            return 0;
        }
    }
    else{
        for(int i=1;i<=x;i++){
            if(!B[i]&&s(A[step-1]+i)){
                B[i]=1;
                A[step]=i;
                //cout<<step<<" "<<A[step]<<endl;
                DFS(step+1);
                B[i]=0;
            }
        }
        return 0;
    }
    return 0;
}
int main(){
    //int x;
    int ans=0;
    while (cin>>x){
        memset(A,-1,sizeof(A));
        memset(B,false,sizeof(B));
        A[0]=0;
        A[1]=1;
        B[1]=1;
        if(ans) cout<<endl;
        cout<<"Case "<<++ans<<":"<<endl;
        DFS(2);
    }
    return 0;
}