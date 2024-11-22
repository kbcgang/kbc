#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
main()
{
  	cin >> n;
   	int k=sqrt(n);
	if(k*k>=n) cout<<k<<" "<<k;
	else if(k*(k+1)>=n) cout<<k<<" "<<k+1;
	else if((k+1)*(k+1)>=n) cout<<k+1<<" "<<k+1;
}