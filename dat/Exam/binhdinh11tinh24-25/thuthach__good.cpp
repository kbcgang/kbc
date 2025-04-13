#include<iostream>
#include<array>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int n,k,a,b;
void good()
{

	for(int i=1; ;i++)
		if(i%a!=0&&i%b!=0)
		{
			k--;
			if(k==0)
				{cout<<i<<'\n';break;}
		}
}
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
	cin>>n;
	while(n--){
		cin>>k>>a>>b;
		good();
	}
}