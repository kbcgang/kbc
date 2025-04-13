#include<iostream>
#include<array>
#include<cstdlib>
#include<ctime>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
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
	cout<<1<<'\n';
	int a=2+rand()%10;
	cout<<1+rand()%10000<<' '<<a<<' '<<a+rand()%50;
}