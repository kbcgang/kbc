///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long long a[100005];
int n,q,m;
long long MIN[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    MIN[0]=a[0];
    for(int i=1;i<n;i++)
        MIN[i]=min(MIN[i-1],a[i]);
    while(q--)
    {
        cin>>m;
        cout<<MIN[m-1]<<"\n";
    }
}