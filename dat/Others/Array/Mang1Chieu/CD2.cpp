///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1000005],k,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0,s=0;
    for(int d=0;d<n;d++)
    {
        while(s+a[c]<=k&&c<n)
        {
            s+=a[c];
            c++;
        }
        ans=max(ans,c-d);
        s-=a[d];

    }
    cout<<ans;
}