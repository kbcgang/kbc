#include<iostream>
#include<array>
#include<unordered_map>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,k;
ll a[200005];
unordered_map<ll,int> d;
ll ans;
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
	for(int i=1;i<=n;i++){
		cin>>a[i];}
	d[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+a[i];
		ans+=d[a[i]-k];
		d[a[i]]++;
	}
	cout<<ans;
}