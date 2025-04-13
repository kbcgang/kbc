#include<iostream>
#include<array>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,x;
int d[1005];
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
	cin>>n;
	while(n--){
		cin>>x;
		d[x]++;
	}
	int res=0;
	for(int i=0;i<=1e3;i++)
		res=max(res,d[i]);
	for(int i=0;i<=1e3;i++)
		if(res==d[i])
			cout<<i<<'\n';
}