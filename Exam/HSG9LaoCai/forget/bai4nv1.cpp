#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n/2; i++)
        if(a[i]!=a[n-i-1])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}
