///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[100005],sleft[100005],sright[100005],al[100005],ar[100005];
int ans=INT_MAX;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    al[0]=a[0];
    for(int i=1;i<n;i++)
        if(a[i]<=al[i-1])
            al[i]=al[i-1]+1;
        else al[i]=a[i-1];
    ar[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        if(ar[i+1]>=a[i])
            ar[i]=ar[i+1]+1;
        else ar[i]=a[i];
    for(int i=1;i<n;i++)
        if(al[i]>a[i])
            sleft[i]=sleft[i-1]+al[i]-a[i];
        else sleft[i]=sleft[i-1];
    for(int i=n-2;i>=0;i--)
        if(ar[i]>a[i])
            sright[i]=sright[i+1]+ar[i]-a[i];
        else sright[i]=sright[i+1];
    for(int i=1;i<n-1;i++)
    {
        if(al[i-1]>ar[i+1])
            ans=min(ans,sleft[i-1]+sright[i]);
        else if(al[i-1]<ar[i+1])
            ans=min(ans,sleft[i]+sright[i+1]);
        else
            ans=min({ans,sleft[i-1]+sright[i],sleft[i]+sright[i+1]});
    }
    cout<<ans;
}