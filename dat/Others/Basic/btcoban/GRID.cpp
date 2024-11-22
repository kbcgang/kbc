#include<bits/stdc++.h>
#define int long long 
using namespace std;
int r,c;
main()
{
	cin>>r>>c;
	if(r%2==1)
	{
		int n=(c-1)*2;
		int sothu=((r-1)/2)*10;
		cout<<sothu+n;
	}
	else{
		int n=(c-1)*2+1;
		int sothu=(r/2-1)*10;
		cout<<sothu+n;
	}
}

