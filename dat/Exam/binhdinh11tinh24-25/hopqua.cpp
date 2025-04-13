#include<iostream>
#include<array>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,m;
int a[200005],b[200005];
ll s;
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
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	sort(a,a+n),sort(b,b+m);
	int j=0;
	for(int i=0;i<m;i++)
	{
		while(j<n&&a[j]<b[i])
			j++;
		if(j==n){cout<<-1;exit(0);}
		s+=a[j];
		j++;
	}
	cout<<s;
}