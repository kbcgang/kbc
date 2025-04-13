#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int t;
ll k,a,b;
void ChatGPT()
{
	ll l=1,r=1e18,ans=0;
	while(l<=r){
		ll m=(l+r)/2;
		ll ab=1ll*a/__gcd(a,b)*b;
		ll p=1ll*m-m/a-m/b+m/ab;
		if(p>=k){ans=m;r=m-1;}
		else l=m+1;
	}
	cout<<ans<<'\n';
}
main()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){
		cin>>k>>a>>b;
		ChatGPT();
	}
}