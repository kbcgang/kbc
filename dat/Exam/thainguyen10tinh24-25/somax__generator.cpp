#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=1+rd()%100;
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
	cout<<n<<'\n';
	for(int i=0;i<n;i++)
		cout<<1+rd()%100<<' ';
}