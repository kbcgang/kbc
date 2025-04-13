#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
#include<cmath>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
int k;ll ans;
string a;
int dem[30],d;
void ChatGPT()
{
	int l=0,r=0,m=0;
	while(r<a.size()){
		dem[a[r]-97]++;
		if(dem[a[r]-97]==1)d++;
		if(d==k){
			m=r;
			while(dem[a[m]-97]>0&&m<a.size())
				m++;
			while(1){
				ans+=m-r;
				dem[a[l++]-97]--;
				if(dem[a[l-1]-97]==0)break;
			}
			d--;
		}
		r++;
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
	cin>>k;
	cin>>a;ChatGPT();
}