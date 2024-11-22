#include<bits/stdc++.h>
using namespace std;
int n;
string s;
long long ans;
long dem[1000005];
main()
{
    if(fopen("bai8.inp","r"))
    {
        freopen("bai8.inp","r",stdin);
        freopen("bai8.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>s;
    dem[0]++;
    long t=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            t--;
        else t++;
        ans+=dem[t];
        dem[t]++;
    }
    cout<<ans;
}
