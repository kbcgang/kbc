#include<iostream>
#include<string>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
string n;bool save=1;
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
	int dem=0;
	int d=0;
	int s=0;
	for(int i=0;i<n.size();i++)
	{
		if(n[i]==49)dem++;
		if(n[i]==51)d++;
		else d=0;
		if(d>2)save=0;
		if(n[i]!=49&&n[i]!=51)save=0;
		s+=n[i]-48;
	}
	if(s%9==0&&save==1)cout<<"YES";
	else cout<<"NO";
	cout<<"\n"<<dem;
}