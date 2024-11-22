#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[200005],binh,an,ans=INT_MAX;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        binh+=a[i];
    }
    for(int i=0;i<n;i++){
        an+=a[i];
        binh-=a[i];
        ans=min(ans,abs(an-binh));
    }
    cout<<ans;
}