///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n,q;
long long a[100005];
long long s[100005];
int x,y;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        {s[i]=s[i-1]+a[i];
        }
    while(q--)
    {
        cin>>x>>y;
        cout<<s[y-1]-s[x-2]<<"\n";
    }
}