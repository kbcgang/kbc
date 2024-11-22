///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a[100005],b,s;
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
    cin>>n>>b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<long long>());
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s>=b)
        {
            cout<<i+1;
            exit(0);
        }
    }
}