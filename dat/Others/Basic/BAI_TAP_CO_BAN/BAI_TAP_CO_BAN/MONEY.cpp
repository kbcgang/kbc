///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
//#define mod 1000000007
using namespace std;
int n,b;
int a[100005];
int s[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>b;
    int x=b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
        s[i]=max(s[i+1],a[i]);
//    cout<<s[n-1];
    for(int i=0;i<n-1;i++)
        if(a[i]<=b&&a[i]<s[i+1])
        {
            int m=b/a[i];
            x=max(x,b-m*a[i]+m*s[i+1]);
        }
    cout<<x;
}
