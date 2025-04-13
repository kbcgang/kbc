///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
#define mod 1000000007
using namespace std;
int t,n;
ll a[100005];
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=0;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>maxx)
            {
                ans++;
                maxx=a[i];
            }     
        }
        if(ans&1) cout<<"BOB\n";
        else cout<<"ANDY\n";
    }
}