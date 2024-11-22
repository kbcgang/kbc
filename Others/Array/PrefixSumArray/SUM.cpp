///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long a[100005];
int n,q;
int dem[100005];
int l,r;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        dem[i]=dem[i-1];
        if(a[i]%2==0)
            dem[i]++;
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<dem[r-1]-dem[l-2]<<"\n";
    }
}