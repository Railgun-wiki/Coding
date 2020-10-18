#include<cstdio>
#include<algorithm>
#include<iostream>
#define re register int
using namespace std;
int nx,ny,ex,ey,n,f[1010];
int a[10005],b[10005],c[10005];
int tp,co[1000005],v[1000005];//尽可能开大，不要把空间开爆了
inline void pre() {
	for(re i=1;i<=n;i++) {
		int t=1;
		while(c[i]) {
			co[++tp]=t*a[i];
			v[tp]=t*b[i];
			c[i]-=t; t*=2;
			if(c[i]<t) {//如果剩下的不能再拆，就直接放在一起
				co[++tp]=a[i]*c[i];
				v[tp]=b[i]*c[i];
				break;
			}
		}
	}
}
int main() {
    freopen("a.in","r",stdin);
	scanf("%d:%d%d:%d%d",&nx,&ny,&ex,&ey,&n);
	int t=(ex*60+ey)-(nx*60+ny);
	for(re i=1;i<=n;i++) {
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		if(!c[i]) c[i]=999999;
	}
	pre();//二进制拆分
    cout << tp << endl;
    //for(re i=1;i<=tp;i++)
    //    cout << co[i] << " " << v[i] << endl;
	for(re i=1;i<=tp;i++) {//考虑每个拆出来的物品
		for(re j=t;j>=co[i];j--)//01背包板子
			f[j]=max(f[j],f[j-co[i]]+v[i]);
	}
	printf("%d",f[t]);
	return 0;
} 