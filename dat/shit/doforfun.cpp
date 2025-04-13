///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<climits>
#include<cmath>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int d[1000005];
void sanguoc()
{
	for(int i=1;i<=1e6;i++)
		for(int j=i;j<=1e6;j+=i)
			d[j]++;
}
kien()
{
	// if(fopen(".inp","r"))
	// {
	// 	freopen(".inp","r",stdin);
	// 	freopen(".out","w",stdout);
	// }
	cin.tie(0)->sync_with_stdio(0);
	int n,d=0;
	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0)
		{
			d+=2;
			if(i*i==n)
				d--;
		}
	
	/*
		a*b=n
		4*4=16
		2*6=12
		6*2=12
		n%a -> n%b -> d+=2
		12=2*6
		sqrt(12)=3
	*/
}