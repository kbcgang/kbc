#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
string a="qwertyuiopasdfghjklzxcvbnm";
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
	srand(time(NULL));
	int k=1+rand()%26;
	cout<<k<<"\n";
	int n=1+rand()%1500;
	string s;
	while(n--)
		cout<<a[rand()%26];
}