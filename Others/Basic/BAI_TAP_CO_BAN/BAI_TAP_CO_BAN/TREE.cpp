///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t;
int a[60];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    a[0]=1;
    for(int i=1; i<=60; i++)
        if(i%2==1) a[i]=a[i-1]*2;
        else a[i]=a[i-1]+1;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        cout<<a[i]<<"\n";
    }
}
