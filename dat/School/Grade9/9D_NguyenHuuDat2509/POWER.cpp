///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,k;
int ans;
long a[100005];
bool check(long int n)
{
    if(n==1) return 1;
    int i=2;
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            int m=pow(i,k);
            if(m>n) return 0;
            else if(m==n) return 1;
        }
        i++;
    }
    return 0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("POWER.inp","r")){
        freopen("POWER.inp","r",stdin);
        freopen("POWER.out","w",stdout);
    }
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            ans+=check(a[i]*a[j]);
    cout<<ans;
}