#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005], k,ans=-1,s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    cin>>k;
    int vt=0;
    for (int i = 0; i < n; i++)
    {
        s+=a[i];
        if(s==k){
            ans=max(ans,i-vt+1);
            s-=a[vt];
            vt++;
        }
    }
    cout<<ans;
}