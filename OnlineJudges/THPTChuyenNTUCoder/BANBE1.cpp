#include<bits/stdc++.h>
#define int long long
using namespace std;
int l,r,a[1005],ans;
void capso()
{
    for(int i=1; i<=500; i++)
        for(int j=i+i; j<=1e3; j+=i)
            a[j]+=i;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    capso();
    cin>>l>>r;
    for(int i=l; i<=r; i++)
    {
        int b=a[i];
        if(a[i]!=0&&a[b]!=0&&b>=l&&b<=r)
        {
            if(a[b]==i)
            {
                ans++;
                a[b]=0;
                a[i]=0;
            }
        }
    }
    cout<<ans;
}
