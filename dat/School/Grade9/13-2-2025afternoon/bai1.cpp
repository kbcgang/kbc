///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int s=0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0){s+=i;if(i*i!=n)s+=n/i;}
    n=s,s=0;
    for(int i=2;i<=sqrt(m);i++)if(m%i==0){s+=i;if(i*i!=m)s+=m/i;}
    m=s;
    if(m==n&&m!=0)cout<<"YES";
    else cout<<"NO";
}