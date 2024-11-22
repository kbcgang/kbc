#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,demc=0,demo=0,ans=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='C')
            demc++;
        else if(s[i]=='O')
            demo+=demc;
        else
            ans+=demo;
    }
    cout<<ans;
}
