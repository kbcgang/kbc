#include<iostream>
#include<string>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
string a;
int k,num,p;
void get()
{
	while(k>0){
		for(int i=p;i<=a.size()-k;i++){
			if(a[i]-48>num)
			{
				p=i+1;
				num=a[i]-48;
			}
		}
		cout<<num;
		num=-1;
		k--;
	}
}
main()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	// ios_base::sync_with_stdio(0);
	// cin.tie(0);
	// cout.tie(0);
	cin>>a>>k;
	k=a.size()-k;
	get();
}