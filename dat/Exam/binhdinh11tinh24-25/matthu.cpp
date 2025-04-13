#include<iostream>
#include<cmath>
#include<algorithm>
#include<array>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,m;
int a[100005],x[100005],y[100005],w[100005],ty[100005];
void sub1()
{
	for(int i=1;i<=m;i++){
		if(ty[i]==1)
		{
			ll s=0;
			for(int j=x[i];j<=y[i];j++)
				s+=a[j];
			cout<<s<<'\n';
		}
		else if(ty[i]==2)
		{
			for(int j=x[i];j<=y[i];j++)
				a[j]%=w[i];
		}
		else{
			a[x[i]]=y[i];
		}
	}
}
void sub2()
{
	for(int i=2;i<=n;i++)a[i]=a[i-1]+a[i];
	for(int i=1;i<=m;i++)
		cout<<a[y[i]]-a[x[i]-1]<<'\n';
}
main()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	// cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>ty[i];
		if(ty[i]==1)
			cin>>x[i]>>y[i];
		else if(ty[i]==2)
			cin>>x[i]>>y[i]>>w[i];
		else cin>>x[i]>>y[i];
	}
	for(int i=1;i<=m;i++)
		if(ty[i]!=1)
		{
			sub1();
			exit(0);
		}
	sub2();
}