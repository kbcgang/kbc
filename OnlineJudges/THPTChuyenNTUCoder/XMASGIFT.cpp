#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t;
int s[1000005];
int ans[1000005];
void tong()
{
    int t=0;
    for(int i=1;i<=1e6;i++){t+=s[i-1];
        s[i]=s[i-1]+i;

        ans[i]=s[i]+t;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    tong();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<"\n";
    }
}
