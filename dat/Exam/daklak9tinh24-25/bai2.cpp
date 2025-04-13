#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int t;
ll n;
main()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(3*n+1)*n/2<<"\n";
	}
}