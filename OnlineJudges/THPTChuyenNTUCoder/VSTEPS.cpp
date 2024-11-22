///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,k;
long a[100005];
long ans=0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        a[x]=-1;
    }
    a[1]=1;
    if(a[2]!=-1) a[2]++;
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=-1)
            a[i]=((a[i-1]+a[i-2])%14062008)%14062008;
        else a[i]=0;
    }
    cout<<a[n]%14062008;
}
