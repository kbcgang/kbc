#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a[3],b[3],ans1,ans2;
main()
{
   	ios_base::sync_with_stdio(0);
   	cin.tie(0);
   	cout.tie(0);
	for(int i=0;i<3;i++) cin>>a[i];
	for(int i=0;i<3;i++) cin>>b[i];
	for(int i=0;i<3;i++){
		if(a[i]>b[i]) ans1++;
		else if(b[i]>a[i]) ans2++;
	}
	cout<<ans1<<" "<<ans2;
}