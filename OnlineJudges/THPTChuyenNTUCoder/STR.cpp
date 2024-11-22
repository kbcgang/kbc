#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n;
    cin>>m>>n;
    if(m>n)
    {
        for(int i=0;i<m;i++)
            cout<<n;
    }
    else{
        for(int i=0;i<n;i++)
            cout<<m;
    }
}
