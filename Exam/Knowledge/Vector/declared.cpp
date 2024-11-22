#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    v.clear();
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
