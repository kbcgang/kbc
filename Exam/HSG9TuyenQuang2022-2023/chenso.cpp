#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
main()
{
    if (fopen("chenso.inp", "r"))
    {
        freopen("chenso.inp", "r", stdin);
        freopen("chenso.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    cin>>k;
    int m=lower_bound(a.begin(),a.begin()+n,k)-a.begin();
    a.insert(a.begin()+m,k);
    cout<<"\n";
    for(int i=a.size()-1;i>=0;i--)
        cout<<a[i]<<" ";
}