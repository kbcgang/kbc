///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
int dem1,dem2;
int a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CHIAQUA.inp","r"))
    {
        freopen("CHIAQUA.inp","r",stdin);
        freopen("CHIAQUA.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==100)
            dem1++;
        else dem2++;
    }
    if((dem2*2+dem1)&1)
        cout<<"NO";
    else cout<<"YES";
}