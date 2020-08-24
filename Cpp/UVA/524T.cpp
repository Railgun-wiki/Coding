#include <iostream>
#include <cmath>

using namespace std;

int a[26]={0};  //选择的数字
bool b[26]={0}; //每个数字有没有被选择
int n;          //n个数字找素数环 

bool pd(int x,int y)
{
    int s=x+y;
    int n=sqrt(s);
    for(int i=2; i<=n; i++)
    {
        if(s%i==0)
        {
        	
            return false;
        }
    }
    return true;
}

void output(void)
{
    for(int i=1; i<n; i++)
    {
        cout << a[i] <<" ";
    }
    cout << a[n] << endl;
}
void f(int step)
{
    for(int i=1; i<=n; i++)
    {
        if(b[i]==0&&pd(a[step-1],i))
        {
            a[step]=i;
            b[i]=1;
            if(step==n)
            {
                if(pd(a[n],a[1])&&a[1]==1)
                {
                    output();
                }
            }
            else
            {
                f(step+1);
            }
            b[i]=false;
        }
    }
}
int main(void)
{
    int i=1;
    while(cin >> n)
    {
    	if(i>=2)     //第二组就要开始输出换行了。。
    	{
    		cout << endl;
		}
		
        for(int i=0; i<=18; i++)
        {
            a[i]=0;
        }
        for(int i=0; i<=18; i++)
        {
            b[i]=0;
        }	
        cout << "Case "<<i<<":"<<endl;	
        f(1);
        i++;
    }
    
    return 0;
}