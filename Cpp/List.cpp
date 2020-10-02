#include<iostream>
#include<malloc.h>
using namespace std;
struct Node{
    int data;
    Node *Parent;
    Node *Rchild;
    Node *Lchild;
};
void head(){
    Node *Root=NULL;
    int d;
    cin>>d;
    Root=(Node *)malloc(sizeof(Node));
    Root->data=d;
    Root->Parent=NULL;
    Root->Lchild=NULL;
    Root->Rchild=NULL;
}
int main(){
    int ist;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ist;
        if(ist==0){
            int da;
            
        }
    }
}