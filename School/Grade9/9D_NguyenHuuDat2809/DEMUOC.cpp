///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long x;
int chan,le;
void check(long long n)
{
    long long s=1;
    map<long long,int> dem;
    for(int i=2;i<=sqrt(n);i++)
        while(n%i==0)
        {
            dem[i]++;
            n/=i;
        }
    if(n>1) dem[n]++;
    for(auto i:dem)
    {
        s*=i.second+1;
    }
    if(s&1) le++;
    else chan++;
}
main()
{
    if(fopen("DEMUOC.inp","r")){
        freopen("DEMUOC.inp","r",stdin);
        freopen("DEMUOC.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        check(x);
    }
    cout<<chan<<"\n"<<le;
}