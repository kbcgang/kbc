#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
ll a,b;
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
	cin>>a>>b;
	cout<<b*b-a*a;
}