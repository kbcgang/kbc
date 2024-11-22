#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,s;
main()
{
    if(fopen("TONGCHAN.INP","r"))
    {
        freopen("TONGCHAN.INP","r",stdin);
        freopen("TONGCHAN.OUT","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)
            s+=x;
    }

    cout<<s;
}