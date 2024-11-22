#include<bits/stdc++.h>
#define int long long 
using namespace std;
int m,n,k;
main()
{
	cin>>m>>n>>k;
	cout<<min({m/2,n,(m+n-k)/3});
}