#include <bits/stdc++.h>
#define kien long long
#define JAV main
using namespace std;
int n,m;
int d[1000005],x;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    while(n--)
    {
        cin>>x;
        d[x]++;
        cout<<d[x]<<'\n';
    }
}
