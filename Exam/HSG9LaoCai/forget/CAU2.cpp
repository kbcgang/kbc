#include <bits/stdc++.h>
#define int long long
using namespace std;
map<int,int> dem;
 main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,n,m=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        dem[x]++;
        m=max(m,dem[x]);
    }
    cout<<m;
}
