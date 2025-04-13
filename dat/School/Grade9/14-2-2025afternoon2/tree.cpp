///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x;
int a[100005],i;
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
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>x;
        if(i==0||a[i-1]<x){a[i++]=x;}
        else{
            int pos=lower_bound(a,a+i,x)-a;
            a[pos]=x;
        }
    }
    cout<<n-i;
}