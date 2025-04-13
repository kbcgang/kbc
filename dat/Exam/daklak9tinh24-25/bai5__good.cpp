#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int k;
string a;
unordered_map<char,int> d;
void good()
{
	int ans=0;
	for(int i=0;i<a.size();i++){
		for(int j=i;d.size()<=k&&j<a.size();j++)
		{
			d[a[j]]++;
			if(d.size()==k)ans++;
			if(d.size()>k)break;
		}
		d.clear();
	}
	cout<<ans;
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
	cin>>k;
	cin>>a;
	good();
}