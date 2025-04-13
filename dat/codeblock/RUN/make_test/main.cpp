#include<iostream>
#include<array>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,k;
int a[100005];
int Wood(int x)
{
	ll d=0;
	for(int i=0;i<n;i++)
		d+=a[i]/x;
	return d;
}
void ChatGPT()
{
	if(k>n){cout<<0;exit(0);}
	int l=1,r=*max_element(a,a+n);
	while(l<=r){
		int m=(l+r)/2;
		if(Wood(m)>=k)
			l=m+1;
		else r=m-1;
	}
	cout<<l-1;
}
main()
{
	//if(fopen(".inp","r"))
	//{
	//	freopen(".inp","r",stdin);
	//	freopen(".out","w",stdout);
	//}
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i];
	ChatGPT();
}
