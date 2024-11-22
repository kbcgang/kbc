#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],ans,number;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int t=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            if(t>ans)
            {
                ans=t;
                number=a[i-1];
            }
            t=1;
        }
        else
            t++;
    }
    cout<<number<<" "<<ans;
}
