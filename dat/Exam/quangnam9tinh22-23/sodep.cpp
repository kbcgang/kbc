#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
const ll inf = LLONG_MAX;
const int mod = 1e9+7;
vector<ll> prime={2,3,5,7,11,13,17,19,23};
int n;
ll x;
bool save;
ll luythua(ll a, ll b, ll c)
{
	ll res=1;
	while(b>0){
		if(b&1)res=res*a%c;
		a=a*a%c;
		b/=2;
	}
	return res;
}
bool test(ll a, ll m, int k, ll n)
{
	ll res=luythua(a,m,n);
	if(res==1||res==n-1)
		return 1;
	for(int i=1;i<k;i++)
	{
		res=res*res%n;
		if(res==1)
			return 0;
		if(res==n-1)
			return 1;
	}
	return 0;
}
bool RabinMiller(ll n)
{
	for(auto a:prime)
		if(a==n)
			return 1;
	if(n<29)
		return 0;
	ll m=n-1;
	int k=0;
	while(m%2==0){
		k++;
		m/=2;
	}
	for(auto a:prime)
		if(!test(a,m,k,n))
			return 0;
	return 1;
}
bool ktnt(ll n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
vector<ll> supprime={2,3,5,7};
ll p[4]={1,3,7,9};
void make_prime(ll s)
{
	for(int i=0;i<5;i++){
		s=s*10+p[i];
		if(s>1e9){
			if(ktnt(s)){
				make_prime(s);
				supprime.push_back(s);
			}
		}
		else{
			if(RabinMiller(s))
			{
				make_prime(s);
				supprime.push_back(s);
			}
		}
		s/=10;
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
	make_prime(2);
	make_prime(3);
	make_prime(5);
	make_prime(7);
	sort(supprime.begin(),supprime.end());
	// cout<<supprime.size();
	// for(auto i:supprime)cout<<i<<'\n';
	cin>>n;
	while(n--){
		cin>>x;
		if(*lower_bound(supprime.begin(),supprime.end(),x)==x)
			cout<<x<<'\n';
	}
}