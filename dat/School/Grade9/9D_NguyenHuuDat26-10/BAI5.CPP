///Kiên is unreliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,a[5005];
void ans()
{
    for(int x=0;x<n;x++)
    {
        int res=0;
        for(int i=0;i<=x-3;i++)
            for(int j=i+1;j<=x-2;j++)
                for(int k=j+1;k<=x-1;k++)
                    if(a[i]+a[j]+a[k]==a[x])
                        res++;
        cout<<res<<" ";
    }
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI5.inp", "r"))
    {
        freopen("BAI5.inp", "r", stdin);
        freopen("BAI5.out", "w", stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n<=100)
        ans();
}