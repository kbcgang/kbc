///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long a[1000005];
long long MAX[100005];
int m,n,q;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    MAX[0]=a[0];
    for(int i=0;i<n;i++)
        MAX[i]=max(MAX[i-1],a[i]);
    while(q--)
    {
        cin>>m;
        cout<<MAX[m-1]<<"\n";
    }
}