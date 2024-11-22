///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,k,a[1000005],ans=INT_MAX,pos[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(pos[a[i]]!=0)
        {
            if(i-pos[a[i]]<k)
                ans=min(ans,a[i]);
        }
        pos[a[i]]=i;
    }
    if(ans!=INT_MAX) cout<<ans;
    else cout<<-1;
}