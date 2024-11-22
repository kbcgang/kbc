#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[5005],ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int s=a[i]+a[j];
            int o=j+1;
            while(s>a[o]&&o<n)
            {
                ans++;
                o++;
            }
        }
    }
    cout<<ans;
}
